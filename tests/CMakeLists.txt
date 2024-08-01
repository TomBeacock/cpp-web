cmake_minimum_required(VERSION 3.14)

include(FetchContent)

FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest.git
	GIT_TAG e39786088138f2749d64e9e90e0f9902daa77c40
)

if(WIN32)
	set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
endif()
FetchContent_MakeAvailable(googletest)

add_executable(tests
	"test_uri_parser.cpp"
	"test_http_parser.cpp"
)
target_link_libraries(tests PRIVATE http-server GTest::gtest_main)
set_target_properties(tests PROPERTIES CXX_STANDARD 23 CXX_STANDARD_REQUIRED ON)

include(GoogleTest)
gtest_discover_tests(tests)