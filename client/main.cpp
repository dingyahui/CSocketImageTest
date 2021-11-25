#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<string.h>
#include<errno.h>
#include <sys/stat.h>
size_t file_size(const char* filename)//获取文件大小
{
    struct stat statbuf;
    stat(filename,&statbuf);
    size_t size=statbuf.st_size;
    return size;
}

int _server_socket;//服务端套接字
int _client_socket;//客户端套接字
struct sockaddr_in _server_address;//服务端信息
struct sockaddr_in _client_address;//客户端信息
socklen_t _client_address_size;
char _send_buffer[512];//缓冲区
char _rec_buffer[512];
int main(int argc,char**argv){
  //创建客户端套接字
   _client_socket=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
   if(_client_socket==-1){
           printf(">>socket faild ,errno = %d.\n",errno);
       exit(-1);
   }
   //服务端主机信息
   memset(&_server_address,0,sizeof(_server_address));
   _server_address.sin_family=AF_INET;
   //printf("%s\n",argv[0]);
   _server_address.sin_addr.s_addr=inet_addr(argv[1]);
   _server_address.sin_port=htons(5555);
   if(0!=connect(_client_socket,(struct sockaddr*)&_server_address,sizeof(_server_address))){
       printf(">>connect failed,errno = %d.\n",errno);
       exit(-1);
   }
   printf(">>连接服务器成功\n");
   //创建子进程，子进程收数据，父进程发数据
   int pid=fork();
   if(pid==-1){
        perror(">>创建子进程失败");
        exit(-1);
   }else if(pid==0){//子进程
         while(1){
             int len=read(_client_socket,_rec_buffer,512);
                         if(len<=0){
                                 exit(-1);
                         }
             printf(">>服务端:%s\n",_rec_buffer);
                         printf(">>服务完毕按任意键结束\n");
                }
   }else{//父进程
             int i=1;
         //while(1){
                        const char* header="SENDIMAGEFILE\0";
                        //sprintf(_send_buffer,"SENDIMAGEFILE\0");
                send(_client_socket,header,strlen(header),0);
                                printf(">>SENDED DATA:SENDIMAGEFILE\n");
                                //const char*fileName="/mnt/f/send.png";
                                FILE*file=fopen(argv[2],"r");
                                if(NULL==file){
                                        printf(">>Open file failed\n");
                                        return -1;
                                }
                                //获取文件大小
                                size_t filesize=file_size(argv[2]);
                                printf(">>FILE COUNT SIZE:%ld\n",filesize);
                                size_t count;
                                size_t size=0;
                                //send file
                                while((count=fread(_send_buffer,1,512,file))>0){
                                        size+=count;
                                        send(_client_socket,_send_buffer,count,0);
                                        printf(">>SEND FILE %ld/%ld ...\n",size,filesize);
                                }
                                fclose(file);
                                printf(">>请勿退出正在等待服务端响应 或 按任意键退出\n");
                                char temp;
                                shutdown(_client_socket,SHUT_WR);//write cube close
                                scanf("%c",&temp);
         //}
   }
   return 0;
}
