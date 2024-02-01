# 用于构建项目的 Makefile

# 编译器
CC = g++

# 编译器标志
CFLAGS = -Wall -g -std=c++11
SPDLOG = -I./spdlog/include
MYSQL  = -I./mysql-5.7.44-winx64
INCLUDE = -I. $(SPDLOG) $(MYSQL)

# 头文件
HEADERS =
# 源文件
SOURCES = main.cpp
# 目标文件
OBJECTS = $(SOURCES:.cpp=.o)

# 可执行文件
TARGET = mm

# 构建目标
$(TARGET): $(OBJECTS)
        $(CC) $(INCLUDE) $(CFLAGS) -o $(TARGET) $(OBJECTS)

# 编译源文件
%.o: %.cpp $(HEADERS)
        $(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

# 清理
clean:
        rm -f $(OBJECTS) $(TARGET)
