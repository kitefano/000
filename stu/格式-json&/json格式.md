
# json 在线工具
解析前要确保你的数据是标准的 JSON 格式，否则会解析出错。
你可以使用我们的在线工具检测： https://www.jyshare.com/front-end/53。  


# 教程
https://www.runoob.com/json/json-syntax.html  

## JSON 语法规则 
```shell 
数据在名称/值对中
数据由逗号 , 分隔
使用斜杆 \ 来转义字符
大括号 {} 保存对象
中括号 [] 保存数组，数组可以包含多个对象

# JSON 的两种结构：
1、对象：大括号  {}  保存的对象是一个无序的名称/值对集合。一个对象以左括号 { 开始， 右括号 } 结束。每个"键"后跟一个冒号 :，名称/值对使用逗号 , 分隔。  
2、数组：中括号 []  保存的数组是值（value）的有序集合。一个数组以左中括号 [ 开始， 右中括号 ] 结束，值之间使用逗号 , 分隔。  

值（value）可以是双引号括起来的字符串（string）、数值(number)、true、false、 null、对象（object）或者数组（array），它们是可以嵌套。  


# JSON 值
JSON 值可以是：
数字（整数或浮点数）
字符串（在双引号中）
逻辑值（true 或 false）
数组（在中括号中）
对象（在大括号中）
null

# JSON 文件
JSON 文件的文件类型是 .json
JSON 文本的 MIME 类型是 application/json

```  

## JSON 对象
```shell
# 访问对象值
## 你可以使用点号 . 来访问对象的值：  
var myObj, x;
myObj = { "name":"runoob", "alexa":10000, "site":null };
x = myObj.name;

## 你也可以使用中括号（[]）来访问对象的值：
var myObj, x;
myObj = { "name":"runoob", "alexa":10000, "site":null };
x = myObj["name"];


# 嵌套 JSON 对象
## JSON 对象中可以包含另外一个 JSON 对象：
myObj = {
    "name":"runoob",
    "alexa":10000,
    "sites": {
        "site1":"www.runoob.com",
        "site2":"m.runoob.com",
        "site3":"c.runoob.com"
    }
}

## 你可以使用点号 . 或者中括号 [...] 来访问嵌套的 JSON 对象。
x = myObj.sites.site1;
// 或者
x = myObj.sites["site1"];


# 修改值
## 你可以使用点号 . 来修改 JSON 对象的值：
myObj.sites.site1 = "www.google.com";  

## 你可以使用中括号 [...] 来修改 JSON 对象的值：
myObj.sites["site1"] = "www.google.com";  

# 删除对象属性
## 我们可以使用 delete 关键字来删除 JSON 对象的属性：
delete myObj.sites.site1;  
## 你可以使用中括号 [...] 来删除 JSON 对象的属性：
delete myObj.sites["site1"]  

```


# JSON 数组
```shell
# 数组作为 JSON 对象
[ "Google", "Runoob", "Taobao" ]
JSON 数组在中括号中书写。
中括号 [] 保存的数组是值（value）的有序集合。一个数组以左中括号 [ 开始， 右中括号 ] 结束，值之间使用逗号 , 分隔。
JSON 中数组值必须是合法的 JSON 数据类型（字符串, 数字, 对象, 数组, 布尔值或 null）。
JavaScript 中，数组值可以是以上的 JSON 数据类型，也可以是 JavaScript 的表达式，包括函数，日期，及 undefined。


# JSON 对象中的数组
## 对象属性的值可以是一个数组：
{
"name":"网站",
"num":3,
"sites":[ "Google", "Runoob", "Taobao" ]
}
## 我们可以使用索引值来访问数组：
x = myObj.sites[0];



# 循环数组 
## 你可以使用 for-in 来访问数组：
for (i in myObj.sites) {
    x += myObj.sites[i] + "<br>";
}

## 你也可以使用 for 循环：
for (i = 0; i < myObj.sites.length; i++) {
    x += myObj.sites[i] + "<br>";
}



# 嵌套 JSON 对象中的数组
## JSON 对象中数组可以包含另外一个数组，或者另外一个 JSON 对象：
myObj = {
    "name":"网站",
    "num":3,
    "sites": [
        { "name":"Google", "info":[ "Android", "Google 搜索", "Google 翻译" ] },
        { "name":"Runoob", "info":[ "菜鸟教程", "菜鸟工具", "菜鸟微信" ] },
        { "name":"Taobao", "info":[ "淘宝", "网购" ] }
    ]
}
## 我们可以使用 for-in 来循环访问每个数组：
for (i in myObj.sites) {
    x += "<h1>" + myObj.sites[i].name + "</h1>";
    for (j in myObj.sites[i].info) {
        x += myObj.sites[i].info[j] + "<br>";
    }
}



# 修改数组值
你可以使用索引值来修改数组值：
myObj.sites[1] = "Github";



# 删除数组元素
我们可以使用 delete 关键字来删除数组元素：
delete myObj.sites[1];


```


# JSON.parse()
```sh
JSON 通常用于与服务端交换数据。

在接收服务器数据时一般是字符串。

我们可以使用 JSON.parse() 方法将数据转换为 JavaScript 对象。

# 语法
JSON.parse(text[, reviver])
参数说明：
text:必需， 一个有效的 JSON 字符串。
reviver: 可选，一个转换结果的函数， 将为对象的每个成员调用此函数。

# JSON 解析实例
## 例如我们从服务器接收了以下数据：
{ "name":"runoob", "alexa":10000, "site":"www.runoob.com" }
## 我们使用 JSON.parse() 方法处理以上数据，将其转换为 JavaScript 对象：
var obj = JSON.parse('{ "name":"runoob", "alexa":10000, "site":"www.runoob.com" }');

解析前要确保你的数据是标准的 JSON 格式，否则会解析出错。
你可以使用我们的在线工具检测：https://www.jyshare.com/front-end/53。

## 解析完成后，我们就可以在网页上使用 JSON 数据了：
<p id="demo"></p> 
<script>
var obj = JSON.parse('{ "name":"runoob", "alexa":10000, "site":"www.runoob.com" }');
document.getElementById("demo").innerHTML = obj.name + "：" + obj.site;
</script>
```




