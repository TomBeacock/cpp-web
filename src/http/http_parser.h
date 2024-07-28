#pragma once

#include "http_message.h"
#include "types.h"

#include <span>

namespace Web::Http {
class Parser {
  public:
    Status parse(Message &out_message);

  protected:
    Parser(
        const std::span<Byte> &data,
        Version version_mask = bitmask_all<Version>);

    inline bool is_valid() const;
    inline Char get_current() const;

    bool required_char(Char c);
    bool required_space();
    bool required_string(std::string_view str);

    bool optional_whitespace();

    bool get_digit(Nat8 &out_digit);
    bool get_token_char(Char &out_char);
    bool get_token(std::string_view &out_token);

    bool get_version(Version &out_version);

    virtual Status get_start_line(Message &out_message) = 0;

    bool get_visible_char(Char &out_char);
    bool get_obs_char(Char &out_char);
    bool get_field_char(Char &out_char);
    bool get_field_value(std::string_view &out_value);
    bool get_field_line(
        std::string_view &out_name,
        std::string_view &out_value);

  protected:
    std::span<Byte> data;
    size_t i;
    Version version_mask;
};

class RequestParser : public Parser {
  public:
    RequestParser(
        const std::span<Byte> &data,
        Version version_mask = bitmask_all<Version>,
        Method method_mask = bitmask_all<Method>);

    virtual Status get_start_line(Message &out_message) override;

  private:
    bool get_method(Method &out_method);
    bool get_target(std::string &out_target);
    bool get_request_line(
        Method &out_method,
        std::string &out_target,
        Version &out_version);

    bool valid_method(Method method) const;
    bool valid_version(Version version) const;

  private:
    Method method_mask;
};

inline bool Web::Http::Parser::is_valid() const
{
    return this->i < data.size();
}

inline Char Parser::get_current() const
{
    return this->data[this->i];
}
}  // namespace Web::Http