#include "http/http_server.h"

using namespace Web;

int main(int argc, char *argv[])
{
    Http::Server server("127.0.0.1", 80);
    server.start();
}