

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


# csharp 中调用js中代码：
```c#
private void Button_Click_5(object sender, RoutedEventArgs e)
{
    string path = AppDomain.CurrentDomain.BaseDirectory + "test.js";
    string str2 = File.ReadAllText(path);
    string fun = string.Format(@"seHello('{0}')", "world");
    string result = ExecuteScript(fun, str2);
}
private string ExecuteScript(string sExpression, string sCode)
{
    MSScriptControl.ScriptControl scriptControl = new MSScriptControl.ScriptControl();
    scriptControl.UseSafeSubset = true;
    scriptControl.Language = "JScript";
    scriptControl.AddCode(sCode);
    try
    {
        string str = scriptControl.Eval(sExpression).ToString();
        return str;
    }
    catch (Exception ex)
    {
        string str = ex.Message;
    }
    return null;
}
```
```js
// test.js  
function sayHello(str) {
    return "Hello," + str;
}
```


# csharp 中获取html 中js 代码的变量值和函数返回值
```html
<html>
<head>
    <title>mToken Plugin Examples</title>
    <link rel="stylesheet" type="text/css" href="css/animate.min.css" />
    <link rel="stylesheet" type="text/css" href="css/syalert.min.css" />
</head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<body>
    <script>
        function sayHello() {
            return "hello1111";
        }
        
    </script>
</body>
</html>
```
```c#
private void Button_Click_5(object sender, RoutedEventArgs e)
{
    // 获取当前应用程序的执行目录
    string currentDirectory = Directory.GetCurrentDirectory();
    // 构建相对路径
    string relativePath = System.IO.Path.Combine(currentDirectory, "Sample", "content", "mTokenOperateCer111.html");
    // 将相对路径转换为文件 URI
    Uri htmlUri = new Uri(relativePath);
    // 加载 HTML 文件
    webBrowser1.Navigate(htmlUri);
    // 调用 JavaScript 函数
    // string result = (string)webBrowser1.InvokeScript("sayHello");
    string script = "sayHello();"; // 调用 JavaScript 函数
    string result = (string)webBrowser1.InvokeScript("eval", script);
    string resul1t = (string)webBrowser1.InvokeScript("eval", "he111");
}
```



# json序列号和反序列化
1. 添加程序集合： System.Web.Extensions.dll
2. 命名空间引用： using System.Web.Script.Serialization;


```shell
#if true1
{
   "name":"John",
   "age":30,
   "address":    {
        "street":"123 Main St",
        "city":"New York",
        "zip":"10001" 
    },
   "contacts":[{
               "type":"email",
               "value":"john@example.com" 
            },            
            {
               "type":"phone",
               "value":"123-456-7890" 
            }
    ]
}

{
   "contacts":[{
               "type":"email",
               "value":"john@example.com" 
            },            
            {
               "type":"phone",
               "value":"123-456-7890" 
            }
    ]
}
#endif

using System;
using System.Collections.Generic;
using System.Web.Script.Serialization;

class Program
{
    static void Main()
    {
        // json 串
        string strJson = "{\"contacts\":[{\"type\":\"email\",\"value\":\"john@example.com\"},{\"type\":\"phone\",\"value\":\"123-456-7890\"}]}";

        // 反序列化 JSON 字符串为动态对象
        JavaScriptSerializer serializer = new JavaScriptSerializer();
        dynamic jsonObj = serializer.Deserialize<dynamic>(strJson);

        // 检查是否包含 contacts 属性
        if (jsonObj.ContainsKey("contacts"))
        {
            // 获取 contacts 属性值
            var contacts = jsonObj["contacts"];
            List<Dictionary<string, object>> lstDic = new List<Dictionary<string, object>>();
            // 遍历 contacts 并输出值
            foreach (var contact in contacts)
            {
                lstDic.Add(contact);
                string str111 = ((Dictionary<string, object>)lstDic[0])["type"].ToString();
                Console.WriteLine("Type: {0}, Value: {1}", contact["type"], contact["value"]);
            }
            foreach(var contact in lstDic)
            {
                string str111 = contact["type"].ToString();
                string str222 = contact["value"].ToString();
            }

            string str112 = ((Dictionary<string, object>)lstDic[0])["type"].ToString();
        }
        else
        {
            Console.WriteLine("JSON data does not contain 'contacts' property.");
        }

    }
}

```


# 网络通信 post请求
```shell
# System.Net.Http 4.0.0 包是针对 .NET Framework 4.0 及更高版本的
public string ReqstData(string requestData, string strUrl)
{
    // 构建请求数据
    //requestData = $"{{\"dev\":\"{1}\"}}";
    // 设置请求的 URL
    //strUrl = "http://" + 1 + "/biz/change/changeQuery";
    // 构建 HTTP 请求对象
    HttpClient httpClient = new HttpClient();
    // 发送 POST 请求
    string responseBody = "";
    HttpResponseMessage response;
    try
    {
        response = httpClient.PostAsync(strUrl, new StringContent(requestData, System.Text.Encoding.UTF8, "application/json")).Result;
        // 检查响应是否成功
        if (response.IsSuccessStatusCode)
        {
            // 读取响应内容
            responseBody = response.Content.ReadAsStringAsync().Result;
            return responseBody;
        }
        else
        {
            return "ERR: 查询证书申请变更状态 失败。";
        }
    }
    catch (Exception ex)
    {
        MessageBox.Show($"ERR: {ex.Message}");
        return "发送 POST 请求 异常。";
    }
    return "";
}

#  .NET Framework 3.5  使用 .NET Framework 3.5 内置的 HttpWebRequest 类来进行 HTTP 请求。 
public string ReqstData(string requestData, string strUrl)
{
    // 创建 HTTP 请求对象
    HttpWebRequest request = (HttpWebRequest)WebRequest.Create(strUrl);
    request.Method = "POST";
    request.ContentType = "application/json";

    try
    {
        // 将请求数据写入请求流
        using (var streamWriter = new StreamWriter(request.GetRequestStream()))
        {
            streamWriter.Write(requestData);
            streamWriter.Flush();
        }

        // 获取响应
        using (HttpWebResponse response = (HttpWebResponse)request.GetResponse())
        using (Stream responseStream = response.GetResponseStream())
        using (StreamReader reader = new StreamReader(responseStream))
        {
            if (response.StatusCode == HttpStatusCode.OK)
            {
                // 读取响应内容
                string responseBody = reader.ReadToEnd();
                return responseBody;
            }
            else
            {
                return "ERR: 查询证书申请变更状态 失败。";
            }
        }
    }
    catch (Exception ex)
    {
        MessageBox.Show($"ERR: {ex.Message}");
        return "发送 POST 请求 异常。";
    }
}


```









# END