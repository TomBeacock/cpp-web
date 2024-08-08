#include "web/http/http_header_parser.h"

#include "util/util_string.h"

#include <sstream>

namespace Web::Http {
Http::HeaderParser::HeaderParser(std::string_view data) : Parser(data) {}

bool Http::HeaderParser::parse_accept(AcceptHeader &out_accept)
{
    push_save();
    Media::Type media_type;
    Float quality;
    while (true) {
        get_whitespace();
        if (!get_media_type(media_type)) {
            load_save();
            return false;
        }
        get_whitespace();
        quality = 0.0f;
        if (require(';')) {
            get_whitespace();
            if (!require('q')) {
                load_save();
                return false;
            }
            get_whitespace();
            if (!require('=')) {
                load_save();
                return false;
            }
            get_whitespace();
            if (!get_float(quality)) {
                load_save();
                return false;
            }
            get_whitespace();
        }
        out_accept.types.push_back({media_type, quality});
        if (!require(',')) {
            break;
        }
    }
    pop_save();
    return true;
}

bool Http::HeaderParser::parse_content_length(
    ContentLengthHeader &out_content_length)
{
    return get_nat(out_content_length.length);
}

bool Http::HeaderParser::parse_content_type(ContentTypeHeader &out_content_type)
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

bool Http::HeaderParser::get_media_type(Media::Type &out_type)
{
    push_save();
    if (!get_token(out_type.type)) {
        load_save();
        return false;
    }
    if (!require('/')) {
        load_save();
        return false;
    }
    if (!get_token(out_type.subtype)) {
        load_save();
        return false;
    }
    Util::make_lower(out_type.type);
    Util::make_lower(out_type.subtype);
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
    if (!get_token(out_key)) {
        load_save();
        return false;
    }
    if (!require('=')) {
        load_save();
        return false;
    }
    if (!(get_token(out_value) || get_quoted_string(out_value))) {
        load_save();
        return false;
    }
    Util::make_lower(out_key);
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