# navicat连接Linux中的mysql。
## csdn

## 如果使用的是阿里云的服务器则需要配置安全组：
自定义 TCP	目的:3306/3306  源:0.0.0.0/0

## centos中MySQL 服务器配置允许远程连接

要在 CentOS 中配置 MySQL 服务器以允许远程连接，您可以按照以下步骤操作：

1. **编辑 MySQL 配置文件**：使用您喜欢的文本编辑器（如 `vi` 或 `nano`）编辑 MySQL 的配置文件。默认情况下，MySQL 的配置文件通常位于 `/etc/my.cnf` 或 `/etc/mysql/my.cnf`。

```bash
sudo nano /etc/my.cnf
```

2. **找到 `bind-address` 参数**：在配置文件中找到 `bind-address` 参数。该参数用于指定 MySQL 服务器绑定的 IP 地址。默认情况下，MySQL 只会监听本地连接，因此 `bind-address` 的值通常是 `127.0.0.1`。如果您希望 MySQL 监听所有可用的 IP 地址以允许远程连接，则可以将其设置为 `0.0.0.0`。如果您希望 MySQL 只监听特定的 IP 地址，则将其设置为相应的 IP 地址。

```bash
bind-address = 0.0.0.0
```

3. **保存并关闭文件**：完成后，保存并关闭文件。

4. **重启 MySQL 服务器**：在对配置文件进行更改后，需要重启 MySQL 服务器以使更改生效。

```bash
sudo systemctl restart mysqld
```

5. **配置防火墙**：如果您的 CentOS 服务器上启用了防火墙，确保允许 MySQL 服务器使用的端口（默认为 3306 端口）通过防火墙。

```bash
sudo firewall-cmd --zone=public --add-port=3306/tcp --permanent
sudo firewall-cmd --reload
```

6. **配置 MySQL 用户的远程访问权限**：确保您要远程连接的 MySQL 用户具有允许从远程主机访问的权限。您可以使用 MySQL 的 `GRANT` 命令为用户分配适当的权限。

```sql
GRANT ALL PRIVILEGES ON *.* TO 'user001'@'%' IDENTIFIED BY 'Kkl@_123123' WITH GRANT OPTION;
FLUSH PRIVILEGES;
```
在上述命令中，将 `'用户名'` 替换为您要允许远程访问的 MySQL 用户的用户名，将 `'密码'` 替换为该用户的密码。  
默认情况下root是localhost，我们可以改：   
```shell
# 查询语句来显示所有的用户
use mysql;
select user,host from user;
+------------------+-----------+
| user             | host      |
+------------------+-----------+
| user001          | %         |
| mysql.infoschema | localhost |
| mysql.session    | localhost |
| mysql.sys        | localhost |
| root             | localhost |
+------------------+-----------+
# 修改root 的host值，将host设置为%表示任何ip都能连接mysql
update user set host='%' where user='root' and host='localhost';
select user,host from user;
+------------------+-----------+
| user             | host      |
+------------------+-----------+
| root             | %         |
| user001          | %         |
| mysql.infoschema | localhost |
| mysql.session    | localhost |
| mysql.sys        | localhost |
+------------------+-----------+
``` 

ps: 前提是已经创建一个一个MySQL用户 user001, 没有创建可以参考我另一篇文章[centos中mysql怎么添加新用户](https://blog.csdn.net/weixin_45497541/article/details/136305381?spm=1001.2014.3001.5501)  

完成上述步骤后，您的 MySQL 服务器应该已经配置为允许远程连接。您可以使用 Navicat 或其他 MySQL 客户端连接到 MySQL 服务器。请确保设置了强密码并采取其他安全措施以保护您的 MySQL 数据库。  


## navicat 连接Linux中的mysql


