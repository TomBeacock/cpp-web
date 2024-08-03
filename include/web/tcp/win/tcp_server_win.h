#pragma once

#define NOMINMAX

#ifndef UNICODE
    #define UNICODE
#endif

#include "web/types.h"

#include <wS2tcpip.h>
#include <winsock2.h>

#include <functional>
#include <span>
#include <string>

namespace Web::Tcp::Win {
class Server {
  public:
    Server(const std::string &ip_address, Nat16 port);
    ~Server();

    void start();

  protected:
    virtual void on_message_received(std::span<Byte> message);
    void send_message(std::vector<Byte> &message) const;

  private:
    void accept_connection();

  private:
    WSADATA wsa_data;
    sockaddr_in service;
    SOCKET listen_socket;
    SOCKET accept_socket;
};
}  // namespace Web::Tcp::Win