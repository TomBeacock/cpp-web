#pragma once

#include "web/media/media_type.h"

#include <types/types.h>

#include <string>
#include <vector>

namespace Web::Http {
struct AcceptHeader {
    static constexpr auto label = "accept";
    struct Type {
        Media::Type type;
        Nat16 weight;
    };
    std::vector<Type> types;
};

struct ContentLengthHeader {
    static constexpr auto label = "content-length";
    Nat length;
};

struct ContentTypeHeader {
    static constexpr auto label = "content-type";
    Media::Type type;
    std::string charset;
    std::string boundary;
};
}  // namespace Web::Http