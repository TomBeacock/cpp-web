#include "web/uri/uri_parser.h"

namespace Web::Uri {
Parser::Parser(std::string_view data) : Web::Parser(data) {}
bool Parser::parse(Uri &out_uri)
{
    out_uri.segments.clear();
    if (!is_valid() || !get_path_absolute(out_uri.segments)) {
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
    if (!is_valid()) {
        return false;
    }
    size_t j = this->i;
    Nat8 high, low;
    if (!(required_char('%') && get_hex_digit(high) && get_hex_digit(low))) {
        this->i = j;
        return false;
    }
    out_char = (high << 4) + low;
    return true;
}

bool Parser::get_path_char(Char &out_char)
{
    if (!is_valid()) {
        return false;
    }
    const Char c = get_current();
    if (!(c == '!' || c == '$' || (c >= '&' && c <= '.') ||
          (c >= '0' && c <= ';') || c == '=' || (c >= '@' && c <= 'Z') ||
          c == '_' || (c >= 'a' && c <= 'z') || c == '~')) {
        return false;
    }
    out_char = c;
    this->i++;
    return true;
}

bool Parser::get_segment(std::string_view &out_segment, bool non_zero)
{
    size_t j = this->i;
    Char c;
    while (get_path_char(c)) {
    }
    if (non_zero && this->i == j) {
        return false;
    }
    out_segment = std::string_view(&this->data[j], this->i - j);
    return true;
}

bool Parser::get_path_absolute(std::vector<std::string> &out_segments)
{
    if (!is_valid() || !required_char('/')) {
        return false;
    }
    std::string_view segment;
    if (!get_segment(segment, true)) {
        out_segments.push_back("");
        return true;
    }
    out_segments.push_back(std::string(segment));
    while (required_char('/') && get_segment(segment)) {
        out_segments.push_back(std::string(segment));
    }
    return true;
}

bool Parser::get_query(std::string_view &out_query)
{
    if (!is_valid() || !required_char('?')) {
        return false;
    }
    size_t j = this->i;
    Char c;
    while (get_path_char(c) || required_char('/') || required_char('?')) {
    }
    out_query = std::string_view(&this->data[j], this->i - j);
    return true;
}

bool Parser::get_fragment(std::string_view &out_fragment)
{
    if (!is_valid() || !required_char('#')) {
        return false;
    }
    size_t j = this->i;
    Char c;
    while (get_path_char(c) || required_char('/') || required_char('?')) {
    }
    out_fragment = std::string_view(&this->data[j], this->i - j);
    return true;
}
}  // namespace Web::Uri