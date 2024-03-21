

# 静态库使用
例如静态库：spdlog.lib  



# 动态库使用



# c#中调用c++的dll库  
https://www.51cto.com/article/762284.html  
在C#中调用C++编写的动态库有以下几种方式：  
## 使用DllImport特性  
https://cloud.tencent.com/developer/article/2055990  
DllImport是System.Runtime.InteropServices命名空间下的一个属性类，因此ASP.NET中要使用DllImport的，必须在先“using System.Runtime.InteropServices;”。  
其功能是提供从非托管DLL导出的函数进行调用所必需的信息。  
DllImport属性应用于方法，要求最少要提供包含入口点的dll的名称。    
```shell
namespace System.Runtime.InteropServices
   {
  
  
  　 [AttributeUsage(AttributeTargets.Method)]
  　 public class DllImportAttribute: System.Attribute
  　 { 
        public DllImportAttribute(string dllName){...}   //定位参数为dllName
        public CallingConvention CallingConvention;      //入口点调用约定
        public CharSet CharSet;                          //入口点采用的字符接
        public string EntryPoint;                        //入口点名称
        public bool ExactSpelling;                       //是否必须与指示的入口点拼写完全一致，默认false
        public bool PreserveSig;                         //方法的签名是被保留还是被转换
        public bool SetLastError;                        //FindLastError方法的返回值保存在这里
        public string Value {get {...}}                     
  　 } 
  }   
说明：
1、DllImport只能放置在方法声明上。
2、DllImport具有单个定位参数：指定包含被导入方法的 dll 名称的 dllName 参数。
3、DllImport具有五个命名参数：
   a、CallingConvention 参数指示入口点的调用约定。如果未指定CallingConvention，则使用默认值CallingConvention.Winapi。
   b、CharSet参数指定用在入口点的字符集。如果未指定CharSet，则使用默认值CharSet.Auto。
   c、EntryPoint参数给出dll中入口点的名称。如果未指定EntryPoint，则使用方法本身的名称。
   d、ExactSpelling参数指示EntryPoint是否必须与指示的入口点的拼写完全匹配。如果未指定ExactSpelling，则使用默认值false。
   e、PreserveSig参数指示方法的签名被保留还是被转换。当签名被转换时，它被转换为一个具有HRESULT返回值和该返回值的一个名为retval的附加输出参数的签名。如果未指定PreserveSig，则使用默认值true。
   f、SetLastError参数指示方法是否保留Win32“上一错误”。如果未指定SetLastError，则使用默认值false。
4、它是一次性属性类。
5、用DllImport属性修饰的方法必须具有extern修饰符。
DllImport的用法示例（是用来写入ini文件的一个win32api）：
 DllImport("kernel32")
 private static extern long WritePrivateProfileString(string section,string key,string val,string filePath);
用此方法调用WinAPI的数据类型对应:DWORD=int或uint,BOOL=bool，预定义常量=enum,结构=struct。

DllImport路径问题：

DllImport会按照顺序自动去寻找的地方： 
1、exe所在目录 
2、System32目录 
3、环境变量目录
 所以只需要你把引用的DLL 拷贝到这三个目录下 就可以不用写路径了。 

web中的，同时也是应用程序中的
后来发现用[DllImport(@"C:\OJ\Bin\Judge.dll")]这样指定DLL的绝对路径就可以正常装载。
这个问题最常出现在使用第三方非托管DLL组件的时候,我的也同样是这时出的问题,Asp.Net Team的官方解决方案如下:
首先需要确认你引用了哪些组件,那些是托管的,哪些是非托管的.托管的很好办,直接被使用的需要引用,间接使用的需要拷贝到bin目录下.非托管的处理会比较麻烦。实际上,你拷贝到bin没有任何帮助,因为CLR会把文件拷贝到一个临时目录下,然后在那运行web,而CLR只会拷贝托管文件,这就是为什么我们明明把非托管的dll放在了bin下却依然提示不能加载模块了。
具体做法如下:
首先我们在服务器上随便找个地方新建一个目录,假如为C:\DLL；
然后,在环境变量中,给Path变量添加这个目录；
最后,把所有的非托管文件都拷贝到C:\DLL中，或者更干脆的把DLL放到system32目录。
对于可以自己部署的应用程序，这样未偿不是一个解决办法，然而，如果我们用的是虚拟空间，我们是没办法把注册PATH变量或者把我们自己的DLL拷到system32目录的。同时我们也不一定知道我们的Dll的物理路径。
DllImport里面只能用字符串常量，而不能够用Server.MapPath(@"~/Bin/Judge.dll")来确定物理路径。

DllImport加载速度慢的问题：

不过，我发现，调用这种"非托管Dll”相当的慢，可能是因为我的方法需要远程验证吧，但是实在是太慢了。经过一翻研究，终于想到了一个完美的解决办法。
首先我们用
[DllImport("kernel32.dll")]
private extern static IntPtr LoadLibrary(String path);
[DllImport("kernel32.dll")]
private extern static IntPtr GetProcAddress(IntPtr lib, String funcName);
[DllImport("kernel32.dll")]
private extern static bool FreeLibrary(IntPtr lib);
分别取得了LoadLibrary和GetProcAddress函数的地址，再通过这两个函数来取得我们的DLL里面的函数。
我们可以先用Server.MapPath(@"~/Bin/Judge.dll")来取得我们的DLL的物理路径，然后再用LoadLibrary进行载入，最后用GetProcAddress取得要用的函数地址。
以下自定义类的代码完成LoadLibrary的装载和函数调用：
public class DllInvoke
    {           
        [DllImport("kernel32.dll")]
        private extern static IntPtr LoadLibrary(String path);
        [DllImport("kernel32.dll")]
        private extern static IntPtr GetProcAddress(IntPtr lib, String funcName);
        [DllImport("kernel32.dll")]
        private extern static bool FreeLibrary(IntPtr lib);
        private IntPtr hLib;
        public DllInvoke(String DLLPath)
        {        
            hLib = LoadLibrary(DLLPath);
        }
        ~DllInvoke()
        {        
            FreeLibrary(hLib);          
        }
        //将要执行的函数转换为委托
        public Delegate Invoke(String APIName,Type t)
        {        
            IntPtr api = GetProcAddress(hLib, APIName);
            return (Delegate)Marshal.GetDelegateForFunctionPointer(api,t);
        }
}
下面代码进行调用
public delegate int Compile(String command, StringBuilder inf);//编译
DllInvoke dll ＝ new DllInvoke(Server.MapPath(@"~/Bin/Judge.dll"));
Compile compile = (Compile)dll.Invoke("Compile", typeof(Compile));
StringBuilder inf;
compile(@“gcc a.c -o a.exe“,inf); //这里就是调用我的DLL里定义的Compile函数


DllImport用法示例：
一 在C#程序设计中使用Win32类库
 常用对应类型：
1、DWORD 是 4 字节的整数，因此我们可以使用 int 或 uint 作为 C# 对应类型。
2、bool 类型与 BOOL 对应。
示例一：调用 Beep() API 来发出声音
Beep() 是在 kernel32.lib 中定义的，在MSDN 中的定义，Beep具有以下原型：
BOOL Beep(DWORD dwFreq, // 声音频率
DWORD dwDuration // 声音持续时间); 
用 C# 编写以下原型：
[DllImport("kernel32.dll")] 
public static extern bool Beep(int frequency, int duration);
示例二：枚举类型和常量
MessageBeep() 是在 user32.lib 中定义的，在MSDN 中的定义，MessageBeep具有以下原型：
BOOL MessageBeep(UINT uType // 声音类型
                  ); 
用C#编写一下原型：
public enum BeepType
{        
   SimpleBeep = -1,
   IconAsterisk = 0x00000040,
   IconExclamation = 0x00000030,
   IconHand = 0x00000010,
   IconQuestion = 0x00000020,
   Ok = 0x00000000,
}
uType 参数实际上接受一组预先定义的常量，对于 uType 参数，使用 enum 类型是合乎情理的。
[DllImport("user32.dll")]
public static extern boolMessageBeep(BeepType beepType); 
示例三：处理结构
有时我需要确定我笔记本的电池状况。Win32 为此提供了电源管理函数，搜索 MSDN 可以找到GetSystemPowerStatus() 函数。
BOOL GetSystemPowerStatus(LPSYSTEM_POWER_STATUS lpSystemPowerStatus);
此函数包含指向某个结构的指针，我们尚未对此进行过处理。要处理结构，我们需要用 C# 定义结构。我们从非托管的定义开始：
typedef struct _SYSTEM_POWER_STATUS {          
   BYTE　 ACLineStatus;
   BYTE　 BatteryFlag;
   BYTE　 BatteryLifePercent;
   BYTE　 Reserved1;
   DWORD　BatteryLifeTime;
   DWORD　BatteryFullLifeTime;
} SYSTEM_POWER_STATUS, *LPSYSTEM_POWER_STATUS;
然后，通过用 C# 类型代替 C 类型来得到 C# 版本。
struct SystemPowerStatus
{          
  byte ACLineStatus;
  byte batteryFlag;
  byte batteryLifePercent;
  byte reserved1;
  int batteryLifeTime;
  int batteryFullLifeTime;
}
    这样，就可以方便地编写出 C# 原型：
    [DllImport("kernel32.dll")]
    public static extern bool GetSystemPowerStatus(ref SystemPowerStatus systemPowerStatus);
在此原型中，我们用“ref”指明将传递结构指针而不是结构值。这是处理通过指针传递的结构的一般方法。
此函数运行良好，但是最好将 ACLineStatus 和 batteryFlag 字段定义为 enum：
enum ACLineStatus: byte
{          
   Offline = 0,
   Online = 1,
   Unknown = 255,
}
enum BatteryFlag: byte
{          
   High = 1,
   Low = 2,
   Critical = 4,
   Charging = 8,
   NoSystemBattery = 128,
   Unknown = 255,
}
请注意，由于结构的字段是一些字节，因此我们使用 byte 作为该 enum 的基本类型。
二 C# 中调用C++代码
int 类型
[DllImport(“MyDLL.dll")] 
public static extern int mySum (int a1,int b1);    //返回个int 类型
extern “C” __declspec(dllexport)  int WINAPI mySum(int a2,int b2)    //DLL中申明
{ 
    //a2 b2不能改变a1 b1
    //a2=..
    //b2=...
 return a+b;
}
//参数传递int类型 
public static extern int mySum (ref int a1,ref int b1); 
//DLL中申明 
extern “C” __declspec(dllexport)  int WINAPI mySum(int *a2,int *b2) 
{ 
   //可以改变 a1, b1
   *a2=...
   *b2=...
   return a+b; 
} 
DLL 需传入char *类型 
[DllImport(“MyDLL.dll")] 
//传入值
public static extern int mySum (string  astr1,string bstr1); 
//DLL中申明 
extern “C” __declspec(dllexport)  int WINAPI mySum(char * astr2,char *bstr2) 
{ 
   //改变astr2bstr 2  ，astr1 bstr1不会被改变
   return a+b; 
}
DLL 需传出char *类型 
[DllImport(“MyDLL.dll")] 
// 传出值
public static extern int mySum (StringBuilder abuf, StringBuilder bbuf ); 
//DLL中申明 
extern “C” __declspec(dllexport)  int WINAPI mySum(char * astr,char *bstr) 
{ 
   //传出char *　改变astr　bstr -->abuf, bbuf可以被改变
   return a+b; 
} 
DLL 回调函数 
BOOL EnumWindows(WNDENUMPROC lpEnumFunc, LPARAM lParam) 

usingSystem; 
using System.Runtime.InteropServices; 
public delegate bool CallBack(int hwnd, int lParam); //定义委托函数类型 
public class EnumReportApp 
{ 
   [DllImport("user32")] 
   public static extern int EnumWindows(CallBack x, int y); 
   public static void Main() 
   { 
     CallBack myCallBack = new CallBack(EnumReportApp.Report);
     EnumWindows(myCallBack, 0); 
   } 
   public static bool Report(int hwnd, int lParam) 
   { 
      Console.Write("Window handle is "); 
      Console.WriteLine(hwnd); return true; 
   } 
} 
DLL  传递结构 BOOL PtInRect(const RECT *lprc, POINT pt); using System.Runtime.InteropServices; [StructLayout(LayoutKind.Sequential)] public struct Point {    public int x;     public int y; } [StructLayout(LayoutKind.Explicit)]  public struct Rect  {     [FieldOffset(0)] public int left;     [FieldOffset(4)] public int top;    [FieldOffset(8)] public int right;     [FieldOffset(12)] public int bottom; } Class XXXX {    [DllImport("User32.dll")]    public static extern bool PtInRect(ref  Rect r, Point p);  }关于DllImportAttribute下四个字段的详细用法见：C#DllImportAttribute用法汇总以上文字部分转载于：http://www.360doc.com/content/10/0602/14/957410_30860125.shtml
```

## 使用C++/CLI

## 使用COM组件  



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







# END
