# CSocketImageTest

#### 介绍  
基于Linux系统开发的具有图片上传至云端进行检测并将结果返回至客户端的工具  
#### 软件架构  
|  运行平台   | 依赖环境  | 工具 |  
|  ----  | ----  | ----|  
| Linux(OpenEulr)  | pthread | make  |  
|  make | OpenCV | cmake |  
| | | g++ |  


#### 安装教程

1.  环境部署
2.  使用cmake编译程序
3.  运行服务端程序
4.  运行客户端程序

#### 使用说明

1.  使用客户端工具
2.  等待服务端响应
3.  客户端使用结束

#### 参与贡献

________________________________
`陈远斐` `高万禄`
--------------------------------


#### 特技

1.  将本地的图像传输至远端处理返回结果
2.  多线程处理多客户端任务请求
3.  使用OpenCV进行图像处理、SVM(支持向量机)测试图像

## 项目文件
* bin(生成可执行文件目录)
* client(客户端源码)  
* xml(XML文件目录)  
* src(服务端源码)  
|---main.cpp(主函数)  
  |---Socket(网络监听与线程管理)  
  &emsp;&emsp;|--MySocket.cpp  
  &emsp;&emsp;|--MySocket.h  
  |---Process(子线程TODO)  
  &emsp;&emsp;|---Process.cpp  
  &emsp;&emsp;|---Process.h  
  some ......