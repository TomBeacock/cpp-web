#pragma once

#include "web/media/media_type.h"

#include <types/types.h>

#include <string>
#include <vector>

namespace Web::Http {
struct AcceptHeader {
    struct Type {
        Media::Type type;
        Nat16 weight;
    };
    std::vector<Type> types;
};

struct ContentLengthHeader {
    Nat length;
};

struct ContentTypeHeader {
    Media::Type type;
    std::string charset;
    std::string boundary;
};
}  // namespace Web::Http