# 000python

# 教程--廖雪峰  
廖雪峰的官方网站：  https://www.liaoxuefeng.com/wiki/1016959663602400  

# 基本知识  
## 直接运行python 文件
```shell
# 有同学问，能不能像.exe文件那样直接运行.py文件呢？在Windows上是不行的，但是，在Mac和Linux上是可以的，方法是在.py文件的第一行加上一个特殊的注释： 
#!/usr/bin/env python3
print('hello, world')
# 然后，通过命令给hello.py以执行权限：
$ chmod a+x hello.py
就可以直接运行hello.py了，比如在Mac下运行：
./hello.py
```

## print 接受多个字符串
```shell
>>> print('The quick brown fox', 'jumps over', 'the lazy dog')
The quick brown fox jumps over the lazy dog
>>> print('100 + 200 =', 100 + 200)
100 + 200 = 300
# print()会依次打印每个字符串，遇到逗号“,”会输出一个空格，因此，输出的字符串是这样拼起来的
```

## input 输入
```shell
>>> name=input()
lxk
>>> name
'lxk'
>>> print(name); 
lxk
```

## 数据类型
```shell
# 整数  
Python可以处理任意大小的整数，当然包括负整数，在程序中的表示方法和数学上的写法一模一样，例如：1，100，-8080，0，等等。  

计算机由于使用二进制，所以，有时候用十六进制表示整数比较方便，十六进制用0x前缀和0-9，a-f表示，例如：0xff00，0xa5b4c3d2，等等。  

对于很大的数，例如10000000000，很难数清楚0的个数。Python允许在数字中间以_分隔，因此，写成10_000_000_000和10000000000是完全一样的。十六进制数也可以写成0xa1b2_c3d4。    

# 浮点数
浮点数可以用数学写法，如1.23，3.14，-9.01，等等。但是对于很大或很小的浮点数，就必须用科学计数法表示，把10用e替代，1.23x109就是1.23e9，或者12.3e8，0.000012可以写成1.2e-5，等等。  
整数和浮点数在计算机内部存储的方式是不同的，整数运算永远是精确的（除法难道也是精确的？是的！），而浮点数运算则可能会有四舍五入的误差。

# 字符串  
字符串是以单引号'或双引号"括起来的任意文本，比如'abc'，"xyz"等等。  
如果'本身也是一个字符，那就可以用""括起来，比如"I'm OK"  
转义字符\可以转义很多字符，比如\n表示换行，\t表示制表符，字符\本身也要转义，所以\\表示的字符就是\  
如果字符串里面有很多字符都需要转义，就需要加很多\，为了简化，Python还允许用r''表示''内部的字符串默认不转义， 例如：
>>> print('\\\t\\')
\       \
>>> print(r'\\\t\\')
\\\t\\

如果字符串内部有很多换行，用\n写在一行里不好阅读，为了简化，Python允许用'''...'''的格式表示多行内容， 例如：
print('''line1
line2
line3''')

# 布尔值
布尔值和布尔代数的表示完全一致，一个布尔值只有True、False两种值，要么是True，要么是False，在Python中，可以直接用True、False表示布尔值（请注意大小写）  
布尔值可以用and、or和not运算。
and运算是与运算，只有所有都为True，and运算结果才是True
or运算是或运算，只要其中有一个为True，or运算结果就是True
not运算是非运算，它是一个单目运算符，把True变成False，False变成True
>>> True
True
>>> False
False
>>> 3 > 2
True
>>> 3 > 5
False
>>> not 1>2  
True
>>> not True 
False
>>> True and False
False
>>> True or False  
True 

# 空值
空值是Python里一个特殊的值，用None表示。None不能理解为0，因为0是有意义的，而None是一个特殊的空值  

```

