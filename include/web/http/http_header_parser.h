#pragma once

#include "http_header.h"
#include "web/http/http_parser.h"
#include "web/media/media_type.h"

#include <map>
#include <string>

namespace Web::Http {
class HeaderParser : public Parser {
  public:
    HeaderParser(std::string_view data);

    template <typename T>
    bool parse(T &out_header);

    template <>
    bool parse<AcceptHeader>(AcceptHeader &out_accept);
    template <>
    bool parse<ContentLengthHeader>(ContentLengthHeader &out_content_length);
    template <>
    bool parse<ContentTypeHeader>(ContentTypeHeader &out_content_type);

  protected:
    bool get_q_value(Nat16 &out_value);
    bool get_weight(Nat16 &out_weight);
    bool get_media_type(Media::Type &out_type);
    bool get_quoted_char(Char &out_char);
    bool get_quoted_pair(Char &out_char);
    bool get_quoted_string(std::string &out_str);
    bool get_parameter(std::string &out_key, std::string &out_value);
    bool get_parameters(std::map<std::string, std::string> &out_parameters);
};

template <typename T>
bool HeaderParser::parse(T &out_header)
{
    return false;
}
}  // namespace Web::Http