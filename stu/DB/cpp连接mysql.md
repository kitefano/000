# 代码中和数据库交互  

# MySQL C API
## 配置
在VS2010的附加包含目录中添加\MySQL\MySQL Server 5.1\include。在安装MySql的目录下找。 把libmysql.dll和libmysql.lib文件拷贝到所建的工程目录下。

## 连接 mysql  
然后在头文件里包含以下内容：  
```c++
// 头文件
#include "mysql.h" 
#pragma comment(lib,"libmysql.lib") 
int main()
{
    // 定义数据源指针
    MYSQL m_sqlCon;
    mysql_init(&m_sqlCon);
    // localhost:服务器 root为账号密码 test为数据库名 3306为端口  
    if (!mysql_real_connect(&m_sqlCon, "localhost", "root", "kai@_123123", "mysql", 3306, NULL, 0))    {
        printf("ERR: mysql_real_connect\n");
        return FALSE;
    }else{
        printf("OK: mysql_real_connect\n");
    }
    mysql_close(&m_sqlCon);
}
```

## 执行 mysql 语句
```c++
// 创建表
    const char* pQuery = "create table if not exists DS_Building( ID VARCHAR(10),Name VARCHAR(255),Descs VARCHAR(255),PRIMARY KEY (ID))";
    if (mysql_real_query(&m_sqlCon, pQuery, (UINT)strlen(pQuery)) != 0)    {
        const char* pCh = mysql_error(&m_sqlCon);
        console->error(pCh);
        return FALSE;
    }
    else {
        console->info("OK: mysql_real_query");

    }

// 插入数据
    const char* pq111 = "INSERT INTO DS_Building (ID, Name, Descs) VALUES \
        ('001', 'Building A', 'Description A'), \
        ('002', 'Building B', 'Description B')";
    if (mysql_real_query(&m_sqlCon, pq111, (UINT)strlen(pq111)) != 0) {
        const char* pCh = mysql_error(&m_sqlCon);
        console->error(pCh);
        return FALSE;
    }
    else {
        console->info("OK: INSERT");
    }

// select 数据
    const char* pq112 = "SELECT ID, Name, Descs FROM DS_Building";
    if (mysql_real_query(&m_sqlCon, pq112, (UINT)strlen(pq112)) != 0) {
        const char* pCh = mysql_error(&m_sqlCon);
        console->error(pCh);
        return FALSE;
    }
    else {
        console->info("OK: mysql_real_query");
    }
```

## 打印 select 出来的结果：
```c++
    const char* pq112 = "SELECT ID, Name, Descs FROM DS_Building";
    if (mysql_real_query(&m_sqlCon, pq112, (UINT)strlen(pq112)) != 0) {
        const char* pCh = mysql_error(&m_sqlCon);
        console->error(pCh);
        return FALSE;
    }
    else {
        console->info("OK: mysql_real_query");
        MYSQL_RES* result_set = mysql_store_result(&m_sqlCon);
        if (result_set) {
            // 获取列数
            int num_fields = mysql_num_fields(result_set);
            // 逐行获取数据
            MYSQL_ROW row;
            while ((row = mysql_fetch_row(result_set))) {
                for (int i = 0; i < num_fields; i++) {
                    printf("%s ", row[i] ? row[i] : "NULL");
                }
                printf("\n");
            }
            // 释放结果集
            mysql_free_result(result_set);
        }
        else {
            // 处理获取结果集失败的情况
            fprintf(stderr, "Failed to store result set: %s\n", mysql_error(&m_sqlCon));
        }
    }
```

