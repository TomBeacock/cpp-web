#include "util_string.h"

#include <algorithm>

namespace Util {
std::string to_lower(const std::string &str)
{
    std::string out(str.size(), 0);
    std::transform(str.begin(), str.end(), str.begin(), [](char c) -> char {
        return std::tolower(c);
    });
}

void make_lower(std::string &str)
{
    std::transform(str.begin(), str.end(), str.begin(), [](char c) -> char {
        return std::tolower(c);
    });
}
}  // namespace Util