#include "web/http/http_message.h"
#include "web/http/http_parser.h"

#include <gtest/gtest.h>

using namespace Web;
using namespace Web::Http;

TEST(HttpRequest, ExtractHeaders)
{
    Request request;
    RequestParser request_parser(
        "GET / HTTP/1.1\r\nHost: 127.0.0.1\r\nAccept: application/json, "
        "text/plain\r\n\r\n");
    ASSERT_EQ(request_parser.parse(request), Status::Ok);
    auto accept_header = request.get_header<Accept>();
    ASSERT_NE(accept_header, nullptr);
    EXPECT_EQ(accept_header->types.size(), 2);
    EXPECT_EQ(
        accept_header->types[0].media_type, Media::Type::Application_Json);
    EXPECT_EQ(accept_header->types[1].media_type, Media::Type::Text_Plain);
}
