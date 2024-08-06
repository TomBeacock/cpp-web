#include "web/uri/uri_parser.h"

namespace Web::Uri {
Parser::Parser(std::string_view data) : Parsing::Parser(data) {}
bool Parser::parse(Uri &out_uri)
{
    out_uri.segments.clear();
    if (is_eof() || !get_path_absolute(out_uri.segments)) {
        return false;
    }
    std::string_view str_view;
    if (get_query(str_view)) {
        out_uri.query = std::string(str_view);
    }
    if (get_fragment(str_view)) {
        out_uri.fragment = std::string(str_view);
    }
    return true;
}

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

bool Parser::get_segment(std::string_view &out_segment, bool non_zero)
{
    push_save();
    Char c;
    while (get_path_char(c)) {
    }
    if (non_zero && get_save_length() == 0) {
        return false;
    }
    out_segment = get_save_string();
    pop_save();
    return true;
}

bool Parser::get_path_absolute(std::vector<std::string> &out_segments)
{
    if (is_eof() || !require('/')) {
        return false;
    }
    std::string_view segment;
    if (!get_segment(segment, true)) {
        out_segments.push_back("");
        return true;
    }
    out_segments.push_back(std::string(segment));
    while (require('/') && get_segment(segment)) {
        out_segments.push_back(std::string(segment));
    }
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