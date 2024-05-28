#include <iostream>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>

int main() {
    struct addrinfo hints, *res;
    int status;
    char ipstr[INET_ADDRSTRLEN];

    // Initialize addrinfo structure
    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC; // IPv4 or IPv6
    hints.ai_socktype = SOCK_STREAM;

    // Resolve the hostname
    if ((status = getaddrinfo("example.com", nullptr, &hints, &res))!= 0) {
        std::cerr << "getaddrinfo: " << gai_strerror(status) << std::endl;
        return 2;
    }

    // Print the resolved IP address
    for (; res!= nullptr; res = res->ai_next) {
        void *addr;
        char *ipver;

        // Check if the address belongs to an IPv4 or IPv6
        if ((addr = getnameinfo(res->ai_addr, res->ai_addrlen, &ipver, 0, nullptr, 0, NI_NUMERICHOST))) {
            std::cout << "IP Version: " << ipver << "\n";
            std::cout << "IP Address: " << inet_ntop(AF_INET, addr, ipstr, INET_ADDRSTRLEN) << "\n";
        }

        freeaddrinfo(res);
    }

    return 0;
}
