#include "web/http/http_parser.h"

#include "util/util_string.h"
#include "web/http/http_message.h"
#include "web/uri/uri_parser.h"

#include <algorithm>
#include <cctype>
#include <format>

namespace Web::Http {
Parser::Parser(std::string_view data) : Parsing::Parser(data) {}

bool Parser::get_token_char(Char &out_char)
{
    if (is_eof() ||
        !(is_equal('!') || in_bounds('#', '\'') || in_bounds('*', '+') ||
          in_bounds('-', '.') || in_bounds('0', '9') || in_bounds('A', 'Z') ||
          in_bounds('^', 'z') || is_equal('|') || is_equal('~'))) {
        return false;
    }
    out_char = get_current();
    move_next();
    return true;
}

bool Parser::get_token(std::string_view &out_token)
{
    push_save();
    Char c;
    while (get_token_char(c)) {
    }
    if (get_save_length() == 0) {
        load_save();
        return false;
    }
    out_token = get_save_string();
    pop_save();
    return true;
}

bool Parser::get_visible_char(Char &out_char)
{
    if (is_eof() || !in_bounds('!', '~')) {
        return false;
    }
    out_char = get_current();
    move_next();
    return true;
}

bool Parser::get_obs_char(Char &out_char)
{
    if (is_eof() ||
        !in_bounds(static_cast<Char>(0x80), static_cast<Char>(0xFF))) {
        return false;
    }
    out_char = get_current();
    move_next();
    return true;
}

MessageParser::MessageParser(std::string_view data, Version version_mask)
    : Parser(data),
      version_mask(version_mask)
{}

bool MessageParser::get_version(Version &out_version)
{
    Nat8 major = 0, minor = 0;
    if (!(require("HTTP/") && get_digit(major) && require('.') &&
          get_digit(minor))) {
        return false;
    }
    const auto version = to_version(major, minor);
    if (!version) {
        return false;
    }
    out_version = *version;
    return true;
}

bool MessageParser::get_field_char(Char &out_char)
{
    if (!(get_visible_char(out_char) || get_obs_char(out_char))) {
        return false;
    }
    return true;
}

bool MessageParser::get_field_value(std::string_view &out_value)
{
    push_save();
    Char c;
    while (get_field_char(c) || require(' ') || require('\t')) {
    }
    out_value = get_save_string();
    pop_save();
    return true;
}

bool MessageParser::get_field_line(
    std::string_view &out_name,
    std::string_view &out_value)
{
    if (!(get_token(out_name) && require(':') && get_whitespace() &&
          get_field_value(out_value) && get_whitespace())) {
        return false;
    }
    return true;
}

bool MessageParser::valid_version(Version version) const
{
    return (version & this->version_mask) == version;
}
}  // namespace Web::Http

namespace Web::Http {
RequestParser::RequestParser(
    std::string_view data,
    Version version_mask,
    Method method_mask)
    : MessageParser(data, version_mask),
      method_mask(method_mask)
{}

Status RequestParser::parse(Request &out_request)
{
    // Request line
    if (!(get_request_line(
            out_request.method, out_request.target, out_request.version))) {
        return Status::BadRequest;
    }
    if (!valid_method(out_request.method)) {
        return Status::MethodNotAllowed;
    }
    if (!valid_version(out_request.version)) {
        return Status::HttpVersionNotSupported;
    }

    if (!require("\r\n")) {
        return Status::BadRequest;
    }

    // Extract header key-value pairs
    std::string_view name, value;
    std::map<std::string, std::string> headers;
    while (get_field_line(name, value) && require("\r\n")) {
        std::string name_lower = Util::to_lower(std::string(name));

        // Append field if name already exists
        if (auto it = headers.find(name_lower); it != headers.end()) {
            // Cannot have multiple host fields
            if (name == "host") {
                return Status::BadRequest;
            }
            it->second += std::format(", {}", value);
        } else {
            headers[name_lower] = value;
        }
    }

    // Parse individual headers
    for (const auto &[header_name, header_value] : headers) {
        auto header_type = to_header_type(header_name);
        if (header_type) {
            HeaderParser parser(header_value);
            std::unique_ptr<Header> header = parser.parse(*header_type);
            if (header) {
                out_request.headers[*header_type] = std::move(header);
            }
        }
    }

    // HTTP/1.1 requires host field
    if (is_flag_set(out_request.version, Version::Http_1_1) &&
        !out_request.headers.contains(Header::Type::Host)) {
        return Status::BadRequest;
    }

    if (!require("\r\n")) {
        return Status::BadRequest;
    }

    ContentLength *const content_length =
        out_request.get_header<ContentLength>();
    if (content_length != nullptr) {
        if (get_remaining() >= content_length->length) {
            push_save();
            move_forward(content_length->length);
            std::string_view body = get_save_string();
            out_request.body = std::vector<Byte>(body.begin(), body.end());
            pop_save();
        }
    }
    return Status::Ok;
}

bool RequestParser::get_method(Method &out_method)
{
    std::string_view method_token;
    if (!get_token(method_token)) {
        return false;
    }
    const auto method = to_method(method_token);
    if (!method) {
        return false;
    }
    out_method = *method;
    return true;
}

bool RequestParser::get_target(Uri::Uri &out_target)
{
    push_save();
    while (!is_eof() && !is_equal(' ')) {
        move_next();
    }
    if (get_save_length() == 0) {
        return false;
    }
    Uri::Parser uri_parser(get_save_string());
    pop_save();

    if (!uri_parser.parse(out_target)) {
        return false;
    }
    return true;
}

bool RequestParser::get_request_line(
    Method &out_method,
    Uri::Uri &out_target,
    Version &out_version)
{
    if (!(get_method(out_method) && require(' ') && get_target(out_target) &&
          require(' ') && get_version(out_version))) {
        return false;
    }
    return true;
}

bool RequestParser::valid_method(Method method) const
{
    return (method & this->method_mask) == method;
}
}  // namespace Web::Http