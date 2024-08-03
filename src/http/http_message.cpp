#include "web/http/http_message.h"

#include <format>
#include <sstream>

namespace Web::Http {
static std::optional<Char> convert_hex_char(Char c)
{
    if (c >= '0' || c <= '9') {
        return c - '0';
    } else if (c >= 'A' || c <= 'F') {
        return 10 + (c - 'A');
    } else if (c >= 'a' || c <= 'f') {
        return 10 + (c - 'a');
    }
    return std::nullopt;
}

static std::optional<std::string> parse_target(std::string_view target)
{
    std::string url;
    size_t i = 0;
    while (i < target.size()) {
        if (target[i] == '+') {
            url += ' ';
        } else if (target[i] == '%') {
            if (i + 2 >= target.size()) {
                return std::nullopt;
            }

            auto h1 = convert_hex_char(target[i + 1]),
                 h2 = convert_hex_char(target[i + 2]);
            if (!h1 || !h2) {
                return std::nullopt;
            }
            url += *h1 * 16 + *h2;
            i += 2;
        } else {
            url += target[i];
        }
    }
    return url;
}

std::string_view to_string(Method method)
{
    switch (method) {
        case Method::Get: return "GET";
        case Method::Head: return "HEAD";
        case Method::Post: return "POST";
        case Method::Put: return "PUT";
        case Method::Delete: return "DELETE";
        case Method::Connect: return "CONNECT";
        case Method::Options: return "OPTIONS";
        case Method::Trace: return "TRACE";
    }
    return "";
}

std::optional<Method> to_method(std::string_view str)
{
    static const std::map<std::string, Method, std::less<>> method_map = {
        {"GET", Method::Get},
        {"HEAD", Method::Head},
        {"POST", Method::Post},
        {"PUT", Method::Put},
        {"DELETE", Method::Delete},
        {"CONNECT", Method::Connect},
        {"OPTIONS", Method::Options},
        {"TRACE", Method::Trace},
    };
    if (auto it = method_map.find(str); it != method_map.end()) {
        return it->second;
    }
    return std::nullopt;
}

std::string_view to_string(Version version)
{
    switch (version) {
        case Version::Http_0_9: return "HTTP/0.9";
        case Version::Http_1_0: return "HTTP/1.0";
        case Version::Http_1_1: return "HTTP/1.1";
        case Version::Http_2_0: return "HTTP/2.0";
        case Version::Http_3_0: return "HTTP/3.0";
    }
    return "";
}

std::optional<Version> to_version(Nat8 major, Nat8 minor)
{
    static const std::map<Nat16, Version> version_map = {
        {0 << 8 | 9, Version::Http_0_9},
        {1 << 8 | 0, Version::Http_1_0},
        {1 << 8 | 1, Version::Http_1_1},
        {2 << 8 | 0, Version::Http_2_0},
        {3 << 8 | 0, Version::Http_3_0},
    };
    Nat16 version = major << 8 | minor;
    if (auto it = version_map.find(version); it != version_map.end()) {
        return it->second;
    }
    return std::nullopt;
}

std::underlying_type_t<Status> to_code(Status status)
{
    return std::to_underlying(status);
}

std::string_view to_reason_phrase(Status status)
{
    switch (status) {
        case Status::Continue: return "Continue";
        case Status::SwitchingProtocols: return "Switching Protocols";

        case Status::Ok: return "OK";
        case Status::Created: return "Created";
        case Status::Accepted: return "Accepted";
        case Status::NonAuthoritativeInformation:
            return "Non-Authoritative Information";
        case Status::NoContent: return "No Content";
        case Status::ResetContent: return "Reset Content";
        case Status::PartialContent: return "Partial Content";

        case Status::MultipleChoices: return "Multiple Choices";
        case Status::MovedPermanently: return "Moved Permanently";
        case Status::Found: return "Found";
        case Status::SeeOther: return "See Other";
        case Status::NotModified: return "Not Modified";
        case Status::UseProxy: return "Use Proxy";
        case Status::TemporaryRedirect: return "Temporary Redirect";
        case Status::PermanentRedirect: return "Permanent Redirect";

        case Status::BadRequest: return "Bad Request";
        case Status::Unauthorized: return "Unauthorized";
        case Status::PaymentRequired: return "Payment Required";
        case Status::Forbidden: return "Forbidden";
        case Status::NotFound: return "Not Found";
        case Status::MethodNotAllowed: return "Method Not Allowed";
        case Status::NotAcceptable: return "Not Acceptable";
        case Status::ProxyAuthenticationRequired:
            return "Proxy Authentication Required";
        case Status::RequestTimeout: return "Request Timeout";
        case Status::Conflict: return "Conflict";
        case Status::Gone: return "Gone";
        case Status::LengthRequired: return "Length Required";
        case Status::PreconditionFailed: return "Precondition Failed";
        case Status::ContentTooLarge: return "Content Too Large";
        case Status::UriTooLong: return "URI Too Long";
        case Status::UnsupportedMediaType: return "Unsupported Media Type";
        case Status::RangeNotSatisfiable: return "Range Not Satisfiable";
        case Status::ExpectationFailed: return "Expectation Failed";
        case Status::ImATeapot: return "I'm a teapot";
        case Status::MisdirectedRequest: return "Misdirected Request";
        case Status::UnprocessableContent: return "Unprocessable Content";
        case Status::UpgradeRequired: return "Upgrade Required";

        case Status::InternalServerError: return "Internal Server Error";
        case Status::NotImplemented: return "Not Implemented";
        case Status::BadGateway: return "Bad Gateway";
        case Status::ServiceUnavailable: return "Service Unavailable";
        case Status::GatewayTimeout: return "Gateway Timeout";
        case Status::HttpVersionNotSupported:
            return "HTTP Version Not Supported";
    }
    return "";
}

Message::Message(Version version) : version(version) {}

std::vector<Byte> Response::to_raw() const
{
    std::stringstream ss;
    // Response line
    ss << std::format(
        "{} {} {}\r\n",
        to_string(this->version),
        to_code(this->status),
        to_reason_phrase(this->status));

    // Fields
    for (const auto &[name, value] : this->fields) {
        ss << std::format("{}: {}\r\n", name, value);
    }
    // Body separator
    ss << "\r\n";

    // To bytes
    std::string header = ss.str();
    std::vector<Byte> raw(header.begin(), header.end());

    // Body
    raw.insert(raw.end(), this->body.begin(), this->body.end());

    return raw;
}

Request::Request(Method method, Uri::Uri target, Version version)
    : Message(version),
      method(method),
      target(target)
{}

Response::Response(Version version, Status status)
    : Message(version),
      status(status)
{}
}  // namespace Web::Http