## 变量  
```shell
# 变量命名规则
变量在程序中就是用一个变量名表示了，变量名必须是大小写英文、数字和_的组合，且不能用数字开头  
## 变量a是一个整数。
a = 1
## 变量t_007是一个字符串。
t_007 = 'T007'
##变量Answer是一个布尔值True
Answer = True

# 动态语言和静态语言
## 动态语言（弱类型语言）是运行时才确定数据类型的语言，变量在使用之前无需申明类型，通常变量的值是被赋值的那个值的类型。比如Php、Asp、JavaScript、Python、Perl等等， 例如python中：可以把任意数据类型赋值给变量，同一个变量可以反复赋值，而且可以是不同类型的变量
a = 123 # a是整数
print(a)
a = 'ABC' # a变为字符串
print(a)

## 静态语言（强类型语言）是编译时变量的数据类型就可以确定的语言，大多数静态语言要求在使用变量之前必须生命数据类型。比如Java、C、C++、C#等。例如C语言中：
int a = 123; // a是整数类型变量
a = "ABC"; // 错误：不能把字符串赋给整型变量

```

## 常量  
```shell
所谓常量就是不能变的变量，比如常用的数学常数π就是一个常量。在Python中，通常用全部大写的变量名表示常量：
PI = 3.14159265359
但事实上PI仍然是一个变量，Python根本没有任何机制保证PI不会被改变，所以，用全部大写的变量名表示常量只是一个习惯上的用法，如果你一定要改变变量PI的值，也没人能拦住你。
```

## python中的除法
```shell
# 第一种除法： / 除法计算结果是浮点数，即使是两个整数恰好整除，结果也是浮点数
>>> 10 / 3
3.3333333333333335
>>> 9 / 3
3.0
# 第二种除法： //，称为地板除，两个整数的除法仍然是整数
>>> 10 // 3
3

```
## 导入模块
```shell
# 这段代码会显示没有：No module named 'requests'
import requests
# 方法一：在命令行中输入
pip install requests
# 方法二： 在pycharm中的软件包中搜索，然后导入

```





# 教程--小甲鱼 -- begin  --------------------------------------------------------------------------------------------------
https://fishc.com.cn/forum.php?mod=forumdisplay&fid=360&filter=typeid&typeid=769  

