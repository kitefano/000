

# 静态库使用
例如静态库：spdlog.lib  



# 动态库使用



# COM 组件 
## 官方文档
组件对象模型 (COM)  
(https://learn.microsoft.com/zh-cn/windows/win32/com/component-object-model--com--portal)   

活动模板库 (ATL)   
(https://learn.microsoft.com/zh-cn/cpp/atl/active-template-library-atl-concepts?view=msvc-170)  

 

## com 组件的从 0 到 1 
(https://paper.seebug.org/2030/)   

Windows最小的可独立运行单元是进程，最小的可复用的代码单元为类库，  
所以COM同样存在进程内（In-Process）与进程外（Out-Of-Process）两种实现方式。  
多数情况下，进程外COM组件为一个exe，进程内COM组件为一个dll。  

### 生成头文件：  
使用MIDL编译会生成对应的都文件，根据头文件我们自己实现编程调用    

### COM函数和接口方法 返回值类型  
几乎所有的COM函数和接口方法都返回 HRESULT 类型的值，但HRESULT不是句柄  
HRESULT 是一个32位的标准化错误代码，用于表示函数调用的结果状态。  
HRESULT 的取值范围包括正数、零和负数。一般而言，当函数或方法执行成功时，HRESULT 的值为零（S_OK），  
而当出现错误时，它的值为一个特定的错误代码。  
有一些常见的 HRESULT 值，例如：  
```shell
S_OK (0x00000000): 表示成功。
E_FAIL (0x80004005): 通用失败。
E_NOINTERFACE (0x80004002): 请求的接口不可用。
E_OUTOFMEMORY (0x8007000E): 内存不足。
E_INVALIDARG (0x80070057): 参数无效。
```

### com调用需要的值  
1. CLSID
2. IID
3. 虚函数表
4. 方法签名

GUID 用于在系统中唯一标识一个对象，CLSID(类标识符)是GUID在注册表中的表示，  
用于在注册表中唯一标识一个com类对象。guid在标识接口时称为IID（接口标识符）  

每一个注册的 clsid 表项中都含有一个 InprocServer32 的子项，  
该子项内有映射到该com二进制文件的键值对，操作系统通过该键值对将com二进制文件载入进程。  

InprocServer32表示的是dll的实现路径，LocalServer32表示的是exe的实现路径  


## COM编程攻略--系列  
(https://zhuanlan.zhihu.com/p/121800182)  
(https://gh0st.cn/Binary-Learning/COM%E7%BB%84%E4%BB%B6.html)  





