#include "web/http/http_message.h"
#include "web/http/http_parser.h"

#include <gtest/gtest.h>

using namespace Web::Http;

TEST(HttpParser, PlainGet)
{
    Request request;
    RequestParser request_parser("GET / HTTP/1.1\r\nHost: 127.0.0.1\r\n\r\n");
    ASSERT_EQ(request_parser.parse(request), Status::Ok);
    EXPECT_EQ(request.method, Method::Get);
    EXPECT_EQ(request.version, Version::Http_1_1);
    Host *const host = request.get_header<Host>();
    ASSERT_NE(host, nullptr);
    EXPECT_EQ(host->host, "127.0.0.1");
}

TEST(HttpParser, MethodNotAllowed)
{
    Request request;
    RequestParser request_parser(
        "PUT / HTTP/1.1\r\nHost: 127.0.0.1\r\n\r\n",
        bitmask_all<Version>,
        Method::Get);
    ASSERT_EQ(request_parser.parse(request), Status::MethodNotAllowed);
}

TEST(HttpParser, HttpVersionNotSupported)
{
    Request request;
    RequestParser request_parser(
        "PUT / HTTP/2.0\r\nHost: 127.0.0.1\r\n\r\n",
        Version::Http_1_0 | Version::Http_1_1);
    ASSERT_EQ(request_parser.parse(request), Status::HttpVersionNotSupported);
}

TEST(HttpParser, HostFieldNotFound)
{
    Request request;
    RequestParser request_parser("GET / HTTP/1.1\r\n\r\n");
    ASSERT_EQ(request_parser.parse(request), Status::BadRequest);
}