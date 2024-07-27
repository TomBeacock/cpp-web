#include "tcp_server_win.h"

#include "log.h"

#include <vector>

static void exit_with_error(const std::string &msg)
{
    LOG_ERROR("{}: {}", msg, WSAGetLastError());
    exit(1);
}

namespace Web::Tcp::Win {
Server::Server(const std::string &ip_address, Nat16 port)
    : wsa_data(),
      service{AF_INET, htons(port), {}},
      listen_socket(),
      accept_socket()
{
    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 0), &this->wsa_data) != NO_ERROR) {
        exit_with_error("WSA startup failed");
    }

    // Create listen socket
    this->listen_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (this->listen_socket == INVALID_SOCKET) {
        exit_with_error("Socket failed");
    }

    // Bind socket
    inet_pton(AF_INET, ip_address.c_str(), &this->service.sin_addr);

    if (bind(
            this->listen_socket,
            reinterpret_cast<const sockaddr *>(&this->service),
            sizeof(this->service)) == SOCKET_ERROR) {
        exit_with_error("Address binding failed");
    }
}

Server::~Server()
{
    closesocket(this->listen_socket);
    closesocket(this->accept_socket);
    WSACleanup();
}

void Server::start()
{
    // Begin listening on socket
    if (listen(this->listen_socket, 20) < 0) {
        exit_with_error("Socket listen failed");
    }
    LOG_INFO(
        "Listening on ADDRESS: {} PORT: {}",
        inet_ntoa(reinterpret_cast<in_addr &>(this->service.sin_addr)),
        ntohs(this->service.sin_port));

    std::vector<Byte> buffer(30720);
    while (true) {
        accept_connection();

        Int bytes_received = recv(
            this->accept_socket,
            reinterpret_cast<char *>(buffer.data()),
            static_cast<int>(buffer.size()),
            0);

        if (bytes_received == SOCKET_ERROR) {
            exit_with_error("Receiving bytes failed");
        }

        on_message_received(std::span<Byte>(buffer.begin(), bytes_received));

        send_response();

        closesocket(this->accept_socket);
    }
}

void Server::on_message_received(std::span<Byte> message)
{
    LOG_INFO("Message recieved\n{}", reinterpret_cast<char *>(message.data()));
}

void Server::accept_connection()
{
    this->accept_socket = accept(this->listen_socket, nullptr, nullptr);

    if (this->accept_socket == INVALID_SOCKET) {
        exit_with_error("Accepting connection failed");
    }
}

void Server::send_response() const
{
    std::string content =
        "<!DOCTYPE html><html lang=\"en\"><body><p>Hello "
        "world</p><img src=\"test.jpeg\"></img></body> </html>";
    std::string response = std::format(
        "HTTP/1.1 200 OK\nContent-Type: text/html\nContent-Length: "
        "{}\n\n{}",
        content.size(),
        content);

    LOG_INFO("Sending response\n{}", response);

    size_t total_sent = 0;
    while (total_sent < response.size()) {
        int sent = send(
            this->accept_socket,
            response.c_str(),
            static_cast<int>(response.size()),
            0);
        if (sent < 0) {
            break;
        }
        total_sent += sent;
    }

    if (total_sent == response.size()) {
        LOG_INFO("Server response success");
    } else {
        LOG_WARN("Server response failed");
    }
}
}  // namespace Web::Tcp::Win
