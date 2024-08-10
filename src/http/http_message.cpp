#include "web/http/http_message.h"

#include <format>
#include <sstream>

namespace Web::Http {
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
    for (const auto &[name, value] : this->headers) {
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