
# 通过命令`ipconfig`获取本机ip
## 实现
```c++
#include <iostream>
#include <string>

std::string getlocalip()
{
    std::string ip("127.0.0.1");
    std::string ipconfig_content;

    FILE* fp = _popen("ipconfig", "r");
    if (NULL != fp)
    {
        char line[4096];
        while (NULL != fgets(line, sizeof(line), fp))
        {
            ipconfig_content += line;
        }

        auto p = ipconfig_content.rfind("IPv4");
        if (p != std::string::npos)
        {
            auto p2 = ipconfig_content.find(":", p);
            if (p2 != std::string::npos)
            {
                auto p3 = ipconfig_content.find("\n", p2);
                if (p3 != std::string::npos)
                {
                    ip = ipconfig_content.substr(p2 + 1, p3 - p2 - 1);

                    // 去除 ip 首尾空格。
                    if (!ip.empty())
                    {
                        ip.erase(0, ip.find_first_not_of(" "));
                        ip.erase(ip.find_last_not_of(" ") + 1);
                    }
                }
            }
        }

        _pclose(fp);
    }

    return ip;
}
```

## 测试
```c++
int main(int argc, char** argv)
{
    std::cout << "Hello World!\n";

    std::cout << getlocalip() << std::endl;
    // 192.168.117.41

    return 0;
}
```

# 通过
## 实现
```c++
#include <iostream>
#include <string>
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "Ws2_32.lib")

std::string getlocalip()
{
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "WSAStartup failed" << std::endl;
        return "1";
    }

    char hostname[100];
    gethostname(hostname, 100);

    addrinfo hints, * info;
    ZeroMemory(&hints, sizeof(hints));
    hints.ai_family = AF_INET;  // IPv4
    hints.ai_socktype = SOCK_STREAM;

    if (getaddrinfo(hostname, NULL, &hints, &info) != 0) {
        std::cerr << "getaddrinfo failed" << std::endl;
        WSACleanup();
        return "1";
    }

    // info->ai_addr is a sockaddr structure that contains the IP address
    sockaddr_in* sockaddr_ipv4 = reinterpret_cast<sockaddr_in*>(info->ai_addr);
    char ip[INET_ADDRSTRLEN];
    inet_ntop(AF_INET, &(sockaddr_ipv4->sin_addr), ip, INET_ADDRSTRLEN);

    //std::cout << "本机IP地址：" << ip << std::endl;
    return ip;

    freeaddrinfo(info);
    WSACleanup();
}
```

## 测试
```c++
int main(int argc, char** argv)
{
    std::cout << "Hello World!\n";

    std::cout << getlocalip() << std::endl;

    return 0;
}
```