#pragma once

#if defined(PLATFORM_UNIX)
    #include "unix/tcp_server_unix.h"
#elif defined(PLATFORM_WIN)
    #include "win/tcp_server_win.h"
#else
    #error Invalid plaform
#endif

namespace Web::Tcp {
#if defined(PLATFORM_UNIX)
using Server = Unix::Server;
#elif defined(PLATFORM_WIN)
using Server = Win::Server;
#else
    #error Invalid plaform
#endif
}  // namespace Web::Tcp