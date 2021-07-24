#ifndef __PROCESS_H__
#define __PROCESS_H__
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
class Process{
private:
    char _sendBuffer[512];
    char _recBuffer[512];
    int _clientSocket;
    int testRecString(const char*string);
public:
    Process(int clientSocket);
    ~Process();
    void run();
};
#endif
