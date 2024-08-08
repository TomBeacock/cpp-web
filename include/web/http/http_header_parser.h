#pragma once

#include "web/media/media_type.h"

#include <parser/parser.h>

#include <string>
#include <vector>

namespace Web::Http {
using AcceptHeader = std::vector<std::pair<Media::Type, Float>>;

class HeaderParser : public Parsing::Parser {
  public:
    HeaderParser(std::string_view data);

    bool parse_accept(AcceptHeader &out_accept);

  protected:
    bool get_media_type(Media::Type &out_type);
};
}  // namespace Web::Http