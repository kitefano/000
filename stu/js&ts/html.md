

# 教程
https://www.runoob.com/html/html-tutorial.html  

## HTML 实例
在 HTML 手册中包含了数百个在线实例，您可以在线编辑并查看运行结果。
https://www.runoob.com/html/html-examples.html  

## HTML 参考手册
在菜鸟教程中，我们提供了完整的 HTML 参考手册，其中包括标签、属性、颜色、实体等等。
https://www.runoob.com/tags/html-reference.html  


## HTML/CSS/JS 在线工具
HTML/CSS/JS 在线工具可以在线编辑 HTML、CSS、JS 代码，并实时查看效果，你也可以将优质代码保存分享：  https://www.jyshare.com/front-end/61  


# HTML 简介

```shell
# 编码
对于中文网页需要使用 <meta charset="utf-8"> 声明编码，否则会出现乱码。
有些浏览器(如 360 浏览器)会设置 GBK 为默认编码，则你需要设置为 <meta charset="gbk">。

# hello html
<!DOCTYPE html> 
<html>
<head>
<meta charset="utf-8">
<title>菜鸟教程(runoob.com)</title>
</head>
<body>
    <h1>Hello, HTML!</h1>
    <h1>我的第一个标题</h1>
    <p>我的第一个段落。</p>
</body>
</html>
## 解析：
<!DOCTYPE html> 声明为 HTML5 文档
<html> 元素是 HTML 页面的根元素
<head> 元素包含了文档的元（meta）数据，如 <meta charset="utf-8"> 定义网页编码格式为 utf-8。
<title> 元素描述了文档的标题
<body> 元素包含了可见的页面内容
<h1> 元素定义一个大标题
<p> 元素定义一个段落
<meta> 元素元数据。  

# HTML文档的后缀名  
.html
.htm  

以上两种后缀名没有区别，都可以使用。

# 什么是 HTML?
HTML 是用来描述网页的一种语言。

HTML 指的是超文本标记语言: HyperText Markup Language
HTML 不是一种编程语言，而是一种标记语言
标记语言是一套标记标签 (markup tag)
HTML 使用标记标签来描述网页
HTML 文档包含了HTML 标签及文本内容
HTML文档也叫做 web 页面



# HTML 标签
HTML 标记标签通常被称为 HTML 标签 (HTML tag)。

HTML 标签是由尖括号包围的关键词，比如 <html>
HTML 标签通常是成对出现的，比如 <b> 和 </b>
标签对中的第一个标签是开始标签，第二个标签是结束标签
开始和结束标签也被称为开放标签和闭合标签


# <!DOCTYPE> 声明
<!DOCTYPE>声明有助于浏览器中正确显示网页。
网络上有很多不同的文件，如果能够正确声明HTML的版本，浏览器就能正确显示网页内容。
## 对于不同版本的html 有不同的声明方式， 详见：
https://www.runoob.com/tags/tag-doctype.html  

```


# html 基础  
```shell
# HTML 标题
HTML 标题（Heading）是通过<h1> - <h6> 标签来定义的。
<h1>这是一个标题</h1>
<h2>这是一个标题</h2>
<h3>这是一个标题</h3>  


# HTML 段落
HTML 段落是通过标签 <p> 来定义的。
<p>这是一个段落。</p>
<p>这是另外一个段落。</p>

# HTML 链接
HTML 链接是通过标签 <a> 来定义的。
<a href="https://www.runoob.com">这是一个链接</a>

提示:在 href 属性中指定链接的地址。  
(您将在本教程稍后的章节中学习更多有关属性的知识)。


# HTML 图像
HTML 图像是通过标签 <img> 来定义的.  
<img src="/images/logo.png" width="258" height="39" />
注意： 图像的名称和尺寸是以属性的形式提供的。

```

# HTML 元素  
```shell
HTML 文档由 HTML 元素定义。  

# HTML 元素  
<p>这是一个段落。</p>
开始标签 <p>
元素内容 这是一个段落。
结束标签 </p>

备注： *开始标签常被称为起始标签（opening tag），结束标签常称为闭合标签（closing tag）。

# HTML 元素语法  
HTML 元素以开始标签起始
HTML 元素以结束标签终止
元素的内容是开始标签与结束标签之间的内容
某些 HTML 元素具有空内容（empty content）  
空元素在开始标签中进行关闭（以开始标签的结束而结束）
大多数 HTML 元素可拥有属性


# 嵌套的 HTML 元素  
大多数 HTML 元素可以嵌套（HTML 元素可以包含其他 HTML 元素）。

HTML 文档由相互嵌套的 HTML 元素构成。  


# 不要忘记结束标签
即使您忘记了使用结束标签，大多数浏览器也会正确地显示 HTML：

<p>这是一个段落
<p>这是一个段落
以上实例在浏览器中也能正常显示，因为关闭标签是可选的。

但不要依赖这种做法。忘记使用结束标签会产生不可预料的结果或错误。


# HTML 空元素
没有内容的 HTML 元素被称为空元素。空元素是在开始标签中关闭的。

<br> 就是没有关闭标签的空元素（<br> 标签定义换行）。

在 XHTML、XML 以及未来版本的 HTML 中，所有元素都必须被关闭。

在开始标签中添加斜杠，比如 <br />，是关闭空元素的正确方法，HTML、XHTML 和 XML 都接受这种方式。

即使 <br> 在所有浏览器中都是有效的，但使用 <br /> 其实是更长远的保障。  


# HTML 提示：使用小写标签
HTML 标签对大小写不敏感：<P> 等同于 <p>。许多网站都使用大写的 HTML 标签。

菜鸟教程使用的是小写标签，因为万维网联盟（W3C）在 HTML 4 中推荐使用小写，而在未来 (X)HTML 版本中强制使用小写。

```

# HTML 属性  

```shell
属性是 HTML 元素提供的附加信息。

# HTML 属性
HTML 元素可以设置属性
属性可以在元素中添加附加信息  
属性一般描述于开始标签  
属性总是以名称/值对的形式出现，比如：name="value"。  

# 属性实例
HTML 链接由 <a> 标签定义。链接的地址在 href 属性中指定：
<a href="http://www.runoob.com">这是一个链接</a>  


# HTML 属性常用引用属性值
属性值应该始终被包括在引号内。
双引号是最常用的，不过使用单引号也没有问题。  

提示: 在某些个别的情况下，比如属性值本身就含有双引号，那么您必须使用单引号，例如：
name='John "ShotGun" Nelson'




```

