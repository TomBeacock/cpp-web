#pragma once

#include "web/tcp/tcp_server.h"
#include "web/types.h"

#include <span>
#include <string>
#include <unordered_map>
#include <vector>

namespace Web::Http {
class Server : public Tcp::Server {
  public:
    Server(const std::string &ip_address, Nat16 port);

    void start();

  protected:
    virtual void on_message_received(std::span<Byte> message) override;
};
}  // namespace Web::Http