
# 一个简单的 CMakeLists.txt 可能如下所示：
```shell
# CMakeLists.txt
# CMake 最低版本号要求
cmake_minimum_required(VERSION 3.10)
# 项目信息
project(HelloWorld)
# 指定生成目标
add_executable(hello main.c)

# 编译：会在build 文件里生成makefile  
## mkdir build && cd build && cmake ..
# make： 会编译链接 生成可执行文件 hello。
```

# 教程：全网最细的CMake教程
(https://zhuanlan.zhihu.com/p/534439206)  
