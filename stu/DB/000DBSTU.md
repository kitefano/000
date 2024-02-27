# mysqlStu  
mysql教程(https://www.sjkjc.com/mysql/install-on-centos/)  

# 菜鸟教程
# mysql 管理  

## 数据库角色介绍
在数据库管理中，不同的角色扮演不同的职责和权限。以下是一些常见的数据库角色及其功能：

1. **普通用户**：普通用户是数据库中的一般用户，通常用于执行基本的数据库操作，如查询、插入、更新和删除数据。普通用户通常只具有访问其自己创建的对象（如表、视图）的权限，并且不具备管理数据库结构或其他用户权限的能力。

2. **DBA（数据库管理员）**：数据库管理员是负责管理整个数据库系统的专业人员。DBA负责数据库的安装、配置、备份和恢复、性能优化、安全管理等任务。他们通常具有最高级别的权限，可以执行任何数据库操作。

3. **管理员**：管理员是负责管理特定数据库的用户，但他们的权限通常比DBA有限。管理员通常可以创建和删除用户、分配权限、监视数据库性能等，但不能执行系统级别的管理任务。

4. **安全管理员**：安全管理员负责数据库的安全性，包括访问控制、身份验证、加密等方面。他们负责确保数据库中的数据不被未经授权的用户访问，并协助制定安全策略和实施安全措施。

5. **结构只读用户**：结构只读用户具有对数据库结构（如表、视图、存储过程等）的只读访问权限，他们可以查看数据库中的对象结构，但不能对其进行修改。这种角色通常用于向用户提供只读访问权限，而不允许他们修改数据库结构。

这些角色在数据库管理中扮演不同的角色，有助于分配适当的权限和管理数据库系统的安全性和性能。  


## 启动和停止 MySQL 服务器
```shell
net start mysql
net stop mysql
```

## 登录 MySQL 数据库  
```shell
mysql -u root -p密码
```
## 用户设置  
如果你需要添加 MySQL 用户，你只需要在 mysql 数据库中的 user 表添加新用户即可。  
以下为添加用户的实例，用户名为guest，密码为guest123，并授权用户可进行 SELECT, INSERT 和 UPDATE操作权限：  
```shell
# 登录  
mysql -u root -pkai@_123123
# 进入 user 表  
use mysql;

# 添加 user 用户，并设置用户名 guest， 用户密码 guest123， 并授权SELECT, INSERT 和 UPDATE操作权限。
INSERT INTO user(host, user, password, select_priv, insert_priv, update_priv)VALUES('localhost', 'guest', PASSWORD('guest123'), 'Y', 'Y', 'Y');  
# 使用 INSERT INTO user 语句，你可能需要检查密码加密的具体方法，因为不同的 MySQL 版本可能有不同的实现，可以使用下面两句代替：
CREATE USER 'guest'@'localhost' IDENTIFIED BY 'guest123';
GRANT SELECT, INSERT, UPDATE ON *.* TO 'guest'@'localhost';

# 刷新权限
FLUSH PRIVILEGES;

# 查看
SELECT * FROM user WHERE user = 'guest';
```

## 用户权限列表如下
```shell
Select_priv
Insert_priv
Update_priv
Delete_priv
Create_priv
Drop_priv
Reload_priv
Shutdown_priv
Process_priv
File_priv
Grant_priv
References_priv
Index_priv
Alter_priv
```

## /etc/my.cnf 文件配置
在配置文件中，你可以指定不同的错误日志文件存放的目录，一般你不需要改动这些配置。  
一般情况下，你不需要修改该配置文件，该文件默认配置如下：  
```shell
[mysqld]
datadir=/var/lib/mysql
socket=/var/lib/mysql/mysql.sock

[mysql.server]
user=mysql
basedir=/var/lib

[safe_mysqld]
err-log=/var/log/mysqld.log
pid-file=/var/run/mysqld/mysqld.pid

```


## 管理MySQL的命令
USE 数据库名 :  
选择要操作的Mysql数据库，使用该命令后所有Mysql命令都只针对该数据库。  

SHOW DATABASES:  
列出 MySQL 数据库管理系统的数据库列表。  

SHOW TABLES:  
显示指定数据库的所有表，使用该命令前需要使用 use 命令来选择要操作的数据库。  

SHOW COLUMNS FROM 数据表:  
显示数据表的属性，属性类型，主键信息 ，是否为 NULL，默认值等其他信息。  

SHOW INDEX FROM 数据表:  
显示数据表的详细索引信息，包括PRIMARY KEY（主键）。  










