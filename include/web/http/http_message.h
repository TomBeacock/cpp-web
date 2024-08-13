#pragma once

#include "http_header_parser.h"
#include "http_types.h"
#include "web/enum_bitmask.h"
#include "web/uri/uri.h"

#include <types/types.h>

#include <map>
#include <memory>
#include <optional>
#include <string>
#include <vector>

namespace Web::Http {
struct Message {
    std::map<Header::Type, std::unique_ptr<Header>> headers;
    std::vector<Byte> body;
    Version version = Version::Http_1_1;

    template <typename T>
    T *const get_header() const;
    template <typename T>
    T &get_or_create_header();

  protected:
    Message() = default;
    Message(Version version);
};

struct Request : public Message {
    Uri::Uri target;
    Method method = Method::Get;

    Request() = default;
    Request(Method method, Uri::Uri target, Version version);
};

struct Response : public Message {
    Status status = Status::Ok;

    Response() = default;
    Response(Version version, Status status);

    std::vector<Byte> to_bytes() const;
};

template <typename T>
inline T *const Message::get_header() const
{
    static_assert(std::derived_from<T, Header>);
    if (auto it = this->headers.find(T::header_type);
        it != this->headers.end()) {
        if (T *const header = dynamic_cast<T *const>(it->second.get());
            header != nullptr) {
            return header;
        }
    }
    return nullptr;
}

template <typename T>
inline T &Message::get_or_create_header()
{
    static_assert(std::derived_from<T, Header>);
    if (auto it = this->headers.find(T::header_type);
        it != this->headers.end()) {
        return dynamic_cast<T &>(*it->second);
    }
    auto it =
        this->headers.emplace(T::header_type, std::make_unique<T>()).first;
    return dynamic_cast<T &>(*it->second);
}
}  // namespace Web::Http