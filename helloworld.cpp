import std;

namespace MyLibrary::network::FTP {
    void connect() {
        std::println(std::cout, "Connecting to FTP server...");
    }
}

namespace MyLibrary::network::HTTP {
    void connect() {
        std::println(std::cout, "Connecting to HTTP server...");
    }
}

int main() {
    MyLibrary::network::FTP::connect();
    MyLibrary::network::HTTP::connect();
    return 0;
}