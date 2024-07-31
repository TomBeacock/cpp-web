cmake_minimum_required(VERSION 3.14)

project(web-server)

option(BUILD_TESTS "Build test suite" ON)

if(BUILD_TESTS)
	message(STATUS "Buliding tests...")
	add_subdirectory(tests)
	message(STATUS "Building tests done")
endif()

add_executable(web-server
	"src/base.h"
	"src/types.h"
	"src/log.h"
	"src/assert.h"
	"src/enum_bitmask.h"
	
	"src/main.cpp"
	"src/parser.h" "src/parser.cpp"

	"src/tcp/tcp_server.h"

	"src/uri/uri.h"	"src/uri/uri_parser.h" "src/uri/uri_parser.cpp"	"src/http/http_server.h" "src/http/http_server.cpp"
	"src/http/http_message.h" "src/http/http_message.cpp"	"src/http/http_parser.h" "src/http/http_parser.cpp")

set_target_properties(web-server PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON)
target_include_directories(web-server PRIVATE "${PROJECT_SOURCE_DIR}/src")

string(LENGTH "${PROJECT_SOURCE_DIR}/" source_path_length)
target_compile_definitions(web-server PUBLIC SOURCE_PATH_LENGTH=${source_path_length})

# Build type
if(CMAKE_BUILD_TYPE)
	string(TOLOWER ${CMAKE_BUILD_TYPE} build_type)
endif()

if(build_type STREQUAL "debug")
	target_compile_definitions(web-server PUBLIC BUILD_DEBUG PUBLIC LOGGING_ENABLED)
elseif(build_type STREQUAL "relwithdebinfo")
	target_compile_definitions(web-server PUBLIC BUILD_RELEASE_WITH_INFO PUBLIC LOGGING_ENABLED)
elseif(build_type STREQUAL "release")
	target_compile_definitions(web-server PUBLIC BUILD_RELEASE)
endif()

# Platform
if(UNIX)
	target_compile_definitions(web-server PRIVATE PLATFORM_UNIX)
	target_sources(web-server PRIVATE
		"src/tcp/unix/tcp_server_unix.h" "src/tcp/unix/tcp_server_unix.cpp"
	)
endif()

if(WIN32)
	target_compile_definitions(web-server PRIVATE PLATFORM_WIN)
	target_link_libraries(web-server wsock32 ws2_32)
	target_sources(web-server PRIVATE
		"src/tcp/win/tcp_server_win.h" "src/tcp/win/tcp_server_win.cpp" 
	)
endif()

# Compiler
if(MSVC)
	target_compile_options(web-server PUBLIC /Zc:preprocessor)
endif()