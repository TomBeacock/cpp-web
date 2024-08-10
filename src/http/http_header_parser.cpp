#include "web/http/http_header_parser.h"

#include "util/util_string.h"

#include <sstream>

namespace Web::Http {
Http::HeaderParser::HeaderParser(std::string_view data) : Parser(data) {}

template <>
bool Http::HeaderParser::parse<AcceptHeader>(AcceptHeader &out_accept)
{
    push_save();
    Media::Type media_type;
    Nat16 weight;
    while (true) {
        if (!get_media_type(media_type)) {
            load_save();
            return false;
        }
        weight = 1000;
        if (get_weight(weight)) {
        }
        out_accept.types.push_back({media_type, weight});
        push_save();
        if (!(get_whitespace() && require(',') && get_whitespace())) {
            load_save();
            break;
        }
        pop_save();
    }
    pop_save();
    return true;
}

template <>
bool Http::HeaderParser::parse<ContentLengthHeader>(
    ContentLengthHeader &out_content_length)
{
    return get_nat(out_content_length.length);
}

template <>
bool Http::HeaderParser::parse<ContentTypeHeader>(
    ContentTypeHeader &out_content_type)
{
    if (!get_media_type(out_content_type.type)) {
        return false;
    }
    std::map<std::string, std::string> params;
    if (get_parameters(params)) {
        if (auto it = params.find("charset"); it != params.end()) {
            out_content_type.charset = it->second;
        }
        if (auto it = params.find("boundary"); it != params.end()) {
            out_content_type.boundary = it->second;
        }
    }
    return true;
}

bool Http::HeaderParser::get_q_value(Nat16 &out_value)
{
    push_save();
    if (require("0")) {
        out_value = 0;
        if (require(".")) {
            Nat8 digit;
            int i = 0;
            for (; i < 3 && get_digit(digit); i++) {
                out_value = out_value * 10 + digit;
            }
            for (; i < 3; i++) {
                out_value *= 10;
            }
        }
        pop_save();
        return true;
    }
    if (require("1")) {
        out_value = 1000;
        if (require(".")) {
            Nat8 digit;
            for (int i = 0; i < 3; i++) {
                push_save();
                if (!get_digit(digit) || digit != 0) {
                    load_save();
                    break;
                }
                pop_save();
            }
        }
        pop_save();
        return true;
    }
    load_save();
    return false;
}

bool Http::HeaderParser::get_weight(Nat16 &out_weight)
{
    push_save();
    ;
    if (!(get_whitespace() && require(';') && get_whitespace() &&
          require("q=") && get_q_value(out_weight))) {
        load_save();
        return false;
    }
    pop_save();
    return true;
}

bool Http::HeaderParser::get_media_type(Media::Type &out_type)
{
    push_save();
    std::string_view type, subtype;
    if (!(get_token(type) && require('/') && get_token(subtype))) {
        load_save();
        return false;
    }

    std::string lower_type = Util::to_lower(std::string(type));
    std::string lower_subtype = Util::to_lower(std::string(subtype));
    auto opt_type =
        Media::to_type(std::format("{}/{}", lower_type, lower_subtype));
    if (!opt_type) {
        load_save();
        return false;
    }
    out_type = *opt_type;
    pop_save();
    return true;
}

bool Http::HeaderParser::get_quoted_char(Char &out_char)
{
    if (get_obs_char(out_char)) {
        return true;
    }

    if (is_eof() || !(is_equal('\t') || is_equal(' ') || is_equal('!') ||
                      in_bounds('#', '[') || in_bounds(']', '~'))) {
        return false;
    }
    out_char = get_current();
    move_next();
    return true;
}

bool Http::HeaderParser::get_quoted_pair(Char &out_char)
{
    push_save();
    if (!require('\\')) {
        load_save();
        return false;
    }
    if (get_obs_char(out_char) || get_visible_char(out_char)) {
        pop_save();
        return true;
    }
    if (is_eof() || !(is_equal('\t') || is_equal(' '))) {
        load_save();
        return false;
    }
    out_char = get_current();
    pop_save();
    return true;
}

bool Http::HeaderParser::get_quoted_string(std::string &out_str)
{
    push_save();
    if (!require('\"')) {
        load_save();
        return false;
    }
    std::stringstream ss;
    Char c;
    while (get_quoted_char(c) || get_quoted_pair(c)) {
        ss << c;
    }
    if (!require('\"')) {
        load_save();
        return false;
    }
    out_str = ss.str();
    pop_save();
    return true;
}

bool HeaderParser::get_parameter(std::string &out_key, std::string &out_value)
{
    push_save();
    std::string_view key_token, value_token;
    if (!get_token(key_token)) {
        load_save();
        return false;
    }
    if (!require('=')) {
        load_save();
        return false;
    }

    if (get_token(value_token)) {
        out_value = std::string(value_token);
    } else if (get_quoted_string(out_value)) {
    } else {
        load_save();
        return false;
    }
    out_key = Util::to_lower(std::string(key_token));
    pop_save();
    return true;
}

bool Http::HeaderParser::get_parameters(
    std::map<std::string, std::string> &parameters)
{
    push_save();
    std::string key, value;
    while (true) {
        push_save();
        get_whitespace();
        if (!require(';')) {
            load_save();
            break;
        }
        pop_save();
        get_whitespace();
        if (get_parameter(key, value)) {
            parameters.insert({key, value});
        }
    }
    pop_save();
    return true;
}
}  // namespace Web::Http