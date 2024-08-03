#pragma once

#include "web/http/http_message.h"
#include "web/parser.h"
#include "web/types.h"

#include <string>

namespace Web::Http {
class Parser : public Web::Parser {
  protected:
    Parser(
        const std::string_view &data,
        Version version_mask = bitmask_all<Version>);

    bool get_token_char(Char &out_char);
    bool get_token(std::string_view &out_token);

    bool get_version(Version &out_version);

    bool get_visible_char(Char &out_char);
    bool get_obs_char(Char &out_char);
    bool get_field_char(Char &out_char);
    bool get_field_value(std::string_view &out_value);
    bool get_field_line(
        std::string_view &out_name,
        std::string_view &out_value);

  protected:
    Version version_mask;
};

class RequestParser : public Parser {
  public:
    RequestParser(
        const std::string_view &data,
        Version version_mask = bitmask_all<Version>,
        Method method_mask = bitmask_all<Method>);

    Status parse(Request &out_request);

  private:
    bool get_method(Method &out_method);
    bool get_target(Uri::Uri &out_target);
    bool get_request_line(
        Method &out_method,
        Uri::Uri &out_target,
        Version &out_version);

    bool valid_method(Method method) const;
    bool valid_version(Version version) const;

  private:
    Method method_mask;
};
}  // namespace Web::Http