#pragma once

#include <format>
#include <iostream>
#include <string>

#if defined(LOGGING_ENABLED)
    #define INTERNAL_LOG_IMPL(type, color, msg, ...)                           \
        std::cout << std::format(                                              \
                         "\x1B[38;5;247m{} ({}): \x1B[" #color "m" #type ": ", \
                         __FILE__ + SOURCE_PATH_LENGTH,                        \
                         __LINE__)                                             \
                  << std::format(msg __VA_OPT__(, ) __VA_ARGS__) << "\x1B[0m"  \
                  << std::endl

    #define LOG_INFO(msg, ...) INTERNAL_LOG_IMPL(Info, 37, msg, __VA_ARGS__)
    #define LOG_WARN(msg, ...) INTERNAL_LOG_IMPL(Warn, 33, msg, __VA_ARGS__)
    #define LOG_ERROR(msg, ...) INTERNAL_LOG_IMPL(Error, 31, msg, __VA_ARGS__)
#else
    #define LOG_INFO(...)
    #define LOG_WARN(...)
    #define LOG_ERROR(...)
#endif