#pragma once

#include <string>
#include <unordered_map>
#include <vector>

namespace Web::Uri {
class Uri {
    friend class Parser;

  public:
    inline operator const std::string &() const;

    inline const std::string_view &get_path() const;
    inline const std::string_view &get_query() const;
    inline const std::string_view &get_fragment() const;

  private:
    std::string uri;
    std::string_view path;
    std::string_view query;
    std::string_view fragment;
};

inline Uri::operator const std::string &() const
{
    return this->uri;
}

inline const std::string_view &Uri::get_path() const
{
    return this->path;
}

inline const std::string_view &Uri::get_query() const
{
    return this->query;
}

inline const std::string_view &Uri::get_fragment() const
{
    return this->fragment;
}
}  // namespace Web::Uri