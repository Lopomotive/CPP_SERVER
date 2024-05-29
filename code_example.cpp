#include <iostream>
#include <cstring>
#include <cstdlib>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>

class SocketClient {
private:
    int sockfd;
    struct sockaddr_in server_addr;

public:
    SocketClient(const char* ip_address) {
        sockfd = socket(AF_INET, SOCK_STREAM, 0);
        if (sockfd < 0) {
            std::cerr << "Failed to create socket" << std::endl;
            exit(EXIT_FAILURE);
        }
        memset(&server_addr, 0, sizeof(server_addr));
        server_addr.sin_family = AF_INET;
        server_addr.sin_addr.s_addr = inet_addr(ip_address);
        server_addr.sin_port = htons(8000); // Default port
    }

    ~SocketClient() {
        close(sockfd);
    }

    bool connectServer() {
        if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) {
            std::perror("connect");
            return false;
        }
        return true;
    }

    void sendMessage(const char* message) {
        if (send(sockfd, message, strlen(message), 0) < 0) {
            std::perror("send");
        }
    }

    const char* getServerIP() const {
        char server_ip[INET_ADDRSTRLEN] = "";
        inet_ntop(AF_INET, &(server_addr.sin_addr), server_ip, INET_ADDRSTRLEN);
        return server_ip;
    }
};
