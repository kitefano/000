# spdlog.md  

# 部署方式有两种  
第一种是包含头文件直接用。  
第二种是包含库文件使用。
推荐第一种使用方法，因为第二种还是要包含头文件，spdlog本身使用起来也是不需要编译，引入头文件就行。  


## 包含头文件直接使用
1. 下载spdlog： `git clone https://github.com/gabime/spdlog.git`
2. 把spdlog 文件夹中include 复制到项目中，设置“c/c++/常规/附加包含目录”
3. 使用。

## 包含库文件使用  -- 不推荐，用起来多了一步，还是需要包含头文件。  
1. 下载spdlog： `git clone https://github.com/gabime/spdlog.git`
2. 生成vs 的项目文件  
```shell
$ git clone https://github.com/gabime/spdlog.git
$ cd spdlog && mkdir build && cd build
$ cmake ..   # 此时会在build 文件夹中生成vs 的项目文件
```
3. 使用vs 打开build 文件夹下的vs 项目文件， 编译链接生成库文件。  
4. 。。。

# 源码学习

## spdlog 
### version.h
```c++
#pragma once

#define SPDLOG_VER_MAJOR 1
#define SPDLOG_VER_MINOR 13
#define SPDLOG_VER_PATCH 0

#define SPDLOG_TO_VERSION(major, minor, patch) (major * 10000 + minor * 100 + patch)
#define SPDLOG_VERSION SPDLOG_TO_VERSION(SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR, SPDLOG_VER_PATCH)
#if 0
定义 SPDLOG_VER_MAJOR、SPDLOG_VER_MINOR 和 SPDLOG_VER_PATCH 分别表示 spdlog 主版本、次版本和修订版本。  
定义了 SPDLOG_TO_VERSION 宏，该宏接受主、次、修订版本号，并将它们组合成一个单独的版本号。  
使用 SPDLOG_TO_VERSION 宏定义了 SPDLOG_VERSION，这是一个整数，表示整个 spdlog 库的版本。  

这样一来，如果您在项目中包含了 spdlog/version.h 头文件，您就可以通过查看 SPDLOG_VER_MAJOR、SPDLOG_VER_MINOR 和 SPDLOG_VER_PATCH 的值，或者直接使用 SPDLOG_VERSION 来获取 spdlog 的版本信息。  
#endif 
```













