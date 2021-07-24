/*@wanlu 2021-7 OpenEulr Work*/
#ifndef __MYSOCKET_H__
#define __MYSOCKET_H__
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<errno.h>
#include<opencv2/opencv.hpp>
#include<iostream>
class MySocket{
private:
    int _serverSocket;
    int _clientSocket;
    struct sockaddr_in _serverAddress;
    struct sockaddr_in _clientAddress;
    socklen_t _clientAddressSize;
    char _sendBuffer[512];
    char _recBuffer[512];
    char *_ip;
    int _port;
public:
    MySocket(const char* ip,int port);
    ~MySocket();
    void run();
    int getClientSocket();
};
#endif
