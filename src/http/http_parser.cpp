#include "http_parser.h"

#include <algorithm>
#include <cctype>
#include <format>

namespace Web::Http {
Parser::Parser(const std::string_view &data, Version version_mask)
    : Web::Parser(data),
      version_mask(version_mask)
{}

bool Parser::get_token_char(Char &out_char)
{
    if (!is_valid() || !(get_current() == '!' ||
                         (get_current() >= '#' && get_current() <= '\'') ||
                         (get_current() >= '*' && get_current() <= '+') ||
                         (get_current() >= '-' && get_current() <= '.') ||
                         (get_current() >= '0' && get_current() <= '9') ||
                         (get_current() >= 'A' && get_current() <= 'Z') ||
                         (get_current() >= '^' && get_current() <= 'z') ||
                         get_current() == '|' || get_current() == '~')) {
        return false;
    }
    out_char = get_current();
    this->i++;
    return true;
}

bool Parser::get_token(std::string_view &out_token)
{
    size_t j = this->i;
    Char c;
    while (get_token_char(c)) {
    }
    if (i == j) {
        return false;
    }
    out_token = std::string_view(&this->data[j], this->i - j);
    return true;
}

bool Parser::get_version(Version &out_version)
{
    Nat8 major = 0, minor = 0;
    if (!(required_string("HTTP/") && get_digit(major) && required_char('.') &&
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

bool Parser::get_visible_char(Char &out_char)
{
    if (!is_valid() || get_current() < ' ' || get_current() > '~') {
        return false;
    }
    out_char = get_current();
    this->i++;
    return true;
}

bool Parser::get_obs_char(Char &out_char)
{
    if (!is_valid() || get_current() < 0x80) {
        return false;
    }
    out_char = get_current();
    this->i++;
    return true;
}

bool Parser::get_field_char(Char &out_char)
{
    if (!(get_visible_char(out_char) || get_obs_char(out_char))) {
        return false;
    }
    return true;
}

bool Parser::get_field_value(std::string_view &out_value)
{
    size_t j = this->i;
    Char c;
    while (get_field_char(c) || required_char(' ') || required_char('\t')) {
    }
    out_value = std::string_view(&this->data[j], i - j);
    return true;
}

bool Parser::get_field_line(
    std::string_view &out_name,
    std::string_view &out_value)
{
    if (!(get_token(out_name) && required_char(':') && optional_whitespace() &&
          get_field_value(out_value) && optional_whitespace())) {
        return false;
    }
    return true;
}

RequestParser::RequestParser(
    const std::string_view &data,
    Version version_mask,
    Method method_mask)
    : Parser(data, version_mask),
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

    if (!required_string("\r\n")) {
        return Status::BadRequest;
    }

    // Fields
    std::string_view name, value;
    while (get_field_line(name, value) && required_string("\r\n")) {
        // To lowercase
        std::string name_lower(name.size(), 0);
        std::transform(
            name.begin(), name.end(), name_lower.begin(), [](char c) {
                return std::tolower(c);
            });

        // Append field if name already exists
        if (auto it = out_request.fields.find(name_lower);
            it != out_request.fields.end()) {
            // Cannot have multiple host fields
            if (name == "host") {
                return Status::BadRequest;
            }
            it->second += std::format(", {}", value);
        } else {
            out_request.fields[name_lower] = std::string(value);
        }
    }
    // HTTP/1.1 requires host field
    if (is_flag_set(out_request.version, Version::Http_1_1) &&
        !out_request.fields.contains("host")) {
        return Status::BadRequest;
    }

    if (!required_string("\r\n")) {
        return Status::BadRequest;
    }
    // TODO: parse body
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

bool RequestParser::get_target(std::string &out_target)
{
    size_t j = this->i;
    while (i < this->data.size() && this->data[i] != ' ') {
        i++;
    }
    if (i == j) {
        return false;
    }
    out_target = std::string(&this->data[j], i - j);
    return true;
}

bool RequestParser::get_request_line(
    Method &out_method,
    std::string &out_target,
    Version &out_version)
{
    if (!(get_method(out_method) && required_space() &&
          get_target(out_target) && required_space() &&
          get_version(out_version))) {
        return false;
    }
    return true;
}

bool RequestParser::valid_method(Method method) const
{
    return (method & this->method_mask) == method;
}

bool RequestParser::valid_version(Version version) const
{
    return (version & this->version_mask) == version;
}
}  // namespace Web::Http