# 教程--小甲鱼 
## Python3代码样式指导手册：  
https://fishc.com.cn/thread-139746-1-1.html  
```shell
Guido 的一个重要观点是: 代码被读的次数远多于被写的次数。  

# 缩进：
## 1. 采用垂直对齐时第一行不应该有参数
foo = long_function_name(var_one, var_two,
    var_three, var_four)
## 更正： 同开始分界符(左括号)对齐
foo = long_function_name(var_one, var_two,
                         var_three, var_four)

## 2. 续行并没有被区分开，因此需要再缩进一级
def long_function_name(
    var_one, var_two, var_three,
    var_four):
    print(var_one)
## 更正： # 续行多缩进一级以同其他代码区别
def long_function_name(
        var_one, var_two, var_three,
        var_four):
    print(var_one)

# Tab还是空格？
推荐使用空格来进行缩进。
tab 应该只在现有代码已经使用 tab 进行缩进的情况下使用，以便和现有代码保持一致。
Python3 不允许 tab 和空格混合使用。
Python2 的代码若有 tab 和空格混合使用的情况，应该把 tab 全部转换为只有空格。
当使用命令行运行Python 2时，使用 -t 选项，会出现非法混用 tab 和空格的警告。
当使用 -tt 选项时，这些警告会变成错误。
强烈推荐使用这些选项！

# 每行最大长度
将所有行都限制在 79 个字符长度以内。
推荐的换行方式是利用 Python 圆括号、方括号和花括号中的隐式续行（implied line continuation）。
很长的行可以通过在括号内换行来分成多行。
最好加上反斜杠来区别续行。
有时只能使用反斜杠。例如，较长的多个 with  语句不能采用隐式续行，只能接受反斜杠表示换行：
with open('/path/to/some/file/you/want/to/read') as file_1, \
     open('/path/to/some/file/being/written', 'w') as file_2:
    file_2.write(file_1.read())

# 二元运算符之前还是之后换行？
## 错误的例子：运算符远离操作数
income = (gross_wages +
          taxable_interest +
          (dividends - qualified_dividends) -
          ira_deduction -
          student_loan_interest)

## 遵循数学传统，代码可读性更高：
## 正确的例子：更容易匹配运算符与操作数
income = (gross_wages
          + taxable_interest
          + (dividends - qualified_dividends)
          - ira_deduction
          - student_loan_interest)

# 空行
使用 2 个空行来分隔最外层的函数（function）和类（class）定义。
使用 1 个空行来分隔类中的方法（method）定义。
可以使用额外的空行（尽量少）来分隔一组相关的函数。
在一系列相关的仅占一行的函数之间，空行也可以被省略（比如一组虚函数定义）。


# 源文件编码
Python 关键发行版中的代码应该一直使用 UTF-8（Python2 中使用 ASCII）。
使用 ASCII（Python2）或者UTF-8（Python3）的文件不应该添加编码声明。
在标准库中，那些用作测试的代码，注释，文档字符串需要提及作者名字而不得不使用非ASCII字符时，才能使用非默认的编码。
否则，在字符串文字中包括非 ASCII 数据时，推荐使用 \x ， \u ， \U 或 \N 等转义符。

# 导入
应该按照下面的顺序分组来写：
标准库imports
相关第三方imports
本地应用/库的特定imports

# 模块级别的 __ 命名
模块中的“双下滑线”（变量名以两个下划线开头，两个下划线结尾）变量。
比如 __all__ ， __author__ ， __version__ 等，应该写在文档字符串之后，除了 form __future__ 导入的任何其它类型的引用语句之前。
Python 要求模块中 __future__ 的导入必须出现在除文档字符串之外的任何其他代码之前：
"""模块的例子

模块的功能
"""

from __future__ import barry_as_FLUFL

__all__ = ['a', 'b', 'c']
__version__ = '0.1'
__author__ = 'Cardinal Biggles'

import os
import sys

# 字符串引用
在 Python 中表示字符串时，不管用单引号还是双引号都是一样的。
但是不推荐混用。
最好选择一种规则并坚持使用。
当字符串中包含单引号时，采用双引号来表示字符串，反之也是一样，这样可以避免使用反斜杠，代码也更易读。
对于三引号表示的字符串，使用双引号字符来表示，这样可以和 PEP 257 的文档字符串规则保持一致。


# 未完， 待续： https://fishc.com.cn/thread-139746-1-1.html


```


## print()  -- BIF 
```shell
# 函数概述： print() 函数用于打印输出一个对象。  
# 函数原型： print(*objects, sep=' ', end='\n', file=sys.stdout, flush=False)

# 参数解析： 
参数	含义
objects	指定待输出的对象，多个对象之间使用英文逗号（,）进行分隔
sep	指定输出多个对象之间的分隔符，默认是空格（' '）
end	指定最后的结束符，默认是换行符（'\n'）
file	指定要写入的文件对象，默认是标准输出流（sys.stdout）
flush	指定是否强制刷新输出流，默认是不刷新（False）  
注：如果指定 sep, end, file 和 flush 参数，需要使用关键字参数（即通过指定参数名来赋值）。

# 基本用法：
>>> print("小甲鱼", 250)
小甲鱼 250
>>> print("小甲鱼", 250, sep='=', end='吗？')
小甲鱼=250吗？
>>> print("小", "甲", "鱼", sep='250')
小250甲250鱼
>>> x = 2
>>> y = 3
>>> print(x, "x", y, "=", x * y)
2 x 3 = 6
>>> print('I','fishc',sep='love',end='.com\n')
Ilovefishc.com
>>> print("我","你",sep="爱",end="!\n")
我爱你!
>>> print('i ','u ',sep='love ',end='forever\n') 



# 使用 print 写文件  
file 参数可以用 print 写入文件，类似于 write，如
f = open('1234.txt', 'w')
print('小甲鱼', file = f)
f.close()

flush 参数在这里就起作用了。
如果是 False，则 close 文件时才真正写入，如果是 True，则立即写入。

```



