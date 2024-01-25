# IMP
## github 中文排行榜： 
(https://github.com/GrowingGit/GitHub-Chinese-Top-Charts?tab=readme-ov-file)  


# pro  

# stu  
stu(https://github.com/kitefano/stu.git)  


# tool  
tool(https://github.com/kitefano/tool.git)  

# 开源项目
## 日志  
c/cpp： 
### spdlog(https://github.com/gabime/spdlog)  
部署  
下载源码， include文件中包括spdlog源码和头文件，使用的时候只需要把include的放到项目中，然后把include路径添加到头文件搜索路径中。  

控制台输出日志  
```c++
#include <spdlog/spdlog.h>
int main() {
    // 创建彩色输出的控制台日志记录器
    auto console = spdlog::stdout_color_mt("console");
    
    // 创建彩色输出的标准错误日志记录器
    auto err_logger = spdlog::stderr_color_mt("stderr");

    // 设置日志级别为info
    console->set_level(spdlog::level::info);
    err_logger->set_level(spdlog::level::err);  // 设置错误级别

    // 输出不同级别的日志消息
    console->info("This is an info message on console");
    console->warn("This is a warning message on console");
    err_logger->error("This is an error message on stderr");

    return 0;
}
```




(https://github.com/log4cplus/log4cplus)  
apache的日志子项目(https://github.com/apache/logging-log4cxx) 
(https://github.com/orocos-toolchain/log4cpp?tab=readme-ov-file)  



qt： (https://github.com/MEONMedical/Log4Qt)  
- (https://github.com/Waleon/Log4Qt-examples)  
- (https://github.com/myhhub/Log4Qt-project)    
- (https://github.com/amarchen/log4qt-demo-sailfish)  

