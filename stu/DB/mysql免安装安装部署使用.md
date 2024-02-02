# Windows 下 mysql 免安装安装部署使用
lxk博客地址：(https://blog.csdn.net/weixin_45497541/article/details/135988111?csdn_share_tail=%7B%22type%22%3A%22blog%22%2C%22rType%22%3A%22article%22%2C%22rId%22%3A%22135988111%22%2C%22source%22%3A%22weixin_45497541%22%7D)    

参考文档(https://blog.csdn.net/salted___fish/article/details/106356078)  

## 第一步：下载  
打开 MySQL 官网，找到 Community 版的下载。选择 Community 是因为该版本免费而且是通常使用的版本。  
MySQL 的官网是：https://www.mysql.com/  
DOWNLOADS --> MySQL Community (GPL) Downloads --> MySQL Community Server --> Windows (x86, 64-bit), ZIP Archive --> 下载。  
MySQL 下载处的最终网址：https://dev.mysql.com/downloads/mysql/  

## 第二步：环境变量
将下载好的 mysql-8.0.27-winx64.zip 解压缩，得到 MySQL 安装目录。安装目录应该是一种含文件夹 bin 的目录。在笔者的 Windows，各路径如下：  
MySQL 安装目录：D:\mysql-8.0.27-winx64  
MySQL 命令目录(添加到环境变量)：D:\mysql-8.0.27-winx64\bin  
MySQL 数据库数据存放目录：D:\mysql-8.0.27-winx64\data  
MySQL 端口号：3306  
配置环境变量：  
在path中添加bin目录： S:\mysql-8.2.0-winx64\bin  

## 第三步：修改 mysql 的配置文件  
在 MySQL 的目录下手动创建一个 MySQL 配置文件 my.ini。此配置文件是用来规定 MySQL 服务进程的参数信息。  
```shell  
[mysqld]
# 设置3306端口
port=3306
# 设置mysql的安装目录，一定要与上面的安装路径保持一致
basedir=S:\\mysql-8.2.0-winx64
# 设置mysql数据库的数据的存放目录，自动生成，无需手动创建，当然也可以放在其他地方
datadir=S:\\mysql-8.2.0-winx64\\Data
# 允许最大连接数
max_connections=200
# 允许连接失败的次数。
max_connect_errors=10
# 服务端使用的字符集默认为utf8mb4
character-set-server=utf8mb4
# 创建新表时将使用的默认存储引擎
default-storage-engine=INNODB
# 默认使用“mysql_native_password”插件认证
#mysql_native_password
default_authentication_plugin=mysql_native_password
[mysql]
# 设置mysql客户端默认字符集
default-character-set=utf8mb4
[client]
# 设置mysql客户端连接服务端时默认使用的端口，不建议修改，这是公认端口号
port=3306
default-character-set=utf8mb4
```

win+s；搜索cmd；右键以管理员身份运行：  
cd D:\MySQL\mysql-8.0.20-winx64\bin  

初始化：  
mysqld --initialize --console  
出现Service successfully installed代表安装成功了！
报错：如果出现：Install/Remove of the Service Denied! 表示没有使用管理员身份运行cmd。

初始化后会生成初始化密码。  
mysql密码：  
A temporary password is generated for root@localhost: Ph0h!mT1BfmC

安装MySQL服务：  
mysqld --install  
出现Service successfully installed代表安装成功了！测试一下：  
	net start mysql  # 启动mysql的服务  
	net stop mysql   # 关闭mysql服务  


修改密码：  
net start mysql  
mysql -u root -p刚才复制的密码   
ALTER USER 'root'@'localhost' IDENTIFIED BY '新密码';  
exit;  



## windows 中 mysql 密码：  
kai@_123123  

登录：  
mysql -u root -p新密码   






# centos 下 mysql 安装部署及使用

## 第一步：删除已经存在的MySQL（彻底删除 MySQL）： 
(https://blog.csdn.net/wisdom_80/article/details/126334716)  
```shell
### ① 关闭MySQL服务
service mysql stop
### ② 检查系统是否安装了MySQL数据库
rpm -qa | grep -i mysql
### ③ 卸载并删除MySQL(不检查依赖关系)（上面搜索命令搜出来的都删除）
rpm -ev --nodeps mysql-community-common-8.0.36-1.el7.x86_64
rpm -ev --nodeps mysql-community-icu-data-files-8.0.36-1.el7.x86_64
rpm -ev --nodeps mysql-community-client-plugins-8.0.36-1.el7.x86_64
rpm -ev --nodeps mysql-community-libs-8.0.36-1.el7.x86_64
rpm -ev --nodeps mysql-community-server-8.0.36-1.el7.x86_64
rpm -ev --nodeps mysql80-community-release-el7-11.noarch
rpm -ev --nodeps mysql-community-client-8.0.36-1.el7.x86_64
###  四、查看MySQL对应的文件夹并进行删除
sudo find / -name mysql
#### 删除
rm -rf /var/lib/mysql
rm -rf /usr/lib64/mysql
rm -rf /usr/bin/mysql
rm -rf /var/lib/mysql
rm -rf /var/lib/mysql/mysql
rm -rf /etc/logrotate.d/mysql
### 五、最后验证一下是否删除成功
rpm -qa | grep -i mysql
```

## 第二步：安装 mysql 前 查看是否已经安装了 mariadb
mariadb 是 mysql 的一个分支， 和mysql 的安装会有冲突，如果有冲突，则需要删除。  
```shell
### 检查是否安装了 mariadb
rpm -qa | grep mariadb
yum info mariadb-server
```

## 彻底删除  mariadb
```shell
### 2、查看是否已经安装了 mariadb 
sudo rpm -qa | grep mariadb*
yum info mariadb-server
# 3、停止数据库服务。
sudo systemctl  stop   mariadb.service
# 4、删除mariadb服务开机自启动。
sudo systemctl  disable   mariadb.service
# 5、移除mariadb程序文件。
sudo yum remove -y  mariadb*
# 6、查询mysql相关的文件并删除。
sudo find  /  -name  "mysql*" |xargs  sudo rm  -rf 
sudo find  /  -name  "mariadb*" |xargs  sudo rm  -rf 
# 检查 mariadb 是否删除了。
sudo rpm -qa | grep mariadb*
yum info mariadb-server
```


## 安装配置 MySQL  

```shell

# 步骤 1: 添加 MySQL Yum Repository
## MySQL 提供了官方的 Yum Repository，可以使用它来安装最新版本的 MySQL。
sudo yum localinstall https://dev.mysql.com/get/mysql80-community-release-el7-3.noarch.rpm
## 更新缓存
sudo yum makecache

# 步骤 2: 安装 MySQL 服务器
sudo yum install mysql-server
## 报错： Public key for mysql-community-client-8.0.36-1.el7.x86_64.rpm is not installed
 Failing package is: mysql-community-client-8.0.36-1.el7.x86_64
 GPG Keys are configured as: file:///etc/pki/rpm-gpg/RPM-GPG-KEY-mysql
### 解决：在 CentOS 7 上导入 MySQL GPG 密钥的步骤：
### 下载 MySQL GPG 密钥：
sudo rpm --import https://repo.mysql.com/RPM-GPG-KEY-mysql
### 再次尝试安装 MySQL 软件包：
sudo yum localinstall https://dev.mysql.com/get/mysql80-community-release-el7-3.noarch.rpm
sudo yum makecache
sudo yum install mysql-server
## 报错：这表明已经安装的 MySQL GPG 密钥与预期的密钥不匹配。
The GPG keys listed for the "MySQL 8.0 Community Server" repository are already installed but they are not correct for this package.
Check that the correct key URLs are configured for this repository.
### 解决：1. 移除已安装的 GPG 密钥：删除已经存在的 MySQL GPG 密钥以确保一个干净的设置：
sudo rpm -e --allmatches gpg-pubkey
### 2. 清理 Yum 缓存：
sudo yum clean all
### 2. 导入正确的 GPG 密钥：导入 MySQL 正确的 GPG 密钥：
sudo rpm --import https://repo.mysql.com/RPM-GPG-KEY-mysql
### 3. 再次尝试安装 MySQL 软件包：重新运行 MySQL 软件包的安装命令：
sudo yum localinstall https://repo.mysql.com/mysql80-community-release-el7.rpm
sudo yum makecache
sudo yum install mysql-server
### 报错原因， https://repo.mysql.com/mysql80-community-release-el7.rpm 这个地址不对，对了就可以了。

# 步骤 3: 启动 MySQL 服务
sudo systemctl start mysqld

# 步骤 4: 配置 MySQL ： 运行以下命令以执行 MySQL 安全性脚本：
sudo mysql_secure_installation
## 报错：Error: Access denied for user 'root'@'localhost' (using password: YES)
说明 MySQL 不允许使用提供的密码连接到 MySQL 服务器。这可能是由于密码不正确或者 MySQL 用户权限的问题引起的。
### 解决：1. 确认 MySQL 服务正在运行：确保 MySQL 服务已经启动。你可以使用以下命令检查 MySQL 服务的状态：
sudo systemctl status mysqld
### 2. 重置 MySQL root 密码：如果你忘记了 MySQL root 用户的密码或者无法登录，可以尝试重新设置密码。请按照以下步骤操作：
#### a. 停止 MySQL 服务：
sudo systemctl stop mysqld
#### b. 以跳过权限检查的方式启动 MySQL：
sudo mysqld_safe --skip-grant-tables --skip-networking &
## 报错： mysqld_safe: command not found： 说明 mysqld_safe 命令未在系统中找到。
在 MySQL 8.0 中，mysqld_safe 已经不再是标准的启动方式，因此你可以尝试使用 mysqld 命令来启动 MySQL 服务。
以下是使用 mysqld 命令跳过权限检查的步骤：
### 停止 MySQL 服务：
sudo systemctl stop mysqld
### 以跳过权限检查的方式启动 MySQL：
sudo mysqld --skip-grant-tables --skip-networking &
## 报错：Fatal error: Please read "Security" section of the manual to find out how to run mysqld as root!
这个错误表明你试图以 root 用户身份直接运行 mysqld，但 MySQL 8.0 不再允许直接以 root 用户身份运行 mysqld，而是通过 systemd 进行管理。
如果你想要跳过权限检查，可以通过以下步骤实现：
### 停止 MySQL 服务：
sudo systemctl stop mysqld
### 创建一个临时的 MySQL 配置文件（my.cnf）：如果文件不存在，vi 将创建一个新文件。
sudo vi /etc/my.cnf
### 添加以下内容：
[mysqld]
skip-grant-tables
skip-networking
### 以系统管理员权限启动 MySQL：
sudo systemctl start mysqld
### 以 root 用户身份登录 MySQL：
mysql -u root
### 使用以下 SQL 命令更新 root 用户的密码：
UPDATE mysql.user SET authentication_string=PASSWORD('mysql') WHERE User='root';
FLUSH PRIVILEGES;
## 报错：ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '('mysql') WHERE User='root'' at line 1
### 解决：在你提供的 SQL 语句中存在语法错误。错误提示指向的位置是 ('mysql') WHERE User='root'。这部分是无效的语法。
UPDATE mysql.user SET authentication_string=PASSWORD('mysql') WHERE User='root';
## 报错：ERROR 1064 (42000): You have an error in your SQL syntax; check the manual that corresponds to your MySQL server version for the right syntax to use near '('mysql') WHERE User='root'' at line 1
### 解决：实际上，PASSWORD() 函数在 MySQL 8.0 中已经不再使用，而是使用 ALTER USER 语句来设置密码。以下是正确的更新语句：
放宽密码策略： 如果你有管理员权限，可以考虑放宽 MySQL 的密码策略。这可以通过修改密码验证插件的配置来实现。
SET GLOBAL validate_password.policy = 0;
### 修改密码
ALTER USER 'root'@'localhost' IDENTIFIED BY 'kai@_123123';
FLUSH PRIVILEGES;

# 退出 MySQL：
exit;

# 停止 MySQL：
sudo systemctl stop mysqld

# 启动 MySQL 服务：
sudo systemctl start mysqld

# 使用以下命令登录到 MySQL 服务器：
mysql -u root -p
```

## 查看 MySQL 输出日志  
```shell
vim /var/log/mysqld.log
# or 
tail -f /var/log/mysqld.log  
```

## linux 中 mysql 密码
kai@_123123   





