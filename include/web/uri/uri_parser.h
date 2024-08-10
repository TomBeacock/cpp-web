#pragma once

#include "web/uri/uri.h"

#include <parser/parser.h>
#include <types/types.h>

#include <string>

namespace Web::Uri {
class Parser : public Parsing::Parser {
  public:
    Parser(std::string_view data);

    bool parse(Uri &out_uri);

  private:
    bool get_percent_char(Char &out_char);
    bool get_path_char(Char &out_char);
    bool get_segment(std::string &out_segment, bool non_zero = false);
    bool get_path_absolute(std::string &out_path);
    bool get_query(std::string_view &out_query);
    bool get_fragment(std::string_view &out_fragment);
};
}  // namespace Web::Uri