# HTML 标题
```shell
在 HTML 文档中，标题很重要。

# HTML 标题
标题（Heading）是通过 <h1> - <h6> 标签进行定义的。  
<h1> 定义最大的标题。 <h6> 定义最小的标题。  

注释: 浏览器会自动地在标题的前后添加空行。


# 标题很重要
请确保将 HTML 标题 标签只用于标题。不要仅仅是为了生成粗体或大号的文本而使用标题。  

搜索引擎使用标题为您的网页的结构和内容编制索引。  

因为用户可以通过标题来快速浏览您的网页，所以用标题来呈现文档结构是很重要的。  

应该将 h1 用作主标题（最重要的），其后是 h2（次重要的），再其次是 h3，以此类推。  


# HTML 水平线
<hr> 标签在 HTML 页面中创建水平线。
hr 元素可用于分隔内容。

<p>这是一个段落。</p>
<hr>
<p>这是一个段落。</p>
<hr>
<p>这是一个段落。</p>

# HTML 注释
可以将注释插入 HTML 代码中，这样可以提高其可读性，使代码更易被人理解。浏览器会忽略注释，也不会显示它们。

注释写法如下:
<!-- 这是一个注释 -->

注释: 开始括号之后（左边的括号）需要紧跟一个叹号 ! (英文标点符号)，合理地使用注释可以对未来的代码编辑工作产生帮助。

```


# HTML 段落
```shell
HTML 可以将文档分割为若干段落。

# HTML 段落
段落是通过 <p> 标签定义的。

注意：浏览器会自动地在段落的前后添加空行。（</p> 是块级元素）

# HTML 折行
如果您希望在不产生一个新段落的情况下进行换行（新行），请使用 <br> 标签：
<p>这个<br>段落<br>演示了分行的效果</p>  

<br /> 元素是一个空的 HTML 元素。由于关闭标签没有任何意义，因此它没有结束标签。

# HTML 输出- 使用提醒
我们无法确定 HTML 被显示的确切效果。屏幕的大小，以及对窗口的调整都可能导致不同的结果。  

对于 HTML，您无法通过在 HTML 代码中添加额外的空格或换行来改变输出的效果。  

当显示页面时，浏览器会移除源代码中多余的空格和空行。所有连续的空格或空行都会被算作一个空格。需要注意的是，HTML 代码中的所有连续的空行（换行）也被显示为一个空格。  

```

# HTML 文本格式化
```shell
# HTML 格式化标签  
HTML 使用标签 <b>("bold") 与 <i>("italic") 对输出的文本进行格式, 如：粗体 or 斜体  

这些HTML标签被称为格式化标签（请查看底部完整标签参考手册）。

通常标签 <strong> 替换加粗标签 <b> 来使用, <em> 替换 <i>标签使用。

然而，这些标签的含义是不同的：

<b> 与<i> 定义粗体或斜体文本。

<strong> 或者 <em>意味着你要呈现的文本是重要的，所以要突出显示。现今所有主要浏览器都能渲染各种效果的字体。不过，未来浏览器可能会支持更好的渲染效果。

# 文本格式化
<b>这个文本是加粗的</b>
<br />
<strong>这个文本是加粗的</strong>
<br />
<big>这个文本字体放大</big>
<br />
<em>这个文本是斜体的</em>
<br />
<i>这个文本是斜体的</i>
<br />
<small>这个文本是缩小的</small>
<br />
这个文本包含
<sub>下标</sub>
<br />
这个文本包含
<sup>上标</sup>

# 预格式文本  
通常用于展示计算机代码、命令行输出等需要保留原始格式的内容。  
此例演示如何使用 pre 标签对空行和空格进行控制。
<pre>
此例演示如何使用 pre 标签
对空行和    空格
进行控制
</pre>

# "计算机输出"标签
此例演示不同的"计算机输出"标签的显示效果。
<code>计算机输出</code>
<br />
<kbd>键盘输入</kbd>
<br />
<tt>打字机文本</tt>
<br />
<samp>计算机代码样本</samp>
<br />
<var>计算机变量</var>
<br />
<p>
<b>注释：</b>这些标签常用于显示计算机/编程代码。
</p>


# 地址
此例演示如何在 HTML 文件中写地址。
<address>
Written by <a href="mailto:webmaster@example.com">Jon Doe</a>.<br> 
Visit us at:<br>
Example.com<br>
Box 564, Disneyland<br>
USA
</address>

# 缩写和首字母缩写
此例演示如何实现缩写或首字母缩写。
<abbr title="etcetera">etc.</abbr>
<br />
<acronym title="World Wide Web">WWW</acronym>

在某些浏览器中，当您把鼠标移至缩略词语上时，title 可用于展示表达的完整版本。
仅对于 IE 5 中的 acronym 元素有效。
对于 Netscape 6.2 中的 abbr 和 acronym 元素都有效。

# 文字方向
此例演示如何改变文字的方向。
<p>该段落文字从左到右显示。</p>  
<p><bdo dir="rtl">该段落文字从右到左显示。</bdo></p>  

# 块引用
此例演示如何实现长短不一的引用语。
<p>WWF's goal is to: 
<q>Build a future where people live in harmony with nature.</q>
We hope they succeed.</p>


# 删除字效果和插入字效果
此例演示如何标记删除文本和插入文本。
<p>My favorite color is <del>blue</del> <ins>red</ins>!</p>

```

