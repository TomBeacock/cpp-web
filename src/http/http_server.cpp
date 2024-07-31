#include "http_server.h"

#include "http_parser.h"
#include "log.h"

#include <cctype>
#include <limits>
#include <optional>
#include <sstream>

namespace Web::Http {

Server::Server(const std::string &ip_address, Nat16 port)
    : Tcp::Server(ip_address, port)
{}

void Server::start()
{
    Tcp::Server::start();
}

void Server::on_message_received(std::span<Byte> message)
{
    std::string_view text_message(&message[0], message.size());
    LOG_INFO("Http request recieved\n{}", text_message);

    RequestParser parser(
        text_message,
        Version::Http_1_0 | Version::Http_1_1,
        Method::Get | Method::Head);
    Request request;
    // Try parse request
    if (Status status = parser.parse(request); status != Status::Ok) {
        // Send error response
        Response response(Version::Http_1_1, status);
        std::vector<Byte> raw_response = response.to_raw();
        send_response(raw_response);
        return;
    }

    std::string content =
        "<!DOCTYPE html><html lang=\"en\"><body><p>Hello world</p><img "
        "src=\"test.jpeg\"></img></body></html>";

    Response response(Version::Http_1_1, Status::Ok);
    response.fields["Content-Type"] = "text/html";
    response.fields["Content-Length"] = std::to_string(content.size());
    response.body = std::vector<Byte>(content.begin(), content.end());
    std::vector<Byte> raw_response = response.to_raw();
    send_response(raw_response);
}

}  // namespace Web::Http