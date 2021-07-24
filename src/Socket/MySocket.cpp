#include"./MySocket.h"
MySocket::MySocket(const char*ip,int port){
    _ip=(char*)malloc(sizeof(strlen(ip)+1));
    strcpy(_ip,ip);//copy ip to object
    _port=port;
    //create this computer socket
    _serverSocket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);//USE TCP
    if(0>=_serverSocket){
        printf(">>Create socket failed,errno = %d.\n",errno);
    }
    //init space to 0
    memset(&_serverAddress,0,sizeof(_serverAddress));
    _serverAddress.sin_family=AF_INET;
    _serverAddress.sin_addr.s_addr=inet_addr(_ip);
    _serverAddress.sin_port=htons(_port);
    //socket bind data
    bind(_serverSocket,(struct sockaddr*)&_serverAddress,sizeof(_serverAddress));
    //listen
    listen(_serverSocket,20);//max connection number is 20
    _clientAddressSize=sizeof(_clientAddress);
    printf(">>Listen Success:[IP: %s Port:%d]\n",_ip,port);
}

void MySocket::run(){
    int flag=-1;
    while(flag==-1){
        //accept
        _clientSocket=accept(_serverSocket,(struct sockaddr*)&_clientAddress,&_clientAddressSize);
        printf(">>Client Connection Sucess %d\n",_clientSocket);
        int pid=fork();//Create Child Process
        if(pid==-1){//create error
            printf(">>ERROR:Process Create Failed\n");
        }else if(pid==0){//child process
            flag=0;//jump this while     
        }    
    }
}

int MySocket::getClientSocket(){
    return _clientSocket;
}


MySocket::~MySocket(){
    if(_ip){free(_ip);}
    if(_clientSocket)
        shutdown(_clientSocket,SHUT_RDWR);
}
