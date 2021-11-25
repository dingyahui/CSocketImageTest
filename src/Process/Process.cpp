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
    //while(1){
        int len=read(_clientSocket,_recBuffer,13);
        if(len<=0){
            return;//socket closed
        }
        //std::cout<<len<<"\n";
        //test rec string
        _recBuffer[13]='\0';
        printf("%s\n",_recBuffer);
        testRecString(_recBuffer);
    //}
}
int Process::testRecString(const char*string){
    char recFileName[125];
    sprintf(recFileName,"./tempdir/%d_temp.png",_clientSocket);
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
        //IMAGE PROCESS
        cv::Mat image = cv::imread(recFileName);
        int number = imageTest.imageProcess(image);
        //WRITE RESPONSE
        char response[100];
        memset(response,0,sizeof(response));
        sprintf(response,"TEST RESULT IS %d",number);
        send(_clientSocket,response,strlen(response),0);
    }
    return 1;
}
