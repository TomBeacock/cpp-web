#include "server.h"

using namespace Web;

Server::Server(std::string_view ip_address, Nat16 port)
    : Http::Server(
          ip_address,
          port,
          {Http::Version::Http_1_0 | Http::Version::Http_1_1,
           bitmask_all<Http::Method>})
{}

void Server::on_request_received(const Web::Http::Request &request)
{
    std::string content =
        "<!DOCTYPE html><html lang=\"en\"><body><p>Hello world</p><img "
        "src=\"test.jpeg\"></img></body></html>";

    Http::Response response(Http::Version::Http_1_1, Http::Status::Ok);
    response.fields["Content-Type"] = "text/html";
    response.fields["Content-Length"] = std::to_string(content.size());
    response.body = std::vector<Byte>(content.begin(), content.end());
    send_response(response);
}
