#include "web/http/http_header_parser.h"

#include <gtest/gtest.h>

using namespace Web::Http;

TEST(HttpHeaderParser, Accept)
{
    AcceptHeader header;
    HeaderParser parser("application/json, text/plain;q=0.8, text/*;q=0.02");
    EXPECT_TRUE(parser.parse_accept(header));
    EXPECT_EQ(header.types.size(), 3);
    EXPECT_EQ(header.types[0].weight, 1000);
    EXPECT_EQ(header.types[1].weight, 800);
    EXPECT_EQ(header.types[2].weight, 20);
}

TEST(HttpHeaderParser, ContentLength)
{
    ContentLengthHeader header;
    HeaderParser parser("1969");
    EXPECT_TRUE(parser.parse_content_length(header));
    EXPECT_EQ(header.length, 1969);
}

TEST(HttpHeaderParser, ContentType)
{
    ContentTypeHeader header;
    HeaderParser parser("application/json; charset=utf-8");
    EXPECT_TRUE(parser.parse_content_type(header));
    EXPECT_EQ(header.type, Web::Media::Type::Application_Json);
    EXPECT_EQ(header.charset, "utf-8");
}