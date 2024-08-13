#pragma once

#include "http_header.h"
#include "web/http/http_parser.h"
#include "web/media/media_type.h"

#include <map>
#include <memory>
#include <string>

namespace Web::Http {
class HeaderParser : public Parser {
  public:
    HeaderParser(std::string_view data);

    std::unique_ptr<Header> parse(Header::Type type);

  protected:
    bool get_q_value(Nat16 &out_value);
    bool get_weight(Nat16 &out_weight);
    bool get_media_type(Media::Type &out_type);
    bool get_quoted_char(Char &out_char);
    bool get_quoted_pair(Char &out_char);
    bool get_quoted_string(std::string &out_str);
    bool get_parameter(std::string &out_key, std::string &out_value);
    bool get_parameters(std::map<std::string, std::string> &out_parameters);

    template <typename T>
    bool get_header(T &out_header);

    template <>
    bool get_header<Accept>(Accept &out_accept);
    template <>
    bool get_header<ContentLength>(ContentLength &out_content_length);
    template <>
    bool get_header<ContentType>(ContentType &out_content_type);
    template <>
    bool get_header<Host>(Host &out_host);

  private:
    template <typename T>
    std::unique_ptr<T> parse_header();
};

template <typename T>
inline bool HeaderParser::get_header(T &out_header)
{
    static_assert(std::derived_from<T, Header>);
    return false;
}

template <typename T>
inline std::unique_ptr<T> HeaderParser::parse_header()
{
    static_assert(std::derived_from<T, Header>);
    std::unique_ptr<T> header = std::make_unique<T>();
    if (get_header<T>(*header)) {
        return header;
    }
    return nullptr;
}
}  // namespace Web::Http