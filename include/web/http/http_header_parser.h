#pragma once

#include "http_header.h"
#include "web/http/http_parser.h"
#include "web/media/media_type.h"

#include <string>

namespace Web::Http {
class HeaderParser : public Parser {
  public:
    HeaderParser(std::string_view data);

    bool parse_accept(AcceptHeader &out_accept);
    bool parse_content_length(ContentLengthHeader &out_content_length);
    bool parse_content_type(ContentTypeHeader &out_content_type);

  protected:
    bool get_q_value(Float &out_value);
    bool get_weight(Float &out_weight);
    bool get_media_type(Media::Type &out_type);
    bool get_quoted_char(Char &out_char);
    bool get_quoted_pair(Char &out_char);
    bool get_quoted_string(std::string &out_str);
    bool get_parameter(std::string &out_key, std::string &out_value);
    bool get_parameters(std::map<std::string, std::string> &out_parameters);
};
}  // namespace Web::Http