# HTML 链接  
```shell 
HTML 使用超级链接与网络上的另一个文档相连。  
HTML中的链接是一种用于在不同网页之间导航的元素。 
链接通常用于将一个网页与另一个网页或资源（如文档、图像、音频文件等）相关联。  
链接允许用户在浏览网页时单击文本或图像来跳转到其他位置，从而实现网页之间的互联  

# 链接示例:  
<p><a href="http://www.microsoft.com/">本文本</a> 是一个指向万维网上的页面的链接。</p>

# HTML 超链接（链接）  
HTML使用标签 <a> 来设置超文本链接。  

超链接可以是一个字，一个词，或者一组词，也可以是一幅图像，您可以点击这些内容来跳转到新的文档或者当前文档中的某个部分。
在标签 <a> 中使用了 href 属性来描述链接的地址。
- 图像链接：您还可以使用图像作为链接。在这种情况下，<a> 元素包围着 <img> 元素。例如：
<p>创建图片链接:
<a href="http://www.runoob.com/html/html-tutorial.html">
<img  border="10" src="smiley.gif" alt="HTML 教程" width="32" height="32"></a></p>
<p>无边框的图片链接:
<a href="http://www.runoob.com/html/html-tutorial.html">
<img border="0" src="smiley.gif" alt="HTML 教程" width="32" height="32"></a></p>

- 锚点链接：除了链接到其他网页外，您还可以在同一页面内创建内部链接，这称为锚点链接。要创建锚点链接，需要在目标位置使用 <a> 元素定义一个标记，并使用#符号引用该标记。例如：
<a href="#section2">跳转到第二部分</a>
<a name="section2"></a><!-- 要被跳转的位置。  -->
通过这种方式，可以在同一页面内轻松创建内部链接，使用户可以方便地导航到页面的不同部分
- 下载链接：如果您希望链接用于下载文件而不是导航到另一个网页，可以使用 download 属性。例如：
<a href="document.pdf" download>下载文档</a>


# HTML 链接语法
以下是 HTML 中创建链接的基本语法和属性：
<a> 元素：创建链接的主要HTML元素是<a>（锚）元素。<a>元素具有以下属性：
- href：指定链接目标的URL，这是链接的最重要属性。可以是另一个网页的URL、文件的URL或其他资源的URL。
- target（可选）：指定链接如何在浏览器中打开。常见的值包括 _blank（在新标签或窗口中打开链接）和 - _self （在当前标签或窗口中打开链接）。
- title（可选）：提供链接的额外信息，通常在鼠标悬停在链接上时显示为工具提示。
- rel（可选）：指定与链接目标的关系，如 nofollow、noopener 等。


# HTML 链接 - target 属性
使用 target 属性，你可以定义被链接的文档在何处显示。 （在当前还是新窗口打开） 
下面的这行会在新窗口打开文档：  
<a href="https://www.runoob.com/" target="_blank" rel="noopener noreferrer">访问菜鸟教程!</a>  
<a href="https://www.runoob.com/" target="_self" rel="noopener noreferrer">访问菜鸟教程!</a>  


# HTML 链接- id 属性
id 属性可用于创建一个 HTML 文档书签。
提示: 书签不会以任何特殊方式显示，即在 HTML 页面中是不显示的，所以对于读者来说是隐藏的。
- 在HTML文档中插入ID:  
<a id="tips">有用的提示部分</a>  
- 在HTML文档中创建一个链接到"有用的提示部分(id="tips"）"：  
<a href="#tips">访问有用的提示部分</a>
- 或者，从另一个页面创建一个链接到"有用的提示部分(id="tips"）"：  
<a href="https://www.runoob.com/html/html-links.html#tips">访问有用的提示部分</a>


```


# HTML <head>  
```shell
<head> 元素包含了所有的头部标签元素。在 <head>元素中你可以插入脚本（scripts）, 样式文件（CSS），及各种meta信息。

可以添加在头部区域的元素标签为: <title>, <style>, <meta>, <link>, <script>, <noscript> 和 <base>。  

# HTML <title> 元素
<title> 标签定义了不同文档的标题。
<title> 在 HTML/XHTML 文档中是必需的。

# HTML <base> 元素
<base> 标签描述了基本的链接地址/链接目标，该标签作为HTML文档中所有的链接标签的默认链接:
实例
<head>
<base href="http://www.runoob.com/images/" target="_blank">
</head>

# HTML <link> 元素
<link> 标签定义了文档与外部资源之间的关系。
<link> 标签通常用于链接到样式表:
实例
<head>
<link rel="stylesheet" type="text/css" href="mystyle.css">
</head>


# HTML <style> 元素
<style> 标签定义了HTML文档的样式文件引用地址.
在<style> 元素中你也可以直接添加样式来渲染 HTML 文档:
实例
<head>
<style type="text/css">
body {
    background-color:yellow;
}
p {
    color:blue
}
</style>
</head>


# HTML <meta> 元素
meta标签描述了一些基本的元数据。
<meta> 标签提供了元数据.元数据也不显示在页面上，但会被浏览器解析。
META 元素通常用于指定网页的描述，关键词，文件的最后修改时间，作者，和其他元数据。
元数据可以使用于浏览器（如何显示内容或重新加载页面），搜索引擎（关键词），或其他Web服务。
<meta> 一般放置于 <head> 区域  

## <meta> 标签- 使用实例
- 为搜索引擎定义关键词:
<meta name="keywords" content="HTML, CSS, XML, XHTML, JavaScript">
- 为网页定义描述内容:
<meta name="description" content="免费 Web & 编程 教程">
- 定义网页作者:
<meta name="author" content="Runoob">
- 每30秒钟刷新当前页面:
<meta http-equiv="refresh" content="30">


# HTML <script> 元素
<script>标签用于加载脚本文件，如： JavaScript。
<script> 元素在以后的章节中会详细描述。

```



