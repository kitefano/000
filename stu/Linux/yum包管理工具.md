
# yum 包管理工具
在CentOS系统中，Yum（Yellowdog Updater Modified）是一个包管理工具，用于在系统上安装、更新和删除软件包。Yum的配置文件通常存储在/etc/yum.repos.d/目录下，每个仓库都有一个单独的文件  

## 查看/etc/yum.repos.d/目录下的仓库文件：
```shell
ls /etc/yum.repos.d/
# 这将列出该目录下的所有文件，每个文件对应一个 Yum 仓库的配置。
```
配置文件中包含了仓库的基本信息，如仓库名称、地址、是否启用、GPG 密钥等。通过查看这些文件，你可以了解系统上已配置的 Yum 仓库信息。  

## 更新 Yum 缓存：
```shell
sudo yum makecache
```

## 添加 MySQL Yum Repository
```shell
# MySQL 提供了官方的 Yum Repository，可以使用它来安装最新版本的 MySQL。
sudo yum localinstall https://dev.mysql.com/get/mysql80-community-release-el7-3.noarch.rpm  
## 更新 Yum 缓存：
sudo yum makecache
```
