cmake_minimum_required(VERSION 3.14)

project(simple-server)

add_executable(simple-server
	"main.cpp"
 "server.cpp" "server.h")

target_link_libraries(simple-server PRIVATE cpp-web)

set_target_properties(simple-server PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON)