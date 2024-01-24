# mysql免安装安装部署使用  
参考文档(https://blog.csdn.net/salted___fish/article/details/106356078)  

## 下载  
打开 MySQL 官网，找到 Community 版的下载。选择 Community 是因为该版本免费而且是通常使用的版本。  
MySQL 的官网是：https://www.mysql.com/  
DOWNLOADS --> MySQL Community (GPL) Downloads --> MySQL Community Server --> Windows (x86, 64-bit), ZIP Archive --> 下载。  
MySQL 下载处的最终网址：https://dev.mysql.com/downloads/mysql/  

将下载好的 mysql-8.0.27-winx64.zip 解压缩，得到 MySQL 安装目录。安装目录应该是一种含文件夹 bin 的目录。在笔者的 Windows，各路径如下：  
MySQL 安装目录：D:\mysql-8.0.27-winx64  
MySQL 命令目录：D:\mysql-8.0.27-winx64\bin  
MySQL 数据库数据存放目录：D:\mysql-8.0.27-winx64\data  
MySQL 端口号：3306  

## 配置mysql  
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
初始化后会生成初始化密码。  

安装MySQL服务：  
mysqld --install  
出现Service successfully installed代表安装成功了！测试一下：  
	net start mysql  # 启动mysql的服务  
	net stop mysql   # 关闭mysql服务  

mysql密码：  
A temporary password is generated for root@localhost: Ph0h!mT1BfmC  

修改密码：  
net start mysql  
mysql -u root -p刚才复制的密码   
ALTER USER 'root'@'localhost' IDENTIFIED BY '新密码';  
exit;  

配置环境变量：  
在path中添加bin目录： S:\mysql-8.2.0-winx64\bin  

lxk-新密码：  
root@_123123  
