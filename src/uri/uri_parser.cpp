#include "web/uri/uri_parser.h"

#include <format>
#include <sstream>

namespace Web::Uri {
Parser::Parser(std::string_view data) : Parsing::Parser(data) {}
bool Parser::parse(Uri &out_uri)
{
    std::string path;
    if (is_eof() || !get_path_absolute(path)) {
        return false;
    }
    if (is_eof()) {
        out_uri.uri = path;
        out_uri.path = {out_uri.uri.begin(), out_uri.uri.begin() + path.size()};
        return true;
    }

    std::string_view query;
    if (!get_query(query)) {
        return false;
    }
    if (is_eof()) {
        out_uri.uri = out_uri.uri = std::format("{}?{}", path, query);
        out_uri.path = {out_uri.uri.begin(), out_uri.uri.begin() + path.size()};
        out_uri.query = {
            out_uri.uri.begin() + path.size() + 1,
            out_uri.uri.begin() + path.size() + query.size() + 1,
        };
        return true;
    }

    std::string_view fragment;
    if (!get_fragment(fragment)) {
        return false;
    }
    if (is_eof()) {
        out_uri.uri = std::format("{}?{}#{}", path, query, fragment);
        out_uri.path = {out_uri.uri.begin(), out_uri.uri.begin() + path.size()};
        out_uri.query = {
            out_uri.uri.begin() + path.size() + 1,
            out_uri.uri.begin() + path.size() + query.size() + 1,
        };
        out_uri.fragment = {
            out_uri.uri.begin() + path.size() + query.size() + 2,
            out_uri.uri.end(),
        };
        return true;
    }
    return false;
}  // namespace Web::Uri

bool Parser::get_percent_char(Char &out_char)
{
    if (is_eof()) {
        return false;
    }
    Nat8 high, low;
    push_save();
    if (!(require('%') && get_hex_digit(high) && get_hex_digit(low))) {
        load_save();
        return false;
    }
    out_char = (high << 4) + low;
    return true;
}

bool Parser::get_path_char(Char &out_char)
{
    if (is_eof()) {
        return false;
    }
    // Single allowed char
    if (is_equal('!') || is_equal('$') || in_bounds('&', '.') ||
        in_bounds('0', ';') || is_equal('=') || in_bounds('@', 'Z') ||
        is_equal('_') || in_bounds('a', 'z') || is_equal('~')) {
        out_char = get_current();
        move_next();
        return true;
    }
    // Percent-encoded char
    if (get_percent_char(out_char)) {
        return true;
    }
    return false;
}

bool Parser::get_segment(std::string &out_segment, bool non_zero)
{
    push_save();
    std::stringstream segment;
    Char c;
    while (get_path_char(c)) {
        segment << c;
    }
    if (non_zero && get_save_length() == 0) {
        pop_save();
        return false;
    }
    out_segment = std::move(segment).str();
    pop_save();
    return true;
}

bool Parser::get_path_absolute(std::string &out_path)
{
    if (is_eof() || !require('/')) {
        return false;
    }
    std::stringstream path;
    path << '/';
    std::string segment;
    if (!get_segment(segment, true)) {
        out_path = std::move(path).str();
        return true;
    }
    path << segment;
    while (require('/') && get_segment(segment)) {
        path << '/' << segment;
    }
    out_path = std::move(path).str();
    return true;
}

bool Parser::get_query(std::string_view &out_query)
{
    if (is_eof() || !require('?')) {
        return false;
    }
    push_save();
    Char c;
    while (get_path_char(c) || require('/') || require('?')) {
    }
    out_query = get_save_string();
    pop_save();
    return true;
}

bool Parser::get_fragment(std::string_view &out_fragment)
{
    if (is_eof() || !require('#')) {
        return false;
    }
    push_save();
    Char c;
    while (get_path_char(c) || require('/') || require('?')) {
    }
    out_fragment = get_save_string();
    pop_save();
    return true;
}
}  // namespace Web::Uri