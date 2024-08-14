#include "web/http/http_server.h"

#include "web/http/http_parser.h"
#include "web/log.h"

#include <cctype>
#include <limits>
#include <optional>
#include <sstream>

namespace Web::Http {

Server::Server(std::string_view ip_address, Nat16 port, Config config)
    : Tcp::Server(ip_address, port),
      config(config)
{}

void Server::start()
{
    Tcp::Server::start();
}

void Server::send_response(Response &response) const
{
    Date &date = response.get_or_create_header<Date>();
    date.time =
        std::chrono::floor<std::chrono::seconds>(std::chrono::utc_clock::now());

    std::vector<Byte> raw_response = response.to_bytes();
    send_message(raw_response);
}

void Server::send_response(Status status) const
{
    Response response(Version::Http_1_1, status);
    send_response(response);
}

void Server::on_message_received(std::span<Byte> message)
{
    std::string_view text_message(&message[0], message.size());
    LOG_INFO("Http request recieved\n{}", text_message);

    Request request;
    RequestParser parser(
        text_message, config.allowed_versions, config.allowed_methods);
    Status status = parser.parse(request);
    if (status != Status::Ok) {
        Response response(Version::Http_1_1, status);
        switch (status) {
            case Status::MethodNotAllowed: {
                Allow &allow = response.get_or_create_header<Allow>();
                allow.methods = this->config.allowed_methods;
                break;
            }
        }
        send_response(response);  // Send error status response
        return;
    }

    on_request_received(request);
}
}  // namespace Web::Http