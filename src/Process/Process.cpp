#include"./Process.h"
Process::Process(int clientSocket){
    _clientSocket=clientSocket;
}
Process::~Process(){
    if(_clientSocket){
        shutdown(_clientSocket,SHUT_RDWR);//close socket
    }
}
void Process::run(){
    //read data
    while(1){
        int len=read(_clientSocket,_recBuffer,14);
        if(len<=0){
            break;//socket closed
        }
        //test rec string
        testRecString(_recBuffer);
    }
}
int Process::testRecString(const char*string){
    const char* recFileName="./tempdir/temp.png";
    const char* recImageFile="SENDIMAGEFILE";
    if(string==NULL){return 0;}//0 is null
    //test string
    if(0==strcmp(string,recImageFile)){
        std::cout<<">>REC FILE...\n";
        //open file
        FILE* file=fopen(recFileName,"wb");
        if(file==NULL){
            std::cout<<">>CREATE FILE FAILED\n";
            return 0;
        }
        //read file
        while(1){
            int len=read(_clientSocket,_recBuffer,512);
            if(len<=0){
                break;
            }
            fwrite(_recBuffer,len,1,file);
        }
        fclose(file);//close file
        std::cout<<">>REC FILE OVER NEXT TO TEST\n";
        //WRITE RESPONSE
        const char *response="REC IMAGE OVER";
        send(_clientSocket,response,strlen(response),0);
    }
    return 1;
}
