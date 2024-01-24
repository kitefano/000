
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
