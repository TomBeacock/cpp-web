#pragma once

#include <string>
#include <unordered_map>
#include <vector>

namespace Web::Uri {
struct Uri {
    std::vector<std::string> segments;
    std::string query;
    std::string fragment;
};
}  // namespace Web::Uri