## Python之禅  
```shell
>>> import this
The Zen of Python, by Tim Peters

Beautiful is better than ugly.
Explicit is better than implicit.
Simple is better than complex.
Complex is better than complicated.
Flat is better than nested.
Sparse is better than dense.
Readability counts.
Special cases aren't special enough to break the rules.
Although practicality beats purity.
Errors should never pass silently.
Unless explicitly silenced.
In the face of ambiguity, refuse the temptation to guess.
There should be one-- and preferably only one --obvious way to do it.
Although that way may not be obvious at first unless you're Dutch.
Now is better than never.
Although never is often better than *right* now.
If the implementation is hard to explain, it's a bad idea.
If the implementation is easy to explain, it may be a good idea.
Namespaces are one honking great idea -- let's do more of those!

# 翻译：
优美胜于丑陋（Beautiful is better than ugly）—— 编写的代码应该尽可能地美观、清晰，因为优雅的代码更容易让人理解。
明了胜于隐晦（Explicit is better than implicit）—— 代码应该明确无误，不要让读者去猜测代码的意图，让一切都清晰明了。
简单胜于复杂（Simple is better than complex）—— 如果可能，选择最简单的解决方案。复杂的代码更容易出错，更难以维护。
复杂胜于凌乱（Complex is better than complicated）—— 如果无法避免复杂，那么代码之间也不能有凌乱的关系，要保持接口的简洁。
扁平胜于嵌套（Flat is better than nested）—— 尽量避免深层次的嵌套，太多层次的嵌套会使代码难以理解和维护，程序的执行效率也会变得很差。
留白胜于密集（Sparse is better than dense）—— 在代码中适当地使用空行，可以提高代码的可读性。
可读性很重要（Readability counts）—— 代码最终还是需要人们来阅读和维护的，所以可读性极其重要。写代码时，要考虑到其他人（包括未来的自己）是否可以轻松理解这段代码。
特例不足以打破规则（Special cases aren't special enough to break the rules）—— 尽管实用性很重要，但是我们应该尽量遵循既定的最佳实践。
实用胜于纯粹（Practicality beats purity）—— 代码不必总是追求完美，实用性比完美更重要。如果需要，可以接受一些必要的妥协。
错误不应该被忽视（Errors should never pass silently）—— 我们应该处理所有预见到的错误，即使是不可预见的错误，也不应该被无视。
除非明确需要，否则应该拒绝猜测（In the face of ambiguity, refuse the temptation to guess）—— 如果代码的意图不清楚，不要试图去猜测，应该寻求明确的解决方案。
应该有且只有一种显而易见的解决方案（There should be one-- and preferably only one --obvious way to do it）—— 代码应该有一种明确的解决方案，使得代码更易于理解和维护。
虽然那种解决方案在开始时可能并不明显，除非你是荷兰人（Although that way may not be obvious at first unless you're Dutch）—— 这是对 Python 的创始人，荷兰人 Guido van Rossum 的友好调侃。
现在动手总比永远不动手好（Now is better than never）—— 不要因为害怕出错就什么都不做，只要开始行动，就是好事一件。
虽然现在动手比永远不动手要好，但不假思索地动手却还不如不动手（Although never is often better than right now）—— 但是，我们也不能盲目行动。有时候，思考更好的解决方案，或者花更多的时间来理解问题，可能会比不经琢磨就立即行动更好。
如果你的程序实现难以解释，那么它将是一个糟糕的想法（If the implementation is hard to explain, it's a bad idea）—— 如果你无法清楚地解释你的代码是如何工作的，那么说明你的程序设计有问题。
如果你的程序实现轻易解释，那么它将是一个优秀的想法（If the implementation is easy to explain, it may be a good idea）—— 反过来，如果你可以清楚、简洁地解释你的代码，那么你的程序设计是非常棒的。
命名空间是一个绝妙的设计 —— 我们应该多利用它（Namespaces are one honking great idea -- let's do more of those）—— 命名空间可以帮助我们组织代码，并避免命名冲突。

Python 之禅，或称为 PEP 20，是 Python 社区的一种编程理念和指导原则。
它提供了一种对编写高质量 Python 代码的指导思想和愿景。
它主张的不仅仅是编程技巧，更是一种编程哲学，是一种对美、对简洁、对清晰的追求，值得大家借鉴学习。

```

