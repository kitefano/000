
# vscode快捷键
打开默认终端: ```ctrl+[`]```   
新建一个终端：```ctrl+shift+[`]```  

# vscode 中设置  
隐藏文件： 例如想要隐藏`.git`文件，设置中搜索`files.exclude`，然后设置。    



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



# markdown
[markdown使用](https://www.bilibili.com/video/BV1JA411h7Gw/?spm_id_from=333.337.search-card.all.click&vd_source=1b7b5e78fade47ae4d4c4cb7dd302b94)

## 使用技巧
专注写作模式：ctrl+k， 然后按k。  


## 语法
### 行，段
行： 结尾两个空格，另起一行。  
段： 结尾空两格， 另起一行，再空一行。  


# chatgpt
## 插件ChatGPT -- lxk(不好使报错)
安装插件chatgpt。  
获取openai的key，给vscode授权：  
1. https://platform.openai.com/api-keys  
2. 在`API keys`添加key。  
3. 回到vscode， f1， ChatGPT: Bind your own API key， 把复制的key填入。  

## copilot
Copilot免费激活教程方法  
(https://www.bilibili.com/video/BV1pu4y1K7h1/?spm_id_from=autoNext&vd_source=1b7b5e78fade47ae4d4c4cb7dd302b94)  

使用：  
(https://www.youtube.com/watch?v=49nFJJuYIFg)  
(https://www.youtube.com/watch?v=wRsgeBoi2_A)  
(https://www.youtube.com/watch?v=Odmm8CJO8Xw)  



