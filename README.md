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


#### 本工具功能 [ 提供一种在云端进行图像检测的方案 ]

1.  将本地的图像传输至远端处理返回结果
2.  多线程处理多客户端任务请求
3.  使用OpenCV进行图像处理、SVM(支持向量机)测试图像

## 项目文件
* bin(生成可执行文件目录)
* client(客户端源码)  
* xml(XML文件目录)  
* src(服务端源码)  
|---main.cpp(主函数)  
  |---Socket(网络监听与进程管理)  
  &emsp;&emsp;|--MySocket.cpp  
  &emsp;&emsp;|--MySocket.h  
  |---Process(子进程TODO)  
  &emsp;&emsp;|---Process.cpp  
  &emsp;&emsp;|---Process.h  
  some ......

## 关于实验开发环境
#### 硬件
12vCPUs | 24GiB  
#### 操作系统
EulerOS 2.8 64bit with ARM  

## 项目环境搭建On EulerOS  
###### OpenCV是什么?  
OpenCV是一个基于BSD许可（开源）发行的跨平台计算机视觉和机器学习软件库，可以运行在Linux、Windows、Android和Mac OS操作系统上。它轻量级而且高效——由一系列 C 函数和少量 C++ 类构成，同时提供了Python、Ruby、MATLAB等语言的接口，实现了图像处理和计算机视觉方面的很多通用算法。[来源于百度百科]  
###### 项目开发语言以及工具  
* g++ [ GNU的c++编译器 ]
* make [ GNU Make是一个用来控制可执行文件和其他一些从源文件来的非源代码文件版本的软件 ]
* cmake [ 跨平台的安装（编译）工具 ]
* OpenCV 
* Git
* Gitee | Github

###### 关键词
* SVM(支持向量机) | 图像识别 | 远程图像传输 | OpenCV | C++

###### 环境搭建准备  
* 更新yum软件包列表  
`
$ sudo yum update
`  
* 安装CMake Make G++ Vim Wget等工具  
`
$ sudo yum -y  install git cmake make g++ vim wget
`
* 下载OpenCV源代码  
  * 方法1 从github或者opencv官网下载  
  建立文件夹  
  `$ sudo mkdir /SD`  
  `$ cd /SD`
  从Github下载OpenCV源代码  
  `$ wget -c https://github.com/opencv/opencv/archive/refs/tags/4.5.3.zip -O opencv.zip`
  `$ wget -c https://github.com/opencv/opencv_contrib/archive/refs/tags/4.5.3.zip -O opencv_contrib.zip`
  下载较慢或无法下载可从Gitee下载
  `$ wget https://gitee.com/gaowanlu/opencvinstall/repository/archive/master.zip`
  解压压缩包  
  `$ unzip opencv.zip`
  `$ unzip opencv_contrib.zip`
  `$ sudo mv opencv_contrib-4.5.3 ./opencv-4.5.3/`
  `$ cd ./opencv-4.5.3`
  `$ sudo mkdir ./release`
  `$ sudo cd ./release`
  进行Cmake  
  `$ sudo cmake -D CMAKE_BUILD_TYPE=RELEASE CMAKE_INSTALL_PREFIX=/usr/local OPENCV_EXTRA_MODULES_PATH=opencv_contrib-4.5.3/modules INSTALL_PYTHON_EXAMPLES=ON BUILD_EXAMPLES=ON ..`
  用make进行编译  
  `$ sudo make`
  配置链接库
  `$ sudo make install`

  * 方法2 使用yum进行配置
  `$ sudo yum -y install libopencv-dev`



