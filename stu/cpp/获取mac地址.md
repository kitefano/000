# 获取mac地址
获取mac地址的时候，一个机器有很多的mac地址， 我们要筛选出需要的mac地址，要获取当前正在使用的网络接口的 MAC 地址。  

## 实现
```c++

#include <iostream>
#include <string>
#include <winsock2.h>
#include <iphlpapi.h>


// Link with Iphlpapi.lib
#pragma comment(lib, "IPHLPAPI.lib")


std::string GetLocalMacAddress() {
    PIP_ADAPTER_ADDRESSES pAddresses = nullptr;
    ULONG outBufLen = 0;
    ULONG flags = GAA_FLAG_INCLUDE_PREFIX;
    DWORD dwRetVal = 0;

    // Allocate a 15 KB buffer to start with.
    outBufLen = 15000;

    do {
        pAddresses = static_cast<PIP_ADAPTER_ADDRESSES>(malloc(outBufLen));
        if (pAddresses == nullptr) {
            std::cerr << "Memory allocation failed for IP_ADAPTER_ADDRESSES struct" << std::endl;
            return "1";
        }

        dwRetVal = GetAdaptersAddresses(AF_UNSPEC, flags, nullptr, pAddresses, &outBufLen);

        if (dwRetVal == ERROR_BUFFER_OVERFLOW) {
            free(pAddresses);
            pAddresses = nullptr;
        }
        else {
            break;
        }
    } while ((dwRetVal == ERROR_BUFFER_OVERFLOW));

    std::string macAddress;

    if (dwRetVal == NO_ERROR) {
        PIP_ADAPTER_ADDRESSES pCurrAddresses = pAddresses;
        while (pCurrAddresses) {
            if (pCurrAddresses->OperStatus == IfOperStatusUp) {
                // Assuming the first interface that is up is the active one
                for (DWORD i = 0; i < pCurrAddresses->PhysicalAddressLength; i++) {
                    char hex[3];
                    sprintf_s(hex, "%.2X", pCurrAddresses->PhysicalAddress[i]);
                    macAddress += hex;
                    if (i < pCurrAddresses->PhysicalAddressLength - 1)
                        macAddress += "-";
                }
                break;
            }

            pCurrAddresses = pCurrAddresses->Next;
        }
    }
    else {
        std::cerr << "Call to GetAdaptersAddresses failed with error: " << dwRetVal << std::endl;
    }

    if (pAddresses != nullptr) {
        free(pAddresses);
    }

    return macAddress;
}

```

## test
```c++
int main(int argc, char** argv)
{
    std::cout << "Hello World!\n";

    std::string macAddress = GetLocalMacAddress();
    if (macAddress != "1") {
        std::cout << "本机MAC地址：" << macAddress << std::endl;
    }


    return 0;
}
```