# HTML 样式- CSS  
```shell 
CSS (Cascading Style Sheets) 用于渲染HTML元素标签的样式。
举例： 
<div style="opacity:0.5;position:absolute;left:50px;width:300px;height:150px;background-color:#40B3DF"></div>

<div style="font-family:verdana;padding:20px;border-radius:10px;border:10px solid #EE872A;">

<div style="opacity:0.3;position:absolute;left:120px;width:100px;height:200px;background-color:#8AC007"></div>

<h3>Look! Styles and colors</h3>

<div style="letter-spacing:12px;">Manipulate Text</div>

<div style="color:#40B3DF;">Colors
<span style="background-color:#B4009E;color:#ffffff;">Boxes</span>
</div>

<div style="color:#000000;">and more...</div>

</div>


# 尝试一下 - HTML使用样式 实例
## 本例演示如何使用添加到 <head> 部分的样式信息对 HTML 进行格式化。
<head>
<meta charset="utf-8"> 
<title>菜鸟教程(runoob.com)</title>
<style type="text/css">
h1 {color:red;}
p {color:blue;}
</style>
</head>

<body>
<h1>这是一个标题</h1>
<p>这是一个段落。</p>
</body>

## 本例演示如何使用样式属性做一个没有下划线的链接。
如何使用 style 属性制作一个没有下划线的链接。
<a href="http://www.runoob.com/" style="text-decoration:none;">访问 runoob.com!</a>
https://www.runoob.com/try/try.php?filename=tryhtml_linknoline  

链接到一个外部样式表
本例演示如何 标签链接到一个外部样式表。
https://www.runoob.com/try/try.php?filename=tryhtml_link  


# 如何使用CSS
CSS 是在 HTML 4 开始使用的,是为了更好的渲染HTML元素而引入的.

CSS 可以通过以下方式添加到HTML中:

内联样式- 在HTML元素中使用"style" 属性
内部样式表 -在HTML文档头部 <head> 区域使用<style> 元素 来包含CSS
外部引用 - 使用外部 CSS 文件
最好的方式是通过外部引用CSS文件.

在本站的HTML教程中我们使用了内联CSS样式来介绍实例，这是为了简化的例子，也使得你能更容易在线编辑代码并在线运行实例。

你可以通过本站的 CSS 教程 学习更多的 CSS 知识。




# 内联样式
当特殊的样式需要应用到个别元素时，就可以使用内联样式。 使用内联样式的方法是在相关的标签中使用样式属性。样式属性可以包含任何 CSS 属性。以下实例显示出如何改变段落的颜色和左外边距。

<p style="color:blue;margin-left:20px;">这是一个段落。</p>


# HTML样式实例 - 背景颜色
背景色属性（background-color）定义一个元素的背景颜色：

实例: https://www.runoob.com/try/try.php?filename=tryhtml_bodybgstyle  
<body style="background-color:yellow;">
<h2 style="background-color:red;">这是一个标题</h2>
<p style="background-color:green;">这是一个段落。</p>
</body>

早期背景色属性（background-color）是使用 bgcolor 属性定义。


# HTML 样式实例 - 字体, 字体颜色 ，字体大小
我们可以使用font-family（字体），color（颜色），和font-size（字体大小）属性来定义字体的样式:

实例
<h1 style="font-family:verdana;">一个标题</h1>
<p style="font-family:arial;color:red;font-size:20px;">一个段落。</p>  

现在通常使用font-family（字体），color（颜色），和font-size（字体大小）属性来定义文本样式，而不是使用<font>标签。


# HTML 样式实例 - 文本对齐方式
使用 text-align（文字对齐）属性指定文本的水平与垂直对齐方式：  
<h1 style="text-align:center;">居中对齐的标题</h1>
<p>这是一个段落。</p>  

文本对齐属性 text-align取代了旧标签 <center> 。


# 内部样式表
当单个文件需要特别样式时，就可以使用内部样式表。你可以在<head> 部分通过 <style>标签定义内部样式表:

<head>
<style type="text/css">
body {background-color:yellow;}
p {color:blue;}
</style>
</head>

# 外部样式表
当样式需要被应用到很多页面的时候，外部样式表将是理想的选择。使用外部样式表，你就可以通过更改一个文件来改变整个站点的外观。

<head>
<link rel="stylesheet" type="text/css" href="mystyle.css">
</head>

# 已弃用的标签和属性
在HTML 4, 原来支持定义HTML元素样式的标签和属性已被弃用。这些标签将不支持新版本的HTML标签。

不建议使用的标签有: <font>, <center>, <strike>

不建议使用的属性: color 和 bgcolor.

```




#  HTML 图像  
https://www.runoob.com/try/try.php?filename=tryhtml_pulpitimage  

```shell
# 在线实例
## 插入图像  https://www.runoob.com/try/try.php?filename=tryhtml_images  
本例演示如何在网页中显示图像。

## 从不同的位置插入图片  https://www.runoob.com/try/try.php?filename=tryhtml_images2  
本例演示如何将其他文件夹或服务器的图片显示到网页中。
<p>一个来自文件夹中的图像:</p>
<img src="/images/chrome.gif" alt="Google Chrome" width="33" height="32">
<p>一个来自菜鸟教程的图像:</p>
<img src="http://www.runoob.com/images/logo.png" alt="runoob.com" width="336" height="69">

## 排列图片
本例演示如何在文字中排列图像。
https://www.runoob.com/try/try.php?filename=tryhtml_image_align  

## 浮动图像
本例演示如何使图片浮动至段落的左边或右边。
https://www.runoob.com/try/try.php?filename=tryhtml_image_float  

## 设置图像链接
本例演示如何将图像作为一个链接使用。  
https://www.runoob.com/try/try.php?filename=tryhtml_imglink  

## 创建图像映射
本例显示如何创建带有可供点击区域的图像地图。其中的每个区域都是一个超级链接。
https://www.runoob.com/try/try.php?filename=tryhtml_areamap  

# HTML 图像- 图像标签（ <img>）和源属性（Src）
在 HTML 中，图像由<img> 标签定义。

<img> 是空标签，意思是说，它只包含属性，并且没有闭合标签。

要在页面上显示图像，你需要使用源属性（src）。src 指 "source"。源属性的值是图像的 URL 地址。

定义图像的语法是：

<img src="url" alt="some_text">
URL 指存储图像的位置。如果名为 "pulpit.jpg" 的图像位于 www.runoob.com 的 images 目录中，那么其 URL 为 http://www.runoob.com/images/pulpit.jpg。

浏览器将图像显示在文档中图像标签出现的地方。如果你将图像标签置于两个段落之间，那么浏览器会首先显示第一个段落，然后显示图片，最后显示第二段。


# HTML 图像- Alt属性
alt 属性用来为图像定义一串预备的可替换的文本。

替换文本属性的值是用户定义的。

<img src="boat.gif" alt="Big Boat">
在浏览器无法载入图像时，替换文本属性告诉读者她们失去的信息。此时，浏览器将显示这个替代性的文本而不是图像。为页面上的图像都加上替换文本属性是个好习惯，这样有助于更好的显示信息，并且对于那些使用纯文本浏览器的人来说是非常有用的。


# HTML 图像- 设置图像的高度与宽度
height（高度） 与 width（宽度）属性用于设置图像的高度与宽度。

属性值默认单位为像素:

<img src="pulpit.jpg" alt="Pulpit rock" width="304" height="228">
提示: 指定图像的高度和宽度是一个很好的习惯。如果图像指定了高度宽度，页面加载时就会保留指定的尺寸。如果没有指定图片的大小，加载页面时有可能会破坏HTML页面的整体布局。


# 基本的注意事项 - 有用的提示：
注意: 假如某个 HTML 文件包含十个图像，那么为了正确显示这个页面，需要加载 11 个文件。加载图片是需要时间的，所以我们的建议是：慎用图片。

注意: 加载页面时，要注意插入页面图像的路径，如果不能正确设置图像的位置，浏览器无法加载图片，图像标签就会显示一个破碎的图片。

```



