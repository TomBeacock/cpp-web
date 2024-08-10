#pragma once

#include "http_header_parser.h"
#include "http_types.h"
#include "web/enum_bitmask.h"
#include "web/uri/uri.h"

#include <types/types.h>

#include <map>
#include <optional>
#include <string>
#include <vector>

namespace Web::Http {
struct Message {
    std::map<std::string, std::string, std::less<>> headers;
    std::vector<Byte> body;
    Version version = Version::Http_1_1;

  protected:
    Message() = default;
    Message(Version version);
};

struct Request : public Message {
    Uri::Uri target;
    Method method = Method::Get;

    Request() = default;
    Request(Method method, Uri::Uri target, Version version);

    template <typename T>
    std::optional<T> get_header() const;
};

struct Response : public Message {
    Status status = Status::Ok;

    Response() = default;
    Response(Version version, Status status);

    std::vector<Byte> to_raw() const;
};

template <typename T>
inline std::optional<T> Request::get_header() const
{
    if (auto it = this->headers.find(T::label); it != this->headers.end()) {
        HeaderParser parser(it->second);
        T header{};
        if (parser.parse<T>(header)) {
            return header;
        }
    }
    return std::nullopt;
}
}  // namespace Web::Http