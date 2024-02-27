## 添加 MySQL Yum Repository
```shell
# MySQL 提供了官方的 Yum Repository，可以使用它来安装最新版本的 MySQL。
sudo yum localinstall https://dev.mysql.com/get/mysql80-community-release-el7-3.noarch.rpm  
## 更新 Yum 缓存：
sudo yum makecache
```