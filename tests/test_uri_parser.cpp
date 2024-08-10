#include "web/uri/uri_parser.h"

#include <gtest/gtest.h>

using namespace Web::Uri;

TEST(UriParser, PathAbsolute)
{
    Uri uri;
    Parser uri_parser("/test/document");
    EXPECT_TRUE(uri_parser.parse(uri));
    EXPECT_EQ(static_cast<const std::string &>(uri), "/test/document");
    EXPECT_EQ(uri.get_path(), "/test/document");
    EXPECT_EQ(uri.get_query(), "");
    EXPECT_EQ(uri.get_fragment(), "");
}

TEST(UriParser, PathAbsoluteWithQuery)
{
    Uri uri;
    Parser uri_parser("/test/document?hello-world");
    EXPECT_TRUE(uri_parser.parse(uri));
    EXPECT_EQ(
        static_cast<const std::string &>(uri), "/test/document?hello-world");
    EXPECT_EQ(uri.get_path(), "/test/document");
    EXPECT_EQ(uri.get_query(), "hello-world");
    EXPECT_EQ(uri.get_fragment(), "");
}

TEST(UriParser, PathAbsoluteWithFragment)
{
    Uri uri;
    Parser uri_parser("/test/document?hello#world");
    EXPECT_TRUE(uri_parser.parse(uri));
    EXPECT_EQ(
        static_cast<const std::string &>(uri), "/test/document?hello#world");
    EXPECT_EQ(uri.get_path(), "/test/document");
    EXPECT_EQ(uri.get_query(), "hello");
    EXPECT_EQ(uri.get_fragment(), "world");
}

TEST(UriParser, InvalidPath)
{
    Uri uri;
    Parser uri_parser("test path");
    EXPECT_FALSE(uri_parser.parse(uri));
}