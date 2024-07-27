#pragma once

#if defined(BUILD_DEBUG)
    #if defined(PLATFORM_WIN)
        #define DEBUG_BREAK() __debugbreak()
    #elif defined(PLATFORM_UNIX)
        #include <signal.h>
        #define DEBUG_BREAK() raise(SIGTRAP)
    #else
        #error "Platform does not support debug break"
    #endif
#else
    #define DEBUG_BREAK()
#endif

#define EXPAND_MACRO(x) x