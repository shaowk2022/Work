#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <signal.h>
#include <unistd.h>
#include <arpa/inet.h>

// #define SERVER_IP "127.0.0.1"   // 服务器 IP 地址
// #define SERVER_PORT 3888        

bool shutdown_requested = false;
void stop_handler()
{
    shutdown_requested = true;
    printf("preparing to shut down...");
}

void setup_signal_handlers()
{
    signal(SIGINT, stop_handler);
    signal(SIGTERM, stop_handler);
}

int main() {
    char SERVER_IP[] = { "127.0.0.1" };  // 服务器 IP 地址
    int SERVER_PORT = 3888;     // 服务器端口号
    int client_socket;
    struct sockaddr_in server_addr;
    char message[1024] = "Hello, Server!";
    char buffer[1024] = {0};

    printf("输入目的IP：");
    scanf("%s", SERVER_IP);

    printf("输入目标端口号：");
    scanf("%d", &SERVER_PORT);

    // 创建客户端套接字
    if ((client_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1) {
        perror("Socket creation failed");
        exit(EXIT_FAILURE);
    }

    // 设置服务器信息
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(SERVER_PORT);
    if (inet_pton(AF_INET, SERVER_IP, &server_addr.sin_addr) <= 0) {
        perror("Invalid address / Address not supported");
        exit(EXIT_FAILURE);
    }

    // 连接到服务器
    if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
        perror("Connection failed");
        exit(EXIT_FAILURE);
    }

    setup_signal_handlers();

    while(!shutdown_requested){
        // 发送数据到服务器
        send(client_socket, message, strlen(message), 0);
        //printf("Message sent to server: %s\n", message);

        // 接收服务器响应
        read(client_socket, buffer, 1024);
        printf("Server response: %s\n", buffer);

    }
    
    // 关闭套接字
    close(client_socket);
    return 0;
}
