#pragma once

#include "web/enum_bitmask.h"

#include <types/types.h>

#include <optional>
#include <string>

consteval auto get_bit(size_t x)
{
    return 1 << x;
};

namespace Web::Http {
enum class Method : Nat8 {
    Get = get_bit(0),
    Head = get_bit(1),
    Post = get_bit(2),
    Put = get_bit(3),
    Delete = get_bit(4),
    Connect = get_bit(5),
    Options = get_bit(6),
    Trace = get_bit(7),
};

consteval void enable_bitmask_operators(Method);

std::string_view to_string(Method method);
std::string to_list_string(Method method);
std::optional<Method> to_method(std::string_view str);

enum class Version : Nat8 {
    Http_0_9 = get_bit(0),
    Http_1_0 = get_bit(1),
    Http_1_1 = get_bit(2),
    Http_2_0 = get_bit(3),
    Http_3_0 = get_bit(4),
};

consteval void enable_bitmask_operators(Version);

std::string_view to_string(Version version);
std::optional<Version> to_version(Nat8 major, Nat8 minor);

enum class Status : Nat16 {
    Continue = 100,
    SwitchingProtocols = 101,

    Ok = 200,
    Created = 201,
    Accepted = 202,
    NonAuthoritativeInformation = 203,
    NoContent = 204,
    ResetContent = 205,
    PartialContent = 206,

    MultipleChoices = 300,
    MovedPermanently = 301,
    Found = 302,
    SeeOther = 303,
    NotModified = 304,
    UseProxy = 305,
    TemporaryRedirect = 307,
    PermanentRedirect = 308,

    BadRequest = 400,
    Unauthorized = 401,
    PaymentRequired = 402,
    Forbidden = 403,
    NotFound = 404,
    MethodNotAllowed = 405,
    NotAcceptable = 406,
    ProxyAuthenticationRequired = 407,
    RequestTimeout = 408,
    Conflict = 409,
    Gone = 410,
    LengthRequired = 411,
    PreconditionFailed = 412,
    ContentTooLarge = 413,
    UriTooLong = 414,
    UnsupportedMediaType = 415,
    RangeNotSatisfiable = 416,
    ExpectationFailed = 417,
    ImATeapot = 418,
    MisdirectedRequest = 421,
    UnprocessableContent = 422,
    UpgradeRequired = 426,

    InternalServerError = 500,
    NotImplemented = 501,
    BadGateway = 502,
    ServiceUnavailable = 503,
    GatewayTimeout = 504,
    HttpVersionNotSupported = 505,
};

std::underlying_type_t<Status> to_code(Status status);
std::string_view to_reason_phrase(Status status);
}  // namespace Web::Http