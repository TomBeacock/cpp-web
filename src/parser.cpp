#include "parser.h"

namespace Web {
Parser::Parser(std::string_view data) : data(data), i(0) {}

bool Parser::required_char(Char c)
{
    if (!is_valid() || get_current() != c) {
        return false;
    }
    this->i++;
    return true;
}

bool Parser::required_space()
{
    return required_char(' ');
}

bool Parser::required_string(std::string_view str)
{
    for (char c : str) {
        if (!required_char(c)) {
            return false;
        }
    }
    return true;
}

bool Parser::optional_whitespace()
{
    while (is_valid() && (get_current() == ' ' || get_current() == '\t')) {
        this->i++;
    }
    return true;
}

bool Parser::get_digit(Nat8 &out_digit)
{
    if (!is_valid()) {
        return false;
    }
    const Char c = get_current();
    if (c < '0' || c > '9') {
        return false;
    }
    out_digit = c - '0';
    this->i++;
    return true;
}

bool Parser::get_hex_digit(Nat8 &out_digit)
{
    if (!is_valid()) {
        return false;
    }
    const Char c = get_current();
    if (c >= '0' && c <= '9') {
        out_digit = c - '0';
    } else if (c >= 'a' && c <= 'f') {
        out_digit = c - 'a' + 10;
    } else if (c >= 'A' && c <= 'F') {
        out_digit = c - 'A' + 10;
    } else {
        return false;
    }
    this->i++;
    return true;
}
}  // namespace Web