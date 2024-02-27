# mysql中怎么添加新用户

## csdn
https://blog.csdn.net/weixin_45497541/article/details/136305381?spm=1001.2014.3001.5501  

要在 MySQL 中添加新用户，您可以使用 MySQL 的 `CREATE USER` 命令。下面是添加新用户的基本步骤：

1. **使用管理员权限登录 MySQL**：首先，使用具有管理员权限的 MySQL 用户（如 `root` 用户）登录到 MySQL 服务器。

```bash
mysql -u root -p
```

系统会提示您输入密码。输入正确的密码后，您将登录到 MySQL 控制台。

2. **创建新用户**：使用 `CREATE USER` 命令创建新用户。下面是一个示例，创建一个名为 `newuser` 的用户，密码为 `password`：

```sql
CREATE USER 'newuser'@'localhost' IDENTIFIED BY 'password';
```

在上面的示例中，`'newuser'` 是新用户的用户名，`'localhost'` 指定了该用户只能从本地主机连接到 MySQL 服务器。如果您希望允许用户从任何主机连接到 MySQL 服务器，可以使用 `'%'` 代替 `'localhost'`。`'password'` 是用户的密码。  
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

此时有报错（没有报错可以跳过这一步）：  
```shell
mysql> CREATE USER 'user001'@'localhost' IDENTIFIED BY 'kai@_123123';
ERROR 1290 (HY000): The MySQL server is running with the --skip-grant-tables option so it cannot execute this statement

## 报错原因：这通常发生在管理员尝试修复 MySQL 数据库时，因为忘记了关闭 --skip-grant-tables 选项而导致 MySQL 服务器以不安全的方式启动。--skip-grant-tables 选项会跳过权限验证，允许任何人以任何身份连接到 MySQL 服务器并执行任意操作。  
```
解决方案(执行flush privileges;）：  
```shell
# 解决方案：  
mysql> flush privileges;
Query OK, 0 rows affected (0.03 sec)
```
报错：密码太简单。解决设置一个复杂点的密码(大小写，数字，特殊符号)。
```shell
mysql> CREATE USER 'user001'@'%' IDENTIFIED BY '123456';
ERROR 1819 (HY000): Your password does not satisfy the current policy requirements
解决：
mysql> CREATE USER 'user001'@'%' IDENTIFIED BY 'QWer@_987456';
Query OK, 0 rows affected (0.01 sec)
```

3. **授予用户权限**：创建用户后，您可能需要授予用户适当的权限。您可以使用 `GRANT` 命令授予用户所需的权限。例如，授予用户对所有数据库的所有表的所有权限：
```sql
mysql> GRANT ALL PRIVILEGES ON *.* TO 'user001'@'%' WITH GRANT OPTION;
Query OK, 0 rows affected (0.01 sec)
```

如果要限制用户的权限，可以根据需要选择特定的数据库和表，并授予相应的权限。

4. **刷新权限**：在对用户授予或更改权限后，必须刷新 MySQL 的权限缓存，以使更改生效：

```sql
mysql> FLUSH PRIVILEGES;
Query OK, 0 rows affected (0.00 sec)
```

5. **退出 MySQL 控制台**：完成所有操作后，您可以输入以下命令退出 MySQL 控制台：

```sql
quit;
```

现在，您已经成功地在 MySQL 中添加了新用户，并且已经授予了适当的权限。用户现在可以使用他们的凭据连接到 MySQL 服务器，并根据授予的权限执行相应的操作。
