
# vscode快捷键
打开默认终端: ```ctrl+[`]```   
新建一个终端：```ctrl+shift+[`]```  

# vscode设置  
## 隐藏文件： 
例如想要隐藏`.git`文件，设置中搜索`files.exclude`，然后设置。   
## 设置自定缩放
(https://blog.csdn.net/weixin_42046702/article/details/113801796)  
1. 设置搜索zoom，勾选  
2. 设置中搜索：Font Ligatures， 然后点击"在settings.json中编辑"
```
    "editor.fontLigatures": false, // 在这一句后面加："editor.mouseWheelZoom": true，记得逗号。
    "editor.mouseWheelZoom": true
```
## 代码和控制台有乱码
设置代码中文在控制台输出中文不是乱码：设置搜索encoding，选gb18030


# vscode中git  

## remote命令  
第一次使用的时候要手动绑定一个自己的远程GitHub库：  
```
git remote add origin
eg：
git remote add origin https://github.com/kitefano/huashan
```
然后push，这时候远程仓库里就更新了。  
之后就可以直接push了。  
如果要push别的仓库，则需要重新remote。  

## 不需要上传的文件可以设置不上传
1. 新建一个文件：```.gitignore```  
2. 右键不需要的文件或文件夹，选择“复制相对路径”，把`\`换成`/`, 然后在最前面加个`/`。  
3. 把这个路径放到`.gitignore`文件里。被复制进这个文件的文件会变灰色。  
4. 这样上传就会不上传这些文件了。  

## 设置代理
1. 查看git配置
```
$ git config --list
```
2. 清理代理
```
$ git config --global --unset http.proxy
$ git config --global --unset https.proxy
```
3. 设置代理
```
$ git config --global http.proxy http://127.0.0.1:10809
$ git config --global https.proxy http://127.0.0.1:10809
```
验证设置代理是否有效：
```
① Git clone “git上的一个项目试试能不能clone下来。”
② $ ping github.com
```
4. 10809在哪里获取
在vpn中获取。




# markdown
[markdown使用](https://www.bilibili.com/video/BV1JA411h7Gw/?spm_id_from=333.337.search-card.all.click&vd_source=1b7b5e78fade47ae4d4c4cb7dd302b94)

## 使用技巧
专注写作模式：ctrl+k， 然后按k。  


## 语法
### 行，段
行： 结尾两个空格，另起一行。  
段： 结尾空两格， 另起一行，再空一行。  


# copilot
## Copilot免费激活教程方法  
(https://www.bilibili.com/video/BV1pu4y1K7h1/?spm_id_from=autoNext&vd_source=1b7b5e78fade47ae4d4c4cb7dd302b94)  
内容：  
copilot激活用的工具自取即可：https://www.2024ai.xyz  
工具的文档：https://www.kdocs.cn/l/clRGREhjMwEW  
免费的码：https://www.2024ai.xyz/freeCode.html  
一个月的激活码： 20240121JHPXFSYD  
激活的时候VScode要退出GitHub账号  

## 使用：  
(https://www.youtube.com/watch?v=49nFJJuYIFg)  
(https://www.youtube.com/watch?v=wRsgeBoi2_A)  
(https://www.youtube.com/watch?v=Odmm8CJO8Xw)  



