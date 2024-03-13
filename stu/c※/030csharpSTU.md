

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



# csharp的入参和出参  
ref 和 out   

# csharp 中 分割c 字符串
c字符串以单个'\0'结束，以双'\0'表示列表的结束。  
```c#
private static string[] GetDeviceNames(IntPtr szNameList)
{
    int index = 0;
    string deviceName = "";
    string[] returnString = new string[5];
    int stringIndex = 0;
    while (true)
    {
        byte currentByte = Marshal.ReadByte(szNameList, index);
        if (currentByte == 0)
        {
            // 到达设备名称的结尾
            returnString[stringIndex++] = deviceName;
            deviceName = ""; // 清空设备名称
            index++; // 跳过 '\0'
            if (Marshal.ReadByte(szNameList, index) == 0)
            {
                // 如果下一个字节也是 '\0'，表示设备名称列表结束
                break;
            }
        }
        else
        {
            // 继续构建设备名称
            deviceName += (char)currentByte;
            index++;
        }
    }
    return returnString;
}
```