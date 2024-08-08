#include "web/http/http_header_parser.h"

namespace Web::Http {
Http::HeaderParser::HeaderParser(std::string_view data) : Parsing::Parser(data)
{}

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
        out_accept.push_back({media_type, quality});
        if (!require(',')) {
            break;
        }
    }
    pop_save();
    return true;
}

bool Http::HeaderParser::get_media_type(Media::Type &out_type)
{
    push_save();
    if (is_eof() ||
        !(in_bounds('0', '9') || in_bounds('a', 'z') || in_bounds('A', 'Z'))) {
        pop_save();
        return false;
    }
    move_next();
    while (!is_eof() &&
           (is_equal('!') || in_bounds('#', '$') || is_equal('&') ||
            is_equal('+') || in_bounds('-', '.') || in_bounds('0', '9') ||
            in_bounds('A', 'Z') || in_bounds('^', '_') ||
            in_bounds('a', 'z'))) {
        move_next();
    }
    out_type.type = std::string(get_save_string());

    if (!require('/')) {
        load_save();
        return false;
    }

    if (is_eof() ||
        !(in_bounds('0', '9') || in_bounds('a', 'z') || in_bounds('A', 'Z'))) {
        load_save();
        return false;
    }
    push_save();
    move_next();
    while (!is_eof() &&
           (is_equal('!') || in_bounds('#', '$') || is_equal('&') ||
            is_equal('+') || in_bounds('-', '.') || in_bounds('0', '9') ||
            in_bounds('A', 'Z') || in_bounds('^', '_') ||
            in_bounds('a', 'z'))) {
        move_next();
    }
    out_type.subtype = std::string(get_save_string());
    pop_save();
    return false;
}
}  // namespace Web::Http