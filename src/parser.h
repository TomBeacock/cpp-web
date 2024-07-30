#pragma once

#include "types.h"

#include <string>

namespace Web {
class Parser {
  protected:
    Parser(std::string_view data);

    inline bool is_valid() const;
    inline Char get_current() const;

    bool required_char(Char c);
    bool required_space();
    bool required_string(std::string_view str);

    bool optional_whitespace();

    bool get_digit(Nat8 &out_digit);
    bool get_hex_digit(Nat8 &out_digit);

  protected:
    std::string_view data;
    size_t i;
};

inline bool Parser::is_valid() const
{
    return this->i < data.size();
}

inline Char Parser::get_current() const
{
    return this->data[this->i];
}
}  // namespace Web
