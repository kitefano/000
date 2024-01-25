#include <iostream>



int main()
{
    std::cout << "Hello, World!" << std::endl;

    return 0;
}







#if 0
#include <mysql/mysql.h>

MYSQL mysql;

// 初始化连接
mysql_init(&mysql);

// 连接到 MySQL 服务器
if (mysql_real_connect(&mysql, "localhost", "user", "password", "database", 0, NULL, 0)) {
    // 执行 SQL 查询
    int result = mysql_real_query(&mysql, "SELECT * FROM your_table", strlen("SELECT * FROM your_table"));

    if (result == 0) {
        // 查询执行成功
        // 处理结果集等操作

        // 获取结果集
        MYSQL_RES *result_set = mysql_store_result(&mysql);

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
        } else {
            // 处理获取结果集失败的情况
            fprintf(stderr, "Failed to store result set: %s\n", mysql_error(&mysql));
        }
    } else {
        // 查询执行失败
        fprintf(stderr, "Query failed: %s\n", mysql_error(&mysql));
    }

    // 关闭连接
    mysql_close(&mysql);
} else {
    // 连接失败
    fprintf(stderr, "Connection failed: %s\n", mysql_error(&mysql));
}

#endif 