#pragma once

#include "web/http/http_message.h"
#include "web/tcp/tcp_server.h"

#include <types/types.h>

#include <span>
#include <string>
#include <unordered_map>
#include <vector>

namespace Web::Http {
class Server : public Tcp::Server {
  public:
    struct Config {
        Version allowed_versions = bitmask_all<Version>;
        Method allowed_methods = bitmask_all<Method>;
    };

  public:
    Server(std::string_view ip_address, Nat16 port, Config config);

    void start();

    void send_response(Response &response) const;
    void send_response(Status status) const;

  protected:
    virtual void on_message_received(std::span<Byte> message) final;
    virtual void on_request_received(Request &request){};

  private:
    Config config;
};
}  // namespace Web::Http