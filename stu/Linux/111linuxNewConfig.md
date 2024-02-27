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

# git 项目  


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


