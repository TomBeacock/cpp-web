cmake_minimum_required(VERSION 3.14)

project(cpp-web)

if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
	option(WEB_BUILD_TESTS "Build test suite" ON)

	if(WEB_BUILD_TESTS)
		add_subdirectory(tests)
	endif()
endif()

add_library(cpp-web STATIC
	"include/web/base.h"
	"include/web/types.h"
	"include/web/log.h"
	"include/web/assert.h"
	"include/web/enum_bitmask.h"
	
	"include/web/parser.h" "src/parser.cpp"

	"include/web/tcp/tcp_server.h"

	"include/web/uri/uri.h"	"include/web/uri/uri_parser.h" "src/uri/uri_parser.cpp"	"include/web/http/http_server.h" "src/http/http_server.cpp"
	"include/web/http/http_message.h" "src/http/http_message.cpp"	"include/web/http/http_parser.h" "src/http/http_parser.cpp")

set_target_properties(cpp-web PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON)
target_include_directories(cpp-web
	PUBLIC
		"${PROJECT_SOURCE_DIR}/include"
	PRIVATE
		"${PROJECT_SOURCE_DIR}/src"
)

string(LENGTH "${PROJECT_SOURCE_DIR}/" source_path_length)
target_compile_definitions(cpp-web PUBLIC SOURCE_PATH_LENGTH=${source_path_length})

# Build type
if(CMAKE_BUILD_TYPE)
	string(TOLOWER ${CMAKE_BUILD_TYPE} build_type)
endif()

if(build_type STREQUAL "debug")
	target_compile_definitions(cpp-web PUBLIC BUILD_DEBUG PUBLIC LOGGING_ENABLED)
elseif(build_type STREQUAL "relwithdebinfo")
	target_compile_definitions(cpp-web PUBLIC BUILD_RELEASE_WITH_INFO PUBLIC LOGGING_ENABLED)
elseif(build_type STREQUAL "release")
	target_compile_definitions(cpp-web PUBLIC BUILD_RELEASE)
endif()

# Platform
if(UNIX)
	target_compile_definitions(cpp-web PUBLIC PLATFORM_UNIX)
	target_sources(cpp-web
		PUBLIC
			"include/web/tcp/unix/tcp_server_unix.h"
		PRIVATE
			"src/tcp/unix/tcp_server_unix.cpp"
	)
endif()

if(WIN32)
	target_compile_definitions(cpp-web PUBLIC PLATFORM_WIN)
	target_link_libraries(cpp-web PUBLIC wsock32 PUBLIC ws2_32)
	target_sources(cpp-web
		PUBLIC
			"include/web/tcp/win/tcp_server_win.h"
		PRIVATE
			"src/tcp/win/tcp_server_win.cpp" 
	)
endif()

# Compiler
if(MSVC)
	target_compile_options(cpp-web PUBLIC /Zc:preprocessor)
endif()