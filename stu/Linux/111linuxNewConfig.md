# linux 新机 配置

# .vimrc  
```shell
$ vim .vimrc

" add by lxk@date for 添加配置
set tabstop=4
set softtabstop=4
set shiftwidth=4
set autoindent
set cindent

```


# .bashrc
```shell
$ vim .bashrc

# add by lxk@date for 添加配置
alias lt='ls -ltr'
alias c='clear'
alias cdl='cd ~/lxk'
alias mc='make clean'
alias mm='./mm'
alias mysqlstart='service mysqld restart'
alias cmc='rm -rf CMakeFiles CMakeCache.txt'
alias cmake='cmake3'

```

# 更新 centos中Yum 软件信息：
```shell
# 更新系统中的所有已安装软件包到其最新版本，包括操作系统和应用程序
sudo yum update
# 会在更新软件包之前执行 yum update 命令，以确保系统中的所有软件包都是最新的。
sudo yum upgrade
# 更新 Yum 缓存：
sudo yum makecache
```
## 对比 `yum update` 和 `yum upgrade`  
总的来说，yum upgrade 是 yum update 的超集。在大多数情况下，您可能更倾向于使用 yum upgrade，因为它会确保系统中的所有软件包和操作系统都是最新的，同时也会处理发行版的升级。但是，在某些情况下，如果您只想更新软件包而不升级整个操作系统，则可以使用 yum update。  



# git 项目  
## git clone 时报错：
```shell
# 报错信息：  
git clone https://github.com/kitefano/000.git  
Cloning into 'mbedtls'...
fatal: unable to access 'https://github.com/kitefano/mbedtls.git/': Peer reports incompatible or unsupported protocol version.
# 解决：
 更新完 centos中Yum 软件信息 
# 命令： 
sudo yum upgrade
sudo yum makecache

# 报错信息：  
[lxk@iZbp1b5vxiz2fe1ujyq0jaZ ~]$ git clone https://github.com/kitefano/000.git
Cloning into '000'...
Missing or invalid credentials.
Error: connect ENOENT /run/user/1000/vscode-git-cd151dcd95.sock
# 报错原因：
这个错误表明 Git 无法找到有效的凭据来进行克隆操作，并且还指示了一个与 VS Code 相关的套接字文件丢失的错误。这可能是由于凭据问题或与 VS Code 的集成问题导致的。  
# 解决： 000.git 是私有库才报这个错， 设置为public 就可以啦。  
```



# 转贴代码串行
(https://blog.csdn.net/wzy_1988/article/details/50264285)  
```shell
# vim进入paste模式，命令如下：
:set paste
## 进入paste模式之后，再按i进入插入模式，进行复制、粘贴就很正常了。  

#解除paste模式。
:set nopaste

# paste模式主要帮我们做了如下事情：  
## textwidth设置为0
## wrapmargin设置为0
## set noai
## set nosi
## softtabstop设置为0
## revins重置
## ruler重置
## showmatch重置
## formatoptions使用空值

```