## PyPI
Python的后台就是PyPI  
PyPI是一个拥有成干上万第三方模块的地方  
如果把Python比作Tony Stark  
那么PyPI就是lron man的钢铁战衣  



## py 的 IDLE 使用
```shell
# py 的 IDLE 使用
- 打开 IDLE，直接输入代码使用，如： print("hello world") 
- 打开 IDLE，在菜单栏中依次点击 File->New File，或者直接使用快捷键 Ctrl+N, 请在 IDLE 的编辑器模式中输入代码, 接着依次点击菜单栏的 Run->Run Module，或者直接摁下快捷键 F5 也是可以的。


# py 中的内置函数  
Python 提供了很多内置函数，以对付各种不同的需求。
在 IDLE 的交互模式下，输入 dir(__builtins__)，可以看到它们：
>>> dir(__builtins__)
['ArithmeticError', 'AssertionError', 'AttributeError', 'BaseException', 'BlockingIOError', 'BrokenPipeError', 'BufferError', 'BytesWarning', 'ChildProcessError', 'ConnectionAbortedError', 'ConnectionError', 'ConnectionRefusedError', 'ConnectionResetError', 'DeprecationWarning', 'EOFError', 'Ellipsis', 'EnvironmentError', 'Exception', 'False', 'FileExistsError', 'FileNotFoundError', 'FloatingPointError', 'FutureWarning', 'GeneratorExit', 'IOError', 'ImportError', 'ImportWarning', 'IndentationError', 'IndexError', 'InterruptedError', 'IsADirectoryError', 'KeyError', 'KeyboardInterrupt', 'LookupError', 'MemoryError', 'ModuleNotFoundError', 'NameError', 'None', 'NotADirectoryError', 'NotImplemented', 'NotImplementedError', 'OSError', 'OverflowError', 'PendingDeprecationWarning', 'PermissionError', 'ProcessLookupError', 'RecursionError', 'ReferenceError', 'ResourceWarning', 'RuntimeError', 'RuntimeWarning', 'StopAsyncIteration', 'StopIteration', 'SyntaxError', 'SyntaxWarning', 'SystemError', 'SystemExit', 'TabError', 'TimeoutError', 'True', 'TypeError', 'UnboundLocalError', 'UnicodeDecodeError', 'UnicodeEncodeError', 'UnicodeError', 'UnicodeTranslateError', 'UnicodeWarning', 'UserWarning', 'ValueError', 'Warning', 'WindowsError', 'ZeroDivisionError', '__build_class__', '__debug__', '__doc__', '__import__', '__loader__', '__name__', '__package__', '__spec__', 'abs', 'all', 'any', 'ascii', 'bin', 'bool', 'breakpoint', 'bytearray', 'bytes', 'callable', 'chr', 'classmethod', 'compile', 'complex', 'copyright', 'credits', 'delattr', 'dict', 'dir', 'divmod', 'enumerate', 'eval', 'exec', 'exit', 'filter', 'float', 'format', 'frozenset', 'getattr', 'globals', 'hasattr', 'hash', 'help', 'hex', 'id', 'input', 'int', 'isinstance', 'issubclass', 'iter', 'len', 'license', 'list', 'locals', 'map', 'max', 'memoryview', 'min', 'next', 'object', 'oct', 'open', 'ord', 'pow', 'print', 'property', 'quit', 'range', 'repr', 'reversed', 'round', 'set', 'setattr', 'slice', 'sorted', 'staticmethod', 'str', 'sum', 'super', 'tuple', 'type', 'vars', 'zip']

```

## input() -- BIF
```sh
# 函数解析：
input()  函数从标准输入流中读取一行数据， 将其转换为字符串（末尾的换行符将被舍弃）后并返回。
如果读取到 EOF，则抛出 EOFError 异常。  

# 函数原型：
input([prompt], /)  
prompt	如果指定该参数，那么将在标准输出中将参数的内容显示出来（末尾不会自动追加换行）

# 返回值：
该函数将读取到的输入转换成字符串（末尾的换行符将被舍弃）并返回。

```

