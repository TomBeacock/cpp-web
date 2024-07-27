#pragma once

#include "base.h"
#include "log.h"

#if defined(BUILD_DEBUG)
    #define INTERNAL_ASSERT_IMPL(check, msg, ...)                              \
        {                                                                      \
            if (!(check)) {                                                    \
                LOG_ERROR(msg, __VA_ARGS__);                                   \
                DEBUG_BREAK();                                                 \
            }                                                                  \
        }
    #define INTERNAL_ASSERT(check, ...)                                        \
        INTERNAL_ASSERT_IMPL(check, "Assertion failed")
    #define INTERNAL_ASSERT_MSG(check, ...)                                    \
        INTERNAL_ASSERT_IMPL(check, __VA_ARGS__)

    #define INTERNAL_ASSERT_GET_NAME(...)                                      \
        EXPAND_MACRO(INTERNAL_ASSERT##__VA_OPT__(_MSG))

    #define ASSERT(check, ...)                                                 \
        EXPAND_MACRO(INTERNAL_ASSERT_GET_NAME(__VA_ARGS__))                    \
        (check, __VA_ARGS__)
#else
    #define ASSERT(...)
#endif