#include "web/tcp/win/tcp_server_win.h"

#include "web/log.h"

#include <vector>

static void exit_with_error(const std::string &msg)
{
    LOG_ERROR("{}: {}", msg, WSAGetLastError());
    exit(1);
}

namespace Web::Tcp::Win {
Server::Server(std::string_view ip_address, Nat16 port)
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
    inet_pton(AF_INET, ip_address.data(), &this->service.sin_addr);

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
        "Listening on {}:{}",
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

void Server::send_message(std::vector<Byte> &message) const
{
    LOG_INFO(
        "Sending message\n{}", std::string(message.begin(), message.end()));

    size_t total_sent = 0;
    while (total_sent < message.size()) {
        int sent = send(
            this->accept_socket,
            message.data(),
            static_cast<int>(message.size()),
            0);
        if (sent < 0) {
            break;
        }
        total_sent += sent;
    }

    if (total_sent == message.size()) {
        LOG_INFO("Server response success");
    } else {
        LOG_WARN("Server response failed");
    }
}
}  // namespace Web::Tcp::Win
