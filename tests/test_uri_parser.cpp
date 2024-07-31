#include "uri/uri_parser.h"

#include <gtest/gtest.h>

using namespace Web::Uri;

TEST(UriParser, PathAbsolute)
{
    Uri uri;
    Parser uri_parser("/test/document");
    EXPECT_TRUE(uri_parser.parse(uri));
    EXPECT_EQ(uri.segments.size(), 2);
    EXPECT_EQ(uri.segments[0], "test");
    EXPECT_EQ(uri.segments[1], "document");
    EXPECT_EQ(uri.query, "");
    EXPECT_EQ(uri.fragment, "");
}

TEST(UriParser, PathAbsoluteWithQuery)
{
    Uri uri;
    Parser uri_parser("/test/document?hello-world");
    EXPECT_TRUE(uri_parser.parse(uri));
    EXPECT_EQ(uri.segments.size(), 2);
    EXPECT_EQ(uri.segments[0], "test");
    EXPECT_EQ(uri.segments[1], "document");
    EXPECT_EQ(uri.query, "hello-world");
    EXPECT_EQ(uri.fragment, "");
}

TEST(UriParser, PathAbsoluteWithFragment)
{
    Uri uri;
    Parser uri_parser("/test/document?hello#world");
    EXPECT_TRUE(uri_parser.parse(uri));
    EXPECT_EQ(uri.segments.size(), 2);
    EXPECT_EQ(uri.segments[0], "test");
    EXPECT_EQ(uri.segments[1], "document");
    EXPECT_EQ(uri.query, "hello");
    EXPECT_EQ(uri.fragment, "world");
}

TEST(UriParser, InvalidPath)
{
    Uri uri;
    Parser uri_parser("test path");
    EXPECT_FALSE(uri_parser.parse(uri));
}