# HTML 表格  
HTML 表格由 <table> 标签来定义。

HTML 表格是一种用于展示结构化数据的标记语言元素。

每个表格均有若干行（由 <tr> 标签定义），每行被分割为若干单元格（由 <td> 标签定义），表格可以包含标题行（<th>）用于定义列的标题。

tr：tr 是 table row 的缩写，表示表格的一行。
td：td 是 table data 的缩写，表示表格的数据单元格。
th：th 是 table header的缩写，表示表格的表头单元格。
数据单元格可以包含文本、图片、列表、段落、表单、水平线、表格等等。

HTML 表格生成器：https://www.jyshare.com/front-end/7688/  

```shell
# 以下是一个简单的 HTML 表格实例:
实例
<table>
  <thead>
    <tr>
      <th>列标题1</th>
      <th>列标题2</th>
      <th>列标题3</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>行1，列1</td>
      <td>行1，列2</td>
      <td>行1，列3</td>
    </tr>
    <tr>
      <td>行2，列1</td>
      <td>行2，列2</td>
      <td>行2，列3</td>
    </tr>
  </tbody>
</table>
以上的表格实例代码中，<table> 元素表示整个表格，它包含两个主要部分：<thead> 和 <tbody>。

<thead > 用于定义表格的标题部分: 在 <thead > 中，使用 <th > 元素定义列的标题，以上实例中列标题分别为"列标题1"，"列标题2"和"列标题3"。

<tbody > 用于定义表格的主体部分: 在 <tbody > 中，使用 <tr > 元素定义行，并在每行中使用 <td > 元素定义单元格数据，以上实例中有两行数据，每行包含三个单元格。

通过使用 <th > 元素定义列标题，可以使其在表格中以粗体显示，与普通单元格区分开来。

HTML 表格还可以具有其他部分，如 <tfoot > （表格页脚）和 <caption > （表格标题），<tfoot > 可用于在表格的底部定义摘要、统计信息等内容。 <caption > 可用于为整个表格定义标题。

HTML 表格还支持合并单元格和跨行/跨列的操作，以及其他样式和属性的应用，以满足各种需求。

我们也可以使用 CSS 来进一步自定义表格的样式和外观。


# HTML 表格和边框属性
如果不定义边框属性，表格将不显示边框。有时这很有用，但是大多数时候，我们希望显示边框。

使用边框属性来显示一个带有边框的表格：
<table border="1">
    <tr>
        <td>Row 1, cell 1</td>
        <td>Row 1, cell 2</td>
    </tr>
</table>



# HTML 表格表头
表格的表头使用 <th> 标签进行定义。

大多数浏览器会把表头显示为粗体居中的文本：
<table border="1">
    <tr>
        <th>Header 1</th>
        <th>Header 2</th>
    </tr>
    <tr>
        <td>row 1, cell 1</td>
        <td>row 1, cell 2</td>
    </tr>
    <tr>
        <td>row 2, cell 1</td>
        <td>row 2, cell 2</td>
    </tr>
</table>

```




# HTML 列表  
HTML 支持有序、无序和定义列表。  
```shell
# 在线实例

## 无序列表
本例演示无序列表。

## 有序列表
本例演示有序列表。

## 不同类型的有序列表
本例演示不同类型的有序列表。

## 不同类型的无序列表
本例演示不同类型的无序列表。

## 嵌套列表
本例演示如何嵌套列表。

## 嵌套列表 2
本例演示更复杂的嵌套列表。

## 自定义列表
本例演示一个定义列表。


# HTML无序列表
无序列表是一个项目的列表，此列项目使用粗体圆点（典型的小黑圆圈）进行标记。
无序列表使用 <ul> 标签
<ul>
<li>Coffee</li>
<li>Milk</li>
</ul>

# HTML 有序列表
同样，有序列表也是一列项目，列表项目使用数字进行标记。 有序列表始于 <ol> 标签。每个列表项始于 <li> 标签。
列表项使用数字来标记。
<ol>
<li>Coffee</li>
<li>Milk</li>
</ol>


# HTML 自定义列表
自定义列表不仅仅是一列项目，而是项目及其注释的组合。
自定义列表以 <dl> 标签开始。每个自定义列表项以 <dt> 开始。每个自定义列表项的定义以 <dd> 开始。
<dl>
<dt>Coffee</dt>
<dd>- black hot drink</dd>
<dt>Milk</dt>
<dd>- white cold drink</dd>
</dl>

# 注意事项 - 有用提示
提示: 列表项内部可以使用段落、换行符、图片、链接以及其他列表等等。  

```



# HTML <div> 和<span>
HTML 可以通过 <div> 和 <span>将元素组合起来。  
```shell
# HTML 区块元素
大多数 HTML 元素被定义为块级元素或内联元素。

块级元素在浏览器显示时，通常会以新行来开始（和结束）。

实例: <h1>, <p>, <ul>, <table>


# HTML 内联元素
内联元素在显示时通常不会以新行开始。

实例: <b>, <td>, <a>, <img>


# HTML <div> 元素
HTML <div> 元素是块级元素，它可用于组合其他 HTML 元素的容器。

<div> 元素没有特定的含义。除此之外，由于它属于块级元素，浏览器会在其前后显示折行。

如果与 CSS 一同使用，<div> 元素可用于对大的内容块设置样式属性。

<div> 元素的另一个常见的用途是文档布局。它取代了使用表格定义布局的老式方法。使用 <table> 元素进行文档布局不是表格的正确用法。<table> 元素的作用是显示表格化的数据。



# HTML <span> 元素
HTML <span> 元素是内联元素，可用作文本的容器

<span> 元素也没有特定的含义。

当与 CSS 一同使用时，<span> 元素可用于为部分文本设置样式属性。


```

# HTML 布局
网页布局对改善网站的外观非常重要。

请慎重设计您的网页布局。

