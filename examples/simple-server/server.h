#include <web/http/http_server.h>

class Server : public Web::Http::Server {
  public:
    Server(std::string_view ip_address, Nat16 port);

  protected:
    virtual void on_request_received(Web::Http::Request &request) override;
};