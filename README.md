# csocket-image-test

## 介绍  
基于Linux系统开发的具有图片上传至云端进行图像检测并将结果返回至客户端的工具软件  
## 相关技术  
|  操作系统   | 依赖环境  | 工具 |  
|    ---     |   ---      | ---  |  
| Linux(OpenEulr)  | pthread | make  |  
|   | OpenCV | cmake |  
| | | g++ |  


## 功能 
`提供一种在云端进行图像检测的方案 `
1.  将本地的图像传输至远端处理返回结果
2.  多线程处理多客户端任务请求
3.  使用OpenCV进行图像处理、SVM(支持向量机)测试图像
4. SVM(支持向量机) | 图像识别 | 远程图像传输 | OpenCV | C++

## 项目目录
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
  other(svm、image test) ......


## 项目环境搭建

### 1. 准备  
* 更新yum软件包列表  
`
$ sudo yum update
`  
* 安装CMake Make G++ Vim Wget等工具  
`
$ sudo yum -y  install git cmake make g++ vim wget
`

### 2. 部署OpenCV(两种方式) 
```shell
  方法1 从github或者opencv官网下载  
  
  建立文件夹  
  $ sudo mkdir /SD  
  $ cd /SD
  从Github下载OpenCV源代码  
  $ wget -c https://github.com/opencv/opencv/archive/refs/tags/4.5.3.zip -O opencv.zip
  $ wget -c https://github.com/opencv/opencv_contrib/archive/refs/tags/4.5.3.zip -O opencv_contrib.zip 
  下载较慢或无法下载可从Gitee下载
  $ wget https://gitee.com/gaowanlu/opencvinstall/repository/archive/master.zip
  解压压缩包  
  $ unzip opencv.zip
  $ unzip opencv_contrib.zip
  $ sudo mv opencv_contrib-4.5.3 ./opencv-4.5.3/
  $ cd ./opencv-4.5.3
  $ sudo mkdir ./release
  $ sudo cd ./release
  进行Cmake  
  $ sudo cmake -D CMAKE_BUILD_TYPE=RELEASE CMAKE_INSTALL_PREFIX=/usr/local OPENCV_EXTRA_MODULES_PATH=opencv_contrib-4.5.3/modules INSTALL_PYTHON_EXAMPLES=ON BUILD_EXAMPLES=ON ..  
  用make工具进行编译  
  $ sudo make  
  配置链接库  
  $ sudo make install


  方法2 使用yum或apt等包工具进行配置
  $ sudo yum -y install libopencv-dev  
  或 
  $ sudo apt-get install libopencv-dev

```  

## 快速开始  
### Server 
```
$ cmake .
$ make
$ cd ./bin
$ sudo ./CSocketImageTest 
```
### Client 
```
$ cd ./client 
$ g++ -o main main.cpp 
$./main [argv...](详情请看源码)   
``` 
## 参与贡献

[@gaowanlu](https:://www.github.com/gaowanlu) 
[@chenyuanflg](https:://www.github.com/chenyuanfly) 

## 联系我们  
email heizuboriyo@gmail.com  
