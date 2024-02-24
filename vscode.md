
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
git config --list  
```
2. 清理代理  
```
git config --global --unset http.proxy  
git config --global --unset https.proxy  
```
3. 设置代理  
```
git config --global http.proxy http://127.0.0.1:10809  
git config --global https.proxy http://127.0.0.1:10809  
```
验证设置代理是否有效：  
```
① Git clone “git上的一个项目试试能不能clone下来。”  
② $ ping github.com  
```
4. 10809在哪里获取  
在vpn中获取。  

## ping 不通github.cm 
以记事本管理员身份打开C:\Windows\System32\drivers\etc\hosts  
添加如下内容：  
```shell
#GitHub Start
140.82.114.4 github.com
140.82.113.4 gist.github.com
185.199.108.153 assets-cdn.github.com
199.232.96.133 raw.githubusercontent.com
199.232.96.133 gist.githubusercontent.com
199.232.96.133 cloud.githubusercontent.com
199.232.96.133 camo.githubusercontent.com
199.232.96.133 avatars.githubusercontent.com 
199.232.96.133 avatars0.githubusercontent.com
199.232.96.133 avatars1.githubusercontent.com
199.232.96.133 avatars2.githubusercontent.com
199.232.96.133 avatars3.githubusercontent.com
199.232.96.133 avatars4.githubusercontent.com
199.232.96.133 avatars5.githubusercontent.com
199.232.96.133 avatars6.githubusercontent.com
199.232.96.133 avatars7.githubusercontent.com
199.232.96.133 avatars8.githubusercontent.com
#GitHub End
```





# markdown
[markdown使用](https://www.bilibili.com/video/BV1JA411h7Gw/?spm_id_from=333.337.search-card.all.click&vd_source=1b7b5e78fade47ae4d4c4cb7dd302b94)

## 使用技巧
专注写作模式：ctrl+k， 然后按k。  


## 语法
### 行，段
行： 结尾两个空格，另起一行。  
段： 结尾空两格， 另起一行，再空一行。  


# codeium
## vscode 中搜索 安装

## clion 中搜索安装 -- 不好使  




# vscode 终端连接 Linux 服务器

## vscode远程连接Linux服务器
(https://zhuanlan.zhihu.com/p/141205262)    

检查是否安装OpenSSH  
Windows10下检查是否已经安装OpenSSH的方法：  
```shell
# 按下快捷键Win + X，选择Windows PoweShell（管理员），输入以下指令：
Get-WindowsCapability -Online | ? Name -like 'OpenSSH*'
# 如果电脑未安装OpenSSH，则State会显示NotPresent
```
如果未安装，则输入指令：  
```shell
Add-WindowsCapability -Online -Name OpenSSH.Client~~~~0.0.1.0  
```
OpenSSH安装成功后，Win+R输入cmd进入终端，输入ssh命令应该得到如下结果：  
```shell
PS C:\Windows\system32> ssh
usage: ssh [-46AaCfGgKkMNnqsTtVvXxYy] [-B bind_interface]
```

安装Remote-SSH  
Remote-SSH是VScode的插件，安装完VScode以后，直接在插件中搜索ssh，即可找到Remote-SSH，点击install安装。  

配置Remote-SSH  
安装完Remote-SSH以后左侧会出现一个远程资源管理的图标，选择SSH Targets，进入config配置文件  
在配置文件中设置服务器信息，输入HostName和User，保存以后左侧会出现对应机器名称。  
```shell
Host alias #随意机器名称
    HostName hostname # 服务器ip地址
    User user # 用户名
```  

设置中搜索“show login terminal”， 勾选Always reveal the SSH login terminal.  

SSH TARGETS下的服务器旁边的按钮纽行连接，弹出让你输入密码   

这里可能会弹出让你选择服务器的平台： 选择linux  

成功连上服务器，点击有右侧的+号创建服务器的终端窗口，可以正常使用了！  (关键点：另起一个终端。)


## 通过 vscode 连接远程 Linux 服务器，上传下载文件
使用ftp  
(https://www.cnblogs.com/biaogejiushibiao/p/9268533.html)  

## 错误处理
1. 如果登录的Linux 机器已经释放了， 重新又建立了一个Linux， 但是ip 没有变，此时需要删除原来机器的key，才能再登录：
```shell
# 删除命令
ssh-keygen -R 123.60.60.85
```






