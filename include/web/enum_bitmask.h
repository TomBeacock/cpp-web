#pragma once

#include <limits>
#include <utility>

template <typename T>
    requires(
        std::is_enum_v<T> and requires(T e) { enable_bitmask_operators(e); })
constexpr auto operator|(const T lhs, const T rhs)
{
    return static_cast<T>(std::to_underlying(lhs) | std::to_underlying(rhs));
}

template <typename T>
    requires(
        std::is_enum_v<T> and requires(T e) { enable_bitmask_operators(e); })
constexpr auto operator&(const T lhs, const T rhs)
{
    return static_cast<T>(std::to_underlying(lhs) & std::to_underlying(rhs));
}

template <typename T>
constexpr auto is_flag_set(T value, T flag)
{
    return (value & flag) == flag;
}

template <typename T>
    requires(std::is_enum_v<T> and
             requires(T e) { enable_bitmask_operators(e); })
constexpr auto bitmask_all =
    static_cast<T>(std::numeric_limits<std::underlying_type_t<T>>::max());