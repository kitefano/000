


# CSS 教程
https://www.runoob.com/css/css-tutorial.html  

CSS (Cascading Style Sheets，层叠样式表），是一种用来为结构化文档（如 HTML 文档或 XML 应用）添加样式（字体、间距和颜色等）的计算机语言，CSS 文件扩展名为 .css。

通过使用 CSS 我们可以大大提升网页开发的工作效率！

在我们的 CSS 教程中，您会学到如何使用 CSS 同时控制多重网页的样式和布局。

CSS3 现在已被大部分现代浏览器支持，而下一版的 CSS4 仍在开发中。 

## HTML/CSS/JS 在线工具
HTML/CSS/JS 在线工具可以在线编辑 HTML、CSS、JS 代码，并实时查看效果，你也可以将优质代码保存分享： https://c.runoob.com/front-end/61

## CSS 参考手册
在菜鸟教程中你可以找到更完整的CSS属性、选择器的语法，浏览器支持等资料.
CSS 参考手册: https://www.runoob.com/cssref/css-reference.html  
CSS 选择器： https://www.runoob.com/cssref/css-selectors.html
CSS 听觉参考手册： https://www.runoob.com/cssref/css-ref-aural.html  
CSS 单位 ： https://www.runoob.com/cssref/css-units.html  
CSS 颜色： https://www.runoob.com/cssref/css-colors.html  



# CSS 简介

```shell
# 什么是 CSS?
CSS 指层叠样式表 (Cascading Style Sheets)
样式定义如何显示 HTML 元素
样式通常存储在样式表中
把样式添加到 HTML 4.0 中，是为了解决内容与表现分离的问题
外部样式表可以极大提高工作效率
外部样式表通常存储在 CSS 文件中
多个样式定义可层叠为一个


# CSS 实例
一个HTML文档可以显示不同的样式, 查看CSS是如何工作的:
https://www.runoob.com/try/demo_source/demo_default.htm  

# 样式解决了一个很大的问题
HTML 标签原本被设计为用于定义文档内容，如下实例：

<h1>这是一个标题</h1>
<p>这是一个段落。</p>
样式表定义如何显示 HTML 元素，就像 HTML 中的字体标签和颜色属性所起的作用那样。样式通常保存在外部的 .css 文件中。我们只需要编辑一个简单的 CSS 文档就可以改变所有页面的布局和外观。


```


# CSS 语法
CSS 规则由两个主要的部分构成：选择器，以及一条或多条声明: 
选择器通常是您需要改变样式的 HTML 元素。

每条声明由一个属性和一个值组成。

属性（property）是您希望设置的样式属性（style attribute）。每个属性有一个值。属性和值被冒号分开。

```shell
# CSS 实例
CSS声明总是以分号 ; 结束，声明总以大括号 {} 括起来:

p {color:red;text-align:center;}
为了让CSS可读性更强，你可以每行只描述一个属性:

实例
p
{
    color:red;
    text-align:center;
}

# CSS 注释
注释是用来解释你的代码，并且可以随意编辑它，浏览器会忽略它。

CSS注释以 /* 开始, 以 */ 结束

```


# CSS id 和 class
```shell 
# id 和 class 选择器
如果你要在HTML元素中设置CSS样式，你需要在元素中设置"id" 和 "class"选择器。

# id 选择器
id 选择器可以为标有特定 id 的 HTML 元素指定特定的样式。

HTML元素以id属性来设置id选择器,CSS 中 id 选择器以 "#" 来定义。

以下的样式规则应用于元素属性 id="para1":

实例
#para1
{
    text-align:center;
    color:red;
}

Remark ID属性不要以数字开头，数字开头的ID在 Mozilla/Firefox 浏览器中不起作用。


# class 选择器
class 选择器用于描述一组元素的样式，class 选择器有别于id选择器，class可以在多个元素中使用。

class 选择器在 HTML 中以 class 属性表示, 在 CSS 中，类选择器以一个点 . 号显示：

## 在以下的例子中，所有拥有 center 类的 HTML 元素均为居中。

实例
.center {text-align:center;}


## 你也可以指定特定的 HTML 元素使用 class。

在以下实例中, 所有的 p 元素使用 class="center" 让该元素的文本居中:

实例
p.center {text-align:center;}

## 多个 class 选择器可以使用空格分开：

实例
.center { text-align:center; }
.color { color:#ff0000; }
<p class="center color">段落居中，颜色为红色。</p> 
https://www.runoob.com/try/try.php?filename=trycss_syntax_class2  

Remark 类名的第一个字符不能使用数字！它无法在 Mozilla 或 Firefox 中起作用。

```


# CSS 创建
当读到一个样式表时，浏览器会根据它来格式化 HTML 文档。

```shell
# 如何插入样式表
插入样式表的方法有三种:

外部样式表(External style sheet)
内部样式表(Internal style sheet)
内联样式(Inline style)

# 外部样式表
当样式需要应用于很多页面时，外部样式表将是理想的选择。在使用外部样式表的情况下，你可以通过改变一个文件来改变整个站点的外观。每个页面使用 <link> 标签链接到样式表。 <link> 标签在（文档的）头部：

<head>
<link rel="stylesheet" type="text/css" href="mystyle.css">
</head>
浏览器会从文件 mystyle.css 中读到样式声明，并根据它来格式文档。

外部样式表可以在任何文本编辑器中进行编辑。文件不能包含任何的 html 标签。样式表应该以 .css 扩展名进行保存。下面是一个样式表文件的例子：

hr {color:sienna;}
p {margin-left:20px;}
body {background-image:url("/images/back40.gif");}

Remark 不要在属性值与单位之间留有空格（如："margin-left: 20 px" ），正确的写法是 "margin-left: 20px" 。

# 内部样式表
当单个文档需要特殊的样式时，就应该使用内部样式表。你可以使用 <style> 标签在文档头部定义内部样式表，就像这样:

<head>
<style>
hr {color:sienna;}
p {margin-left:20px;}
body {background-image:url("images/back40.gif");}
</style>
</head>


# 内联样式
由于要将表现和内容混杂在一起，内联样式会损失掉样式表的许多优势。请慎用这种方法，例如当样式仅需要在一个元素上应用一次时。

要使用内联样式，你需要在相关的标签内使用样式（style）属性。Style 属性可以包含任何 CSS 属性。本例展示如何改变段落的颜色和左外边距：

<p style="color:sienna;margin-left:20px">这是一个段落。</p>



# 多重样式
如果某些属性在不同的样式表中被同样的选择器定义，那么属性值将从更具体的样式表中被继承过来。 

## 例如，外部样式表拥有针对 h3 选择器的三个属性：

h3
{
    color:red;
    text-align:left;
    font-size:8pt;
}
## 而内部样式表拥有针对 h3 选择器的两个属性：

h3
{
    text-align:right;
    font-size:20pt;
}
## 假如拥有内部样式表的这个页面同时与外部样式表链接，那么 h3 得到的样式是：

color:red;
text-align:right;
font-size:20pt;
即颜色属性将被继承于外部样式表，而文字排列（text-alignment）和字体尺寸（font-size）会被内部样式表中的规则取代。



# 多重样式优先级
样式表允许以多种方式规定样式信息。样式可以规定在单个的 HTML 元素中，在 HTML 页的头元素中，或在一个外部的 CSS 文件中。甚至可以在同一个 HTML 文档内部引用多个外部样式表。

一般情况下，优先级如下：

（内联样式）Inline style > （内部样式）Internal style sheet >（外部样式）External style sheet > 浏览器默认样式  

## 实例
<head>
    <!-- 外部样式 style.css -->
    <link rel="stylesheet" type="text/css" href="style.css"/>
    <!-- 设置：h3{color:blue;} -->
    <style type="text/css">
      /* 内部样式 */
      h3{color:green;}
    </style>
</head>
<body>
    <h3>显示绿色，是内部样式</h3>
</body>

## 注意：如果外部样式放在内部样式的后面，则外部样式将覆盖内部样式，实例如下：
注意：如果外部样式放在内部样式的后面，则外部样式将覆盖内部样式，实例如下：

实例
<head>
    <!-- 设置：h3{color:blue;} -->
    <style type="text/css">
      /* 内部样式 */
      h3{color:green;}
    </style>
    <!-- 外部样式 style.css -->
    <link rel="stylesheet" type="text/css" href="style.css"/>
</head>
<body>
    <h3>显示蓝色，是外部样式</h3>
</body>

```

# CSS 背景

CSS 背景属性用于定义HTML元素的背景。

CSS 属性定义背景效果:

background-color
background-image
background-repeat
background-attachment
background-position

```shell
# 背景颜色

background-color 属性定义了元素的背景颜色.

页面的背景颜色使用在body的选择器中:

实例
body {background-color:#b0c4de;}
https://www.runoob.com/try/try.php?filename=trycss_background-color_body  

## CSS中，颜色值通常以以下方式定义:

十六进制 - 如："#ff0000"
RGB - 如："rgb(255,0,0)"
颜色名称 - 如："red"
以下实例中, h1, p, 和 div 元素拥有不同的背景颜色:

实例
h1 {background-color:#6495ed;}
p {background-color:#e0ffff;}
div {background-color:#b0c4de;}

# 背景图像
background-image 属性描述了元素的背景图像.

默认情况下，背景图像进行平铺重复显示，以覆盖整个元素实体.

页面背景图片设置实例:

实例
body {background-image:url('paper.gif');}
https://www.runoob.com/try/try.php?filename=trycss_background-image  

## 下面是一个例子是一个糟糕的文字和背景图像组合。文本可读性差:

实例
body {background-image:url('bgdesert.jpg');}
https://www.runoob.com/try/try.php?filename=trycss_background-image_bad  


# 背景图像 - 水平或垂直平铺
默认情况下 background-image 属性会在页面的水平或者垂直方向平铺。

## 一些图像如果在水平方向与垂直方向平铺，这样看起来很不协调，如下所示: 

实例
body
{
background-image:url('gradient2.png');
}
## 如果图像只在水平方向平铺 (repeat-x), 页面背景会更好些:

实例
body
{
background-image:url('gradient2.png');
background-repeat:repeat-x;
}

# 背景图像- 设置定位与不平铺
Remark 让背景图像不影响文本的排版

## 如果你不想让图像平铺，你可以使用 background-repeat 属性:

实例
body
{
background-image:url('img_tree.png');
background-repeat:no-repeat;
}
https://www.runoob.com/try/try.php?filename=trycss_background-image_norepeat  

## 以上实例中，背景图像与文本显示在同一个位置，为了让页面排版更加合理，不影响文本的阅读，我们可以改变图像的位置。

可以利用 background-position 属性改变图像在背景中的位置:

实例
body
{
background-image:url('img_tree.png');
background-repeat:no-repeat;
background-position:right top;
}
https://www.runoob.com/try/try.php?filename=trycss_background-image_position  


# 背景- 简写属性
在以上实例中我们可以看到页面的背景颜色通过了很多的属性来控制。

为了简化这些属性的代码，我们可以将这些属性合并在同一个属性中.

背景颜色的简写属性为 "background":

实例
body {background:#ffffff url('img_tree.png') no-repeat right top;}

## 当使用简写属性时，属性值的顺序为：:

background-color
background-image
background-repeat
background-attachment
background-position
以上属性无需全部使用，你可以按照页面的实际需要使用. 

```




# CSS 文本格式

```shell
# 文本颜色
颜色属性被用来设置文字的颜色。

颜色是通过CSS最经常的指定：

十六进制值 - 如: ＃FF0000
一个RGB值 - 如: RGB(255,0,0)
颜色的名称 - 如: red
参阅 CSS 颜色值 查看完整的颜色值。 : https://www.runoob.com/cssref/css-colors-legal.html  

一个网页的背景颜色是指在主体内的选择：

实例
body {color:red;}
h1 {color:#00ff00;}
h2 {color:rgb(255,0,0);}

Remark 对于W3C标准的CSS：如果你定义了颜色属性，你还必须定义背景色属性。


# 文本的对齐方式
文本排列属性是用来设置文本的水平对齐方式。

文本可居中或对齐到左或右,两端对齐.

当text-align设置为"justify"，每一行被展开为宽度相等，左，右外边距是对齐（如杂志和报纸）。

实例
h1 {text-align:center;}
p.date {text-align:right;}
p.main {text-align:justify;}


# 文本修饰
text-decoration 属性用来设置或删除文本的装饰。

从设计的角度看 text-decoration属性主要是用来删除链接的下划线：

实例
a {text-decoration:none;}

## 也可以这样装饰文字：

实例
h1 {text-decoration:overline;}
h2 {text-decoration:line-through;}
h3 {text-decoration:underline;}
https://www.runoob.com/try/try.php?filename=trycss_text-decoration  

Remark 我们不建议强调指出不是链接的文本，因为这常常混淆用户。

# 文本转换
文本转换属性是用来指定在一个文本中的大写和小写字母。

可用于所有字句变成大写或小写字母，或每个单词的首字母大写。

实例
p.uppercase {text-transform:uppercase;}
p.lowercase {text-transform:lowercase;}
p.capitalize {text-transform:capitalize;}
https://www.runoob.com/try/try.php?filename=trycss_text-transform  

# 文本缩进
文本缩进属性是用来指定文本的第一行的缩进。

实例
p {text-indent:50px;}

# 更多实例 : https://www.runoob.com/css/css-text.html  

指定字符之间的空间
这个例子演示了如何增加或减少字符之间的空间。

指定行与行之间的空间
这个例子演示了如何指定在一个段落中行之间的空间

设置元素的文本方向
这个例子演示了如何改变元素的文本方向。

增加单词之间的空白空间
这个例子演示了如何增加一个段落中的单词之间的空白空间。

在元素内禁用文字不换行
这个例子演示了如何禁用一个元素内的文字不换行。

垂直对齐图像
这个例子演示了如何设置文本的垂直对齐图像。

添加文本阴影
这个例子演示了如何设置文本阴影。


```

# CSS 字体
CSS字体属性定义字体，加粗，大小，文字样式。

```shell
# CSS字型
在CSS中，有两种类型的字体系列名称：

通用字体系列 - 拥有相似外观的字体系统组合（如 "Serif" 或 "Monospace"）
特定字体系列 - 一个特定的字体系列（如 "Times" 或 "Courier"）


# 字体系列
font-family 属性设置文本的字体系列。

font-family 属性应该设置几个字体名称作为一种"后备"机制，如果浏览器不支持第一种字体，他将尝试下一种字体。

注意: 如果字体系列的名称超过一个字，它必须用引号，如Font Family："宋体"。

多个字体系列是用一个逗号分隔指明：

实例
p{font-family:"Times New Roman", Times, serif;}

对于较常用的字体组合，看看我们的 Web安全字体组合。 https://www.runoob.com/cssref/css-websafe-fonts.html  

# 字体样式
主要是用于指定斜体文字的字体样式属性。

这个属性有三个值：

正常 - 正常显示文本
斜体 - 以斜体字显示的文字
倾斜的文字 - 文字向一边倾斜（和斜体非常类似，但不太支持）
实例
p.normal {font-style:normal;}
p.italic {font-style:italic;}
p.oblique {font-style:oblique;}

# 字体大小
font-size 属性设置文本的大小。

能否管理文字的大小，在网页设计中是非常重要的。但是，你不能通过调整字体大小使段落看上去像标题，或者使标题看上去像段落。

请务必使用正确的HTML标签，就<h1> - <h6>表示标题和<p>表示段落：

字体大小的值可以是绝对或相对的大小。

绝对大小：

设置一个指定大小的文本
不允许用户在所有浏览器中改变文本大小
确定了输出的物理尺寸时绝对大小很有用
相对大小：

相对于周围的元素来设置大小
允许用户在浏览器中改变文字大小
Remark 如果你不指定一个字体的大小，默认大小和普通文本段落一样，是16像素（16px=1em）。



# 设置字体大小像素
设置文字的大小与像素，让您完全控制文字大小：

实例
h1 {font-size:40px;}
h2 {font-size:30px;}
p {font-size:14px;}
https://www.runoob.com/try/try.php?filename=trycss_font-size_px  

上面的例子可以在 Internet Explorer 9, Firefox, Chrome, Opera, 和 Safari 中通过缩放浏览器调整文本大小。

虽然可以通过浏览器的缩放工具调整文本大小，但是，这种调整是整个页面，而不仅仅是文本 


# 用em来设置字体大小
为了避免Internet Explorer 中无法调整文本的问题，许多开发者使用 em 单位代替像素。

em的尺寸单位由W3C建议。

1em和当前字体大小相等。在浏览器中默认的文字大小是16px。

因此，1em的默认大小是16px。可以通过下面这个公式将像素转换为em：px/16=em

实例
h1 {font-size:2.5em;} /* 40px/16=2.5em */
h2 {font-size:1.875em;} /* 30px/16=1.875em */
p {font-size:0.875em;} /* 14px/16=0.875em */
https://www.runoob.com/try/try.php?filename=trycss_font-size_em  

在上面的例子，em的文字大小是与前面的例子中像素一样。不过，如果使用 em 单位，则可以在所有浏览器中调整文本大小。

不幸的是，仍然是IE浏览器的问题。调整文本的大小时，会比正常的尺寸更大或更小。 

# 使用百分比和EM组合
在所有浏览器的解决方案中，设置 <body>元素的默认字体大小的是百分比：

实例
body {font-size:100%;}
h1 {font-size:2.5em;}
h2 {font-size:1.875em;}
p {font-size:0.875em;}
https://www.runoob.com/try/try.php?filename=trycss_font-size_percent_em  

我们的代码非常有效。在所有浏览器中，可以显示相同的文本大小，并允许所有浏览器缩放文本的大小。


# 更多实例 : https://www.runoob.com/css/css-font.html 
设置字体加粗
这个例子演示了如何设置字体的加粗。

可以设置字体的转变
这个例子演示了如何设置字体的转变。

在一个声明中的所有字体属性
本例演示如何使用简写属性将字体属性设置在一个声明之内。


```


# CSS 链接
不同的链接可以有不同的样式。 
```shell
# 链接样式
链接的样式，可以用任何CSS属性（如颜色，字体，背景等）。

特别的链接，可以有不同的样式，这取决于他们是什么状态。

这四个链接状态是：

a:link - 正常，未访问过的链接
a:visited - 用户已访问过的链接
a:hover - 当用户鼠标放在链接上时
a:active - 链接被点击的那一刻
实例
a:link {color:#000000;}      /* 未访问链接*/
a:visited {color:#00FF00;}  /* 已访问链接 */
a:hover {color:#FF00FF;}  /* 鼠标移动到链接上 */
a:active {color:#0000FF;}  /* 鼠标点击时 */
https://www.runoob.com/try/try.php?filename=trycss_link  

当设置为若干链路状态的样式，也有一些顺序规则：

a:hover 必须跟在 a:link 和 a:visited后面
a:active 必须跟在 a:hover后面

# 常见的链接样式
根据上述链接的颜色变化的例子，看它是在什么状态。

让我们通过一些其他常见的方式转到链接样式：

## 文本修饰
text-decoration 属性主要用于删除链接中的下划线：

实例
a:link {text-decoration:none;}
a:visited {text-decoration:none;}
a:hover {text-decoration:underline;}
a:active {text-decoration:underline;}
https://www.runoob.com/try/try.php?filename=trycss_link_decoration 


## 背景颜色
背景颜色属性指定链接背景色：

实例
a:link {background-color:#B2FF99;}
a:visited {background-color:#FFFF85;}
a:hover {background-color:#FF704D;}
a:active {background-color:#FF704D;}
https://www.runoob.com/try/try.php?filename=trycss_link_background  

# 更多实例
添加不同样式的超链接
这个例子演示了如何为超链接添加其他样式。

高级 - 创建链接框
这个例子演示了一个更高级的例子，我们结合若干CSS属性显示为方框。
https://www.runoob.com/css/css-link.html  

```



# CSS 列表
CSS 列表属性作用如下：

设置不同的列表项标记为有序列表
设置不同的列表项标记为无序列表
设置列表项标记为图像

```shell
# 列表
在 HTML中，有两种类型的列表：

无序列表 ul - 列表项标记用特殊图形（如小黑点、小方框等）
有序列表 ol - 列表项的标记有数字或字母
使用 CSS，可以列出进一步的样式，并可用图像作列表项标记。



# 不同的列表项标记
list-style-type属性指定列表项标记的类型是：

实例
ul.a {list-style-type: circle;}
ul.b {list-style-type: square;}
 
ol.c {list-style-type: upper-roman;}
ol.d {list-style-type: lower-alpha;}
https://www.runoob.com/try/try.php?filename=trycss_list-style-type_ex  

一些值是无序列表，以及有些是有序列表。



# 作为列表项标记的图像
要指定列表项标记的图像，使用列表样式图像属性：

实例
ul
{
    list-style-image: url('sqpurple.gif');
}
https://www.runoob.com/try/try.php?filename=trycss_list-style-image

上面的例子在所有浏览器中显示并不相同，IE 和 Opera 显示图像标记比火狐，Chrome 和 Safari更高一点点。

如果你想在所有的浏览器放置同样的形象标志，就应使用浏览器兼容性解决方案，过程如下
https://www.runoob.com/css/css-list.html  


# 列表 - 简写属性
在单个属性中可以指定所有的列表属性。这就是所谓的简写属性。

为列表使用简写属性，列表样式属性设置如下：

实例
ul
{
    list-style: square url("sqpurple.gif");
}

可以按顺序设置如下属性：
list-style-type
list-style-position (有关说明，请参见下面的CSS属性表)
list-style-image
如果上述值丢失一个，其余仍在指定的顺序，就没关系。

# 移除默认设置
list-style-type:none 属性可以用于移除小标记。默认情况下列表 <ul> 或 <ol> 还设置了内边距和外边距，可使用 margin:0 和 padding:0 来移除:

实例
ul {
  list-style-type: none;
  margin: 0;
  padding: 0;
}


# 更多实例: https://www.runoob.com/css/css-list.html  
所有不同的列表项标记
这个例子演示了所有不同的 CSS 列表项标记。

```

# CSS 表格
https://www.runoob.com/css/css-table.html  
使用 CSS 可以使 HTML 表格更美观。


```shell
# 表格边框
指定CSS表格边框，使用border属性。

下面的例子指定了一个表格的Th和TD元素的黑色边框：

实例
table, th, td
{
    border: 1px solid black;
}

请注意，在上面的例子中的表格有双边框。这是因为表和th/ td元素有独立的边界。

为了显示一个表的单个边框，使用 border-collapse属性。


# 折叠边框
border-collapse 属性设置表格的边框是否被折叠成一个单一的边框或隔开：

实例
table
{
    border-collapse:collapse;
}
table,th, td
{
    border: 1px solid black;
}


# 表格宽度和高度
Width和height属性定义表格的宽度和高度。

下面的例子是设置100％的宽度，50像素的th元素的高度的表格：

实例
table 
{
    width:100%;
}
th
{
    height:50px;
}

# 表格文字对齐
表格中的文本对齐和垂直对齐属性。

## text-align属性设置水平对齐方式，向左，右，或中心：

实例
td
{
    text-align:right;
}

## 垂直对齐属性设置垂直对齐，比如顶部，底部或中间：

实例
td
{
    height:50px;
    vertical-align:bottom;
}


# 表格填充
如需控制边框和表格内容之间的间距，应使用td和th元素的填充属性：

实例
td
{
    padding:15px;
}


# 表格颜色
下面的例子指定边框的颜色，和th元素的文本和背景颜色：

实例
table, td, th
{
    border:1px solid green;
}
th
{
    background-color:green;
    color:white;
}


# 更多实例 : https://www.runoob.com/css/css-table.html  
制作一个个性表格
这个例子演示了如何创建一个个性的表格。

设置表格标题的位置
这个例子演示了如何定位表格标题。



```

# 学习至： 
https://www.runoob.com/css/css-boxmodel.html  



# END  