## 变量和字符串
```shell
# 变量名
变量名是区分大小写的，也就是 FishC、fishc 在 Python 看来，是两个完全不同的名字。
勇于尝试的同学可能会发现，Python3 还支持中文字符作为变量名，是的：>>> 幸运数 = 588

# 字符串（Single quotes）
Python 字符串的编写方式多种多样，主要有：Single quotes、Double quotes 还有 Triple quoted 三种形式。
## 1. Single quotes 是使用一对单引号将文本包含起来：>>> print('I love China')
## 2. Double quotes 就是使用一对双引号将文本包含起来：>>> print("I love FishC")

## 3. 三重引号（triple quotes）是一种表示多行字符串的方法。它允许您创建包含多行文本的字符串，并且可以跨越多行而无需使用转义字符。通常使用三重引号来定义长字符串、文档字符串（docstrings）或者多行注释。
###  使用单引号
multi_line_string = '''This is a
multi-line
string using
single quotes.'''
print(multi_line_string)
###  使用双引号
multi_line_string = """This is a
multi-line
string using
double quotes."""
print(multi_line_string)


# 原始字符串
使用原始字符串，可以避免反斜杠（\）被当作转义字符解析：
>>> 未使用原始字符串
>>> print("D:\three\two\one\now")
D:        hree        wo\one
ow
>>> # 使用原始字符串
>>> print(r"D:\three\two\one\now")
D:\three\two\one\now


# 字符串加法和乘法
## 字符串拼接： >>> '520' + '1314'
## 字符串重复复制： 
>>> print("hello"*3) 
hellohellohello

# python中and， &， && 区别
在 Python 中，and 是逻辑运算符，用于连接两个条件，并且只有当两个条件都为 True 时整个表达式才为 True。
& 是位运算符，用于对两个整数的每个对应位执行按位与操作。
而 && 并不是 Python 中的语法，它是其他编程语言（比如 C、C++、Java 等）中的逻辑运算符，作用与 and 相同。在 Python 中使用 && 会导致语法错误。
所以，在 Python 中，你应该使用 and 来连接逻辑条件，而不是 & 或 &&。

# 转义符
下面的会报错：
>>> print("C:\Users\goodb\Desktop")  
>>> print('''C:\Users\goodb\Desktop''')   
更正：
>>> print("C:\\Users\\goodb\\Desktop")
>>> print(r"C:\Users\goodb\Desktop")
```

## int() -- BIF
```shell
# 函数概述：
int() 用于将指定的值转换成整数。 

# 函数解析：
int() 如果读取到一个无法转换为整数的参数，则抛出 ValueError 的异常。

# 函数原型：
class int([x])
class int(x, base=10)

# 参数解析：
x	指定待转换的数字或字符串
base	指定 x 参数的基数（默认值是 10）
注1：如果不指定参数 x，那么返回整数 0。
注2：如果需要指定 base 参数，则 x 参数的值必须是字符串、字节或者字节数组。

# 返回值：
1. 将 x 参数指定的值转换为整数并返回；
2. 如果不传递任何参数，返回值是 0；
3. 如果传递的是一个浮点数，那么小数点后的数字将被截掉。

# 举例：
>>> # 不传递任何参数
>>> int()
0
>>> # 将字符串转换为整数
>>> int("5201314")
5201314
>>> # 将浮点数转换为整数
>>> int(3.14)
3
>>> # 指定基数为2（二进制）
>>> int("110", 2)
6
>>> # 指定基数为16（十六进制）
>>> int("FF", 16)
255


```

## 比较运算符
```shell
比较运算符会将其左边和右边两个操作数进行比较，如果结果成立，则返回 True，否则返回 False。

== : 判断左右两边是否相等
!= : 判断左右两边是否不相等
is : 判断两个对象的 id 是否相等
is not : 判断两个对象的 id 是否不相等
```


# random -- 生成伪随机数
https://fishc.com.cn/thread-145254-1-1.html  






# 教程--小甲鱼 -- end  --------------------------------------------------------------------------------------------------  



# END  



# test





print(*objects, sep=' ', end='\n', file=sys.stdout, flush=False)