```shell
# 在线实例
使用 <div> 元素的网页布局  
如何使用 <div> 元素添加布局。  
https://www.runoob.com/try/try.php?filename=tryhtml_layout_divs  

使用 <table> 元素的网页布局
如何使用 <table> 元素添加布局。
https://www.runoob.com/try/try.php?filename=tryhtml_layout_tables  


# 网站布局
大多数网站会把内容安排到多个列中（就像杂志或报纸那样）。

大多数网站可以使用 <div> 或者 <table> 元素来创建多列。CSS 用于对元素进行定位，或者为页面创建背景以及色彩丰富的外观。

lamp	虽然我们可以使用HTML table标签来设计出漂亮的布局，但是table标签是不建议作为布局工具使用的 - 表格不是布局工具。  

# HTML 布局 - 有用的提示
Tip: 使用 CSS 最大的好处是，如果把 CSS 代码存放到外部样式表中，那么站点会更易于维护。通过编辑单一的文件，就可以改变所有页面的布局。如需学习更多有关 CSS 的知识，请访问我们的CSS 教程。

Tip: 由于创建高级的布局非常耗时，使用模板是一个快速的选项。通过搜索引擎可以找到很多免费的网站模板（您可以使用这些预先构建好的网站布局，并优化它们）。  


```


# HTML 表单和输入
HTML 表单用于收集用户的输入信息。

HTML 表单表示文档中的一个区域，此区域包含交互控件，将用户收集到的信息发送到 Web 服务器。

HTML 表单通常包含各种输入字段、复选框、单选按钮、下拉列表等元素。

以下是一个简单的HTML表单的例子：

<form> 元素用于创建表单，action 属性定义了表单数据提交的目标 URL，method 属性定义了提交数据的 HTTP 方法（这里使用的是 "post"）。
<label> 元素用于为表单元素添加标签，提高可访问性。
<input> 元素是最常用的表单元素之一，它可以创建文本输入框、密码框、单选按钮、复选框等。type 属性定义了输入框的类型，id 属性用于关联 <label> 元素，name 属性用于标识表单字段。
<select> 元素用于创建下拉列表，而 <option> 元素用于定义下拉列表中的选项。  

```shell
# 示例：
<form action="/" method="post">
    <!-- 文本输入框 -->
    <label for="name">用户名:</label>
    <input type="text" id="name" name="name" required>

    <br>

    <!-- 密码输入框 -->
    <label for="password">密码:</label>
    <input type="password" id="password" name="password" required>

    <br>

    <!-- 单选按钮 -->
    <label>性别:</label>
    <input type="radio" id="male" name="gender" value="male" checked>
    <label for="male">男</label>
    <input type="radio" id="female" name="gender" value="female">
    <label for="female">女</label>

    <br>

    <!-- 复选框 -->
    <input type="checkbox" id="subscribe" name="subscribe" checked>
    <label for="subscribe">订阅推送信息</label>

    <br>

    <!-- 下拉列表 -->
    <label for="country">国家:</label>
    <select id="country" name="country">
        <option value="cn">CN</option>
        <option value="usa">USA</option>
        <option value="uk">UK</option>
    </select>

    <br>

    <!-- 提交按钮 -->
    <input type="submit" value="提交">
</form>



# 以下实例创建了一个表单，包含两个输入框：
<form action="">
First name: <input type="text" name="firstname"><br>
Last name: <input type="text" name="lastname">
</form>

# 以下实例创建了一个表单，包含一个普通输入框和一个密码输入框：

<form action="">
Username: <input type="text" name="user"><br>
Password: <input type="password" name="password">
</form>


# HTML 表单
表单是一个包含表单元素的区域。

表单元素是允许用户在表单中输入内容，比如：文本域（textarea）、下拉列表（select）、单选框（radio-buttons）、复选框（checkbox） 等等。

我们可以使用 <form> 标签来创建表单.  



# HTML 表单 - 输入元素
多数情况下被用到的表单标签是输入标签 <input>。

输入类型是由 type 属性定义。

接下来我们介绍几种常用的输入类型。

## 文本域（Text Fields）
文本域通过 <input type="text"> 标签来设定，当用户要在表单中键入字母、数字等内容时，就会用到文本域。

实例
<form>
First name: <input type="text" name="firstname"><br>
Last name: <input type="text" name="lastname">
</form>


## 密码字段
密码字段通过标签 <input type="password"> 来定义:

实例
<form>
Password: <input type="password" name="pwd">
</form>


## 单选按钮（Radio Buttons）
<input type="radio"> 标签定义了表单的单选框选项:

实例
<form action="">
<input type="radio" name="sex" value="male">男<br>
<input type="radio" name="sex" value="female">女
</form>

## 复选框（Checkboxes）
<input type="checkbox"> 定义了复选框。

复选框可以选取一个或多个选项：

实例
<form>
<input type="checkbox" name="vehicle" value="Bike">我喜欢自行车<br>
<input type="checkbox" name="vehicle" value="Car">我喜欢小汽车
</form>


## 提交按钮(Submit)
<input type="submit"> 定义了提交按钮。

当用户单击确认按钮时，表单的内容会被传送到服务器。表单的动作属性 action 定义了服务端的文件名。

action 属性会对接收到的用户输入数据进行相关的处理:

实例
<form name="input" action="html_form_action.php" method="get">
Username: <input type="text" name="user">
<input type="submit" value="Submit">
</form>

假如您在上面的文本框内键入几个字母，然后点击确认按钮，那么输入数据会传送到 html_form_action.php 文件，该页面将显示出输入的结果。

以上实例中有一个 method 属性，它用于定义表单数据的提交方式，可以是以下值：

post：指的是 HTTP POST 方法，表单数据会包含在表单体内然后发送给服务器，用于提交敏感数据，如用户名与密码等。

get：默认值，指的是 HTTP GET 方法，表单数据会附加在 action 属性的 URL 中，并以 ?作为分隔符，一般用于不敏感信息，如分页等。例如：https://www.runoob.com/?page=1，这里的 page=1 就是 get 方法提交的数据。  


# 多实例
## 单选按钮(Radio buttons)
本例演示如何在 HTML 中创建单选按钮。
https://www.runoob.com/try/try.php?filename=tryhtml_radio

## 复选框(Checkboxes)
本例演示如何在 HTML 页中创建复选框。用户可以选中或取消选取复选框。
https://www.runoob.com/try/try.php?filename=tryhtml_checkbox  

## 简单的下拉列表
本例演示如何在 HTML 页面中创建简单的下拉列表框。下拉列表框是一个可选列表。
https://www.runoob.com/try/try.php?filename=tryhtml_select2  

## 预选下拉列表  
本例演示如何创建一个简单的带有预选值的下拉列表。  
https://www.runoob.com/try/try.php?filename=tryhtml_select3  

## 文本域(Textarea)  
本例演示如何创建文本域（多行文本输入控件）。用户可在文本域中写入文本。可写入字符的字数不受限制。  
https://www.runoob.com/try/try.php?filename=tryhtml_textarea  

## 创建按钮  
本例演示如何创建按钮。你可以对按钮上的文字进行自定义。  
https://www.runoob.com/try/try.php?filename=tryhtml_button  


# 表单实例
## 带边框的表单
本例演示如何在数据周围绘制一个带标题的框。  
https://www.runoob.com/try/try.php?filename=tryhtml_legend  

## 带有输入框和确认按钮的表单
本例演示如何向页面添加表单。此表单包含两个输入框和一个确认按钮。  
https://www.runoob.com/try/try.php?filename=tryhtml_form_submit  

## 带有复选框的表单
此表单包含两个复选框和一个确认按钮。  
https://www.runoob.com/try/try.php?filename=tryhtml_form_checkbox  

## 带有单选按钮的表单
此表单包含两个单选框和一个确认按钮。  
https://www.runoob.com/try/try.php?filename=tryhtml_form_radio  

## 从表单发送电子邮件
此例演示如何从表单发送电子邮件。
https://www.runoob.com/try/try.php?filename=tryhtml_form_mail  


```


# HTML 框架
通过使用框架，你可以在同一个浏览器窗口中显示不止一个页面。  
iframe语法:
<iframe src="URL"></iframe>
该URL指向不同的网页。

```shell
# iframe - 设置高度与宽度
height 和 width 属性用来定义iframe标签的高度与宽度。

属性默认以像素为单位, 但是你可以指定其按比例显示 (如："80%")。

实例
<iframe src="demo_iframe.htm" width="200" height="200"></iframe>  


# 使用 iframe 来显示目标链接页面
iframe 可以显示一个目标链接的页面

目标链接的属性必须使用 iframe 的属性，如下实例:

实例
<iframe src="demo_iframe.htm" name="iframe_a"></iframe>
<p><a href="https://www.runoob.com" target="iframe_a" rel="noopener">RUNOOB.COM</a></p>  

```

# HTML 颜色
https://www.runoob.com/html/html-colors.html  
HTML 颜色由红色、绿色、蓝色混合而成。  

```shell
# 颜色值
HTML 颜色由一个十六进制符号来定义，这个符号由红色、绿色和蓝色的值组成（RGB）。

每种颜色的最小值是0（十六进制：#00）。最大值是255（十六进制：#FF）。

# 1600万种不同颜色
三种颜色 红，绿，蓝的组合从0到255，一共有1600万种不同颜色(256 x 256 x 256)。

在下面的颜色表中你会看到不同的结果，从0到255的红色，同时设置绿色和蓝色的值为0,随着红色的值变化，不同的值都显示了不同的颜色。



# Web安全色?
数年以前，当大多数计算机仅支持 256 种颜色的时候，一系列 216 种 Web 安全色作为 Web 标准被建议使用。其中的原因是，微软和 Mac 操作系统使用了 40 种不同的保留的固定系统颜色（双方大约各使用 20 种）。

我们不确定如今这么做的意义有多大，因为越来越多的计算机有能力处理数百万种颜色，不过做选择还是你自己。

最初，216 跨平台 web 安全色被用来确保：当计算机使用 256 色调色板时，所有的计算机能够正确地显示所有的颜色。

```

# HTML 颜色名
https://www.runoob.com/html/html-colornames.html  
```shell 
# 目前所有浏览器都支持以下颜色名。
141个颜色名称是在HTML和CSS颜色规范定义的（17标准颜色，再加124）。下表列出了所有颜色的值，包括十六进制值。

Remark 提示: 17标准颜色：黑色，蓝色，水，紫红色，灰色，绿色，石灰，栗色，海军，橄榄，橙，紫，红，白，银，蓝绿色，黄色。点击其中一个颜色名称（或一个十六进制值）就可以查看与不同文字颜色搭配的背景颜色。
```

# HTML 颜色值
颜色由红(R)、绿(G)、蓝(B)组成。
```shell
# 颜色值
颜色值由十六进制来表示红、绿、蓝（RGB）。

每个颜色的最低值为 0(十六进制为 00)，最高值为 255(十六进制为FF)。

十六进制值的写法为 # 号后跟三个或六个十六进制字符。

三位数表示法为：#RGB，转换为6位数表示为：#RRGGBB。


```


# HTML 脚本
JavaScript 使 HTML 页面具有更强的动态和交互性。

```shell
# 在线实例
插入一段脚本
如何将脚本插入 HTML 文档。
https://www.runoob.com/try/try.php?filename=tryhtml_script  

使用 <noscript> 标签
如何应对不支持脚本或禁用脚本的浏览器。  
https://www.runoob.com/try/try.php?filename=tryhtml_noscript  


# HTML <script> 标签
<script> 标签用于定义客户端脚本，比如 JavaScript。

<script> 元素既可包含脚本语句，也可通过 src 属性指向外部脚本文件。

JavaScript 最常用于图片操作、表单验证以及内容动态更新。

下面的脚本会向浏览器输出"Hello World!"：

实例
<script>
document.write("Hello World!");
</script>

# HTML<noscript> 标签
<noscript> 标签提供无法使用脚本时的替代内容，比方在浏览器禁用脚本时，或浏览器不支持客户端脚本时。

<noscript>元素可包含普通 HTML 页面的 body 元素中能够找到的所有元素。

只有在浏览器不支持脚本或者禁用脚本时，才会显示 <noscript> 元素中的内容：

实例
<script>
document.write("Hello World!")
</script>
<noscript>抱歉，你的浏览器不支持 JavaScript!</noscript>


# JavaScript体验(来自本站javascript教程)
JavaScript实例代码:

## JavaScript可以直接在HTML输出:
document.write("<p>这是一个段落。</p>");
https://www.runoob.com/try/try.php?filename=tryjs_intro_event  


## JavaScript事件响应:
<button type="button" onclick="myFunction()">点我！</button>  
https://www.runoob.com/try/try.php?filename=tryjs_intro_event  


## JavaScript处理 HTML 样式:
document.getElementById("demo").style.color="#ff0000";
https://www.runoob.com/try/try.php?filename=tryjs_intro_style  



```



# HTML 字符实体
https://www.runoob.com/html/html-entities.html  

HTML 中的预留字符必须被替换为字符实体。

一些在键盘上找不到的字符也可以使用字符实体来替换。

```shell
# HTML 实体
在 HTML 中，某些字符是预留的。

在 HTML 中不能使用小于号（<）和大于号（>），这是因为浏览器会误认为它们是标签。

如果希望正确地显示预留字符，我们必须在 HTML 源代码中使用字符实体（character entities）。 字符实体类似这样：

&entity_name;
或

&#entity_number;
如需显示小于号，我们必须这样写：&lt; 或 &#60; 或 &#060;

Remark提示： 使用实体名而不是数字的好处是，名称易于记忆。不过坏处是，浏览器也许并不支持所有实体名称（对实体数字的支持却很好）。


# 不间断空格(Non-breaking Space)
HTML 中的常用字符实体是不间断空格(&nbsp;)。

浏览器总是会截短 HTML 页面中的空格。如果您在文本中写 10 个空格，在显示该页面之前，浏览器会删除它们中的 9 个。如需在页面中增加空格的数量，您需要使用 &nbsp; 字符实体。


```

# HTML 统一资源定位器(Uniform Resource Locators)
URL 是一个网页地址。

URL可以由字母组成，如"runoob.com"，或互联网协议（IP）地址： 192.68.20.50。大多数人进入网站使用网站域名来访问，因为 名字比数字更容易记住。

```shell
# URL - 统一资源定位器
Web浏览器通过URL从Web服务器请求页面。

当您点击 HTML 页面中的某个链接时，对应的 <a> 标签指向万维网上的一个地址。

一个统一资源定位器(URL) 用于定位万维网上的文档。

一个网页地址实例: http://www.runoob.com/html/html-tutorial.html 语法规则:

scheme://host.domain:port/path/filename
说明:

scheme - 定义因特网服务的类型。最常见的类型是 http
host - 定义域主机（http 的默认主机是 www）
domain - 定义因特网域名，比如 runoob.com
:port - 定义主机上的端口号（http 的默认端口号是 80）
path - 定义服务器上的路径（如果省略，则文档必须位于网站的根目录中）。
filename - 定义文档/资源的名称


# 常见的 URL Scheme
以下是一些URL scheme：

Scheme	访问	用于...
http	超文本传输协议	以 http:// 开头的普通网页。不加密。
https	安全超文本传输协议	安全网页，加密所有信息交换。
ftp	文件传输协议	用于将文件下载或上传至网站。
file 您计算机上的文件。



# URL 字符编码
URL 只能使用 ASCII 字符集.

来通过因特网进行发送。由于 URL 常常会包含 ASCII 集合之外的字符，URL 必须转换为有效的 ASCII 格式。

URL 编码使用 "%" 其后跟随两位的十六进制数来替换非 ASCII 字符。

URL 不能包含空格。URL 编码通常使用 + 来替换空格。



```


# HTML 速查列表
HTML 速查列表. 你可以打印它，以备日常使用。

```shell
# HTML 基本文档
<!DOCTYPE html>
<html>
<head>
<title>文档标题</title>
</head>
<body>
可见文本...
</body>
</html>

# 基本标签（Basic Tags）
<h1>最大的标题</h1>
<h2> . . . </h2>
<h3> . . . </h3>
<h4> . . . </h4>
<h5> . . . </h5>
<h6>最小的标题</h6>
 
<p>这是一个段落。</p>
<br> （换行）
<hr> （水平线）
<!-- 这是注释 -->

# 文本格式化（Formatting）
<b>粗体文本</b>
<code>计算机代码</code>
<em>强调文本</em>
<i>斜体文本</i>
<kbd>键盘输入</kbd> 
<pre>预格式化文本</pre>
<small>更小的文本</small>
<strong>重要的文本</strong>
 
<abbr> （缩写）
<address> （联系信息）
<bdo> （文字方向）
<blockquote> （从另一个源引用的部分）
<cite> （工作的名称）
<del> （删除的文本）
<ins> （插入的文本）
<sub> （下标文本）
<sup> （上标文本）

# 链接（Links）
普通的链接：<a href="http://www.example.com/">链接文本</a>
图像链接： <a href="http://www.example.com/"><img src="URL" alt="替换文本"></a>
邮件链接： <a href="mailto:webmaster@example.com">发送e-mail</a>
书签：
<a id="tips">提示部分</a>
<a href="#tips">跳到提示部分</a>

# 图片（Images）
<img src="URL" alt="替换文本" height="42" width="42">

# 样式/区块（Styles/Sections）
<style type="text/css">
h1 {color:red;}
p {color:blue;}
</style>
<div>文档中的块级元素</div>
<span>文档中的内联元素</span>

# 无序列表
<ul>
    <li>项目</li>
    <li>项目</li>
</ul>


# 有序列表
<ol>
    <li>第一项</li>
    <li>第二项</li>
</ol>

# 定义列表
<dl>
  <dt>项目 1</dt>
    <dd>描述项目 1</dd>
  <dt>项目 2</dt>
    <dd>描述项目 2</dd>
</dl>


# 表格（Tables）
<table border="1">
  <tr>
    <th>表格标题</th>
    <th>表格标题</th>
  </tr>
  <tr>
    <td>表格数据</td>
    <td>表格数据</td>
  </tr>
</table>

# 框架（Iframe）
<iframe src="demo_iframe.htm"></iframe>


# 表单（Forms）
<form action="demo_form.php" method="post/get">
<input type="text" name="email" size="40" maxlength="50">
<input type="password">
<input type="checkbox" checked="checked">
<input type="radio" checked="checked">
<input type="submit" value="Send">
<input type="reset">
<input type="hidden">
<select>
<option>苹果</option>
<option selected="selected">香蕉</option>
<option>樱桃</option>
</select>
<textarea name="comment" rows="60" cols="20"></textarea>
 
</form>

# 实体（Entities）
&lt; 等同于 <
&gt; 等同于 >
&#169; 等同于 ©

```

# HTML 标签简写及全称
下表列出了 HTML 标签简写及全称：
https://www.runoob.com/html/html-tag-name.html  



# 你已经完成了 HTML 的学习，下一步该学习什么呢？
https://www.runoob.com/html/html-summary.html  

# HTML - XHTML  
https://www.runoob.com/html/html-xhtml.html  

# HTML 媒体
https://www.runoob.com/html/html-media.html  





# 学至：   














# END


