#include "web/http/http_header_parser.h"

#include <gtest/gtest.h>

using namespace Web::Http;

TEST(HttpHeaderParser, Accept)
{
    HeaderParser parser("application/json, text/plain;q=0.8, text/*;q=0.02");
    std::unique_ptr<Header> header = parser.parse(Header::Type::Accept);
    ASSERT_TRUE(static_cast<Bool>(header));
    Accept &accept = dynamic_cast<Accept &>(*header);
    EXPECT_EQ(accept.types.size(), 3);
    EXPECT_EQ(accept.types[0].weight, 1000);
    EXPECT_EQ(accept.types[1].weight, 800);
    EXPECT_EQ(accept.types[2].weight, 20);
}

TEST(HttpHeaderParser, ContentLength)
{
    HeaderParser parser("1969");
    std::unique_ptr<Header> header = parser.parse(Header::Type::ContentLength);
    ASSERT_TRUE(static_cast<Bool>(header));
    ContentLength &content_length = dynamic_cast<ContentLength &>(*header);
    EXPECT_EQ(content_length.length, 1969);
}

TEST(HttpHeaderParser, ContentType)
{
    HeaderParser parser("application/json; charset=utf-8");
    std::unique_ptr<Header> header = parser.parse(Header::Type::ContentType);
    ASSERT_TRUE(static_cast<Bool>(header));
    ContentType &content_type = dynamic_cast<ContentType &>(*header);
    EXPECT_EQ(content_type.media_type, Web::Media::Type::Application_Json);
    EXPECT_EQ(content_type.charset, "utf-8");
}