## MySQL的API接口：
```c++
mysql_affected_rows() 返回被最新的UPDATE, DELETE或INSERT查询影响的行数。  
mysql_close() 关闭一个服务器连接。  
mysql_connect() 连接一个MySQL服务器。该函数不推荐；使用mysql_real_connect()代替。  
mysql_change_user() 改变在一个打开的连接上的用户和数据库。  
mysql_create_db() 创建一个数据库。该函数不推荐；而使用SQL命令CREATE DATABASE。  
mysql_data_seek() 在一个查询结果集合中搜寻一任意行。  
mysql_debug() 用给定字符串做一个DBUG_PUSH。  
mysql_drop_db() 抛弃一个数据库。该函数不推荐；而使用SQL命令DROP DATABASE。  
mysql_dump_debug_info() 让服务器将调试信息写入日志文件。  
mysql_eof() 确定是否已经读到一个结果集合的最后一行。这功能被反对; mysql_errno()或mysql_error()可以相反被使用。  
mysql_errno() 返回最近被调用的MySQL函数的出错编号。  
mysql_error() 返回最近被调用的MySQL函数的出错消息。  
mysql_escape_string() 用在SQL语句中的字符串的转义特殊字符。  
mysql_fetch_field() 返回下一个表字段的类型。  
mysql_fetch_field_direct () 返回一个表字段的类型，给出一个字段编号。  
mysql_fetch_fields() 返回一个所有字段结构的数组。  
mysql_fetch_lengths() 返回当前行中所有列的长度。  
mysql_fetch_row() 从结果集合中取得下一行。  
mysql_field_seek() 把列光标放在一个指定的列上。  
mysql_field_count() 返回最近查询的结果列的数量。  
mysql_field_tell() 返回用于最后一个mysql_fetch_field()的字段光标的位置。  
mysql_free_result() 释放一个结果集合使用的内存。  
mysql_get_client_info() 返回客户版本信息。  
mysql_get_host_info() 返回一个描述连接的字符串。  
mysql_get_proto_info() 返回连接使用的协议版本。  
mysql_get_server_info() 返回服务器版本号。  
mysql_info() 返回关于最近执行得查询的信息。  
mysql_init() 获得或初始化一个MYSQL结构。  
mysql_insert_id() 返回有前一个查询为一个AUTO_INCREMENT列生成的ID。  
mysql_kill() 杀死一个给定的线程。  
mysql_list_dbs() 返回匹配一个简单的正则表达式的数据库名。  
mysql_list_fields() 返回匹配一个简单的正则表达式的列名。  
mysql_list_processes() 返回当前服务器线程的一张表。  
mysql_list_tables() 返回匹配一个简单的正则表达式的表名。  
mysql_num_fields() 返回一个结果集合重的列的数量。  
mysql_num_rows() 返回一个结果集合中的行的数量。  
mysql_options() 设置对mysql_connect()的连接选项。  
mysql_ping() 检查对服务器的连接是否正在工作，必要时重新连接。  
mysql_query() 执行指定为一个空结尾的字符串的SQL查询。  
mysql_real_connect() 连接一个MySQL服务器。  
mysql_real_query() 执行指定为带计数的字符串的SQL查询。  
mysql_reload() 告诉服务器重装授权表。  
mysql_row_seek() 搜索在结果集合中的行，使用从mysql_row_tell()返回的值。  
mysql_row_tell() 返回行光标位置。  
mysql_select_db() 连接一个数据库。  
mysql_shutdown() 关掉数据库服务器。  
mysql_stat() 返回作为字符串的服务器状态。  
mysql_store_result() 检索一个完整的结果集合给客户。  
mysql_thread_id() 返回当前线程的ID。  
mysql_use_result() 初始化一个一行一行地结果集合的检索。 
```

# MySQL C API 和 MySQL Connector/C++ 异同
MySQL Connector/C++ 是 MySQL 官方提供的 C++ 接口库，允许开发人员使用 C++ 语言与 MySQL 数据库进行交互。它提供了面向对象的接口，使得与 MySQL 数据库的交互更加方便。而 MySQL 原生的 C API 是基于 C 语言的低级别接口，允许开发人员直接使用 C 语言与 MySQL 数据库进行交互。两者的主要区别在于面向对象的封装程度和使用方式。MySQL Connector/C++ 更适合于 C++ 开发者，而 MySQL 原生的 C API 更适合于需要更底层控制的开发者。    

选择使用的考虑因素：
项目需求： 如果你在进行 C++ 编程，特别是使用了现代 C++ 特性，那么 MySQL Connector/C++ 提供的面向对象的接口可能更符合你的编码风格。  
项目历史： 一些旧的项目可能会使用 MySQL C API，因为它是较早引入的，并且在许多 C 项目中被广泛使用。  
性能需求： 在一些性能敏感的场景，可能会有人选择 MySQL C API，因为它的底层调用方式更为直接，减少了一些对象封装的开销。  

# MySQL Connector/C++













