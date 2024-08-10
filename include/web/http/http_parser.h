#pragma once

#include "http_types.h"
#include "web/enum_bitmask.h"
#include "web/uri/uri.h"

#include <parser/parser.h>

#include <string>

namespace Web::Http {
struct Request;
struct Response;
}  // namespace Web::Http

namespace Web::Http {
class Parser : public Parsing::Parser {
  protected:
    Parser(const std::string_view data);

    bool get_token_char(Char &out_char);
    bool get_token(std::string_view &out_token);
    bool get_obs_char(Char &out_char);
    bool get_visible_char(Char &out_char);
};

class MessageParser : public Parser {
  protected:
    MessageParser(
        std::string_view data,
        Version version_mask = bitmask_all<Version>);

    bool get_version(Version &out_version);

    bool get_field_char(Char &out_char);
    bool get_field_value(std::string_view &out_value);
    bool get_field_line(
        std::string_view &out_name,
        std::string_view &out_value);

    bool valid_version(Version version) const;

  protected:
    Version version_mask;
};

class RequestParser : public MessageParser {
  public:
    RequestParser(
        std::string_view data,
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

  private:
    Method method_mask;
};
}  // namespace Web::Http