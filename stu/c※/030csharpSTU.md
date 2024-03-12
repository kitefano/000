

# csharp 和MySQL 交互
## 从MySQL中取数据  
```c#
// 需要 从nuget中安装 MySql.Data
using MySql.Data.MySqlClient;

string connectionString = "server=rm-cn-jia3moj7900052vo.rwlb.rds.aliyuncs.com;user=user001;password=kai_123123;database=schools";

using (var connection = new MySqlConnection(connectionString))
{
        connection.Open();
        string query = "SELECT * FROM dept";
        using (var command = new MySqlCommand(query, connection))
        {
            using (var reader = command.ExecuteReader())
            {
                mysqltextBox3.Text = "";
                while (reader.Read())
                {
                    mysqltextBox3.Text += "devID: " + reader["devID"] + ", devNum: " + reader["devNum"];
                }
            }
        }
}
```

# Nuget下载 MySql.Data 连接MySql数据库 问题 总结  
https://www.cnblogs.com/li150dan/p/10101187.html  



# dotnet 官方文档
https://learn.microsoft.com/zh-cn/dotnet/  

## .net入门：  
https://learn.microsoft.com/zh-cn/dotnet/core/get-started    
### vscode 中命令行创建运行 .net 项目：  
```shell
首先，在计算机上下载并安装 .NET SDK。
然后，打开某一终端，如 PowerShell、命令提示符或 Bash 。
键入以下命令：
dotnet new console -o sample1
cd sample1
dotnet run

应会看到以下输出：
Hello World!

```

dotnet 和csharp 区别和联系：  
```shell
C#是一种编译语言，不是脚本语言。  
.NET 是 开发平台
,NET有三个版本：.NET Framework，.NET Core和Xamarin。这些实现组合称为.NET开发平台。它们中的每一个都包含用于构建各种应用程序和库。
```

### vs中创建.net项目  


# csharp 官方文档
https://learn.microsoft.com/zh-cn/dotnet/csharp/tour-of-csharp/  
