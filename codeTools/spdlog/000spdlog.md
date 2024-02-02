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
```shell
# 1. 下载spdlog： 
git clone https://github.com/gabime/spdlog.git
# 2. 编译链接， 生成vs 的项目文件  
cd spdlog && mkdir build && cd build
cmake ..   # 此时会在build 文件夹中生成vs 的项目文件
# 3. 使用vs 打开build 文件夹下的vs 项目文件， 编译链接生成库文件。 此时vs 项目中就有spdlog 的源码。
```











