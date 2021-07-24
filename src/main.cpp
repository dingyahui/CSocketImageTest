#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<sys/stat.h>
#include<opencv2/opencv.hpp>
#include"Socket/MySocket.h"
#include"Process/Process.h"

using namespace std;

void InitTempDir(){
    std::cout<<">>Init TempDir...\n";
    //remove tempdir
    //rmdir("./tempdir");
    //make tempdir
    //mkdir("./tempdir",S_IRWXU|S_IRWXG|S_IRWXO);
}

int main(int argc,char**argv){
    InitTempDir();
    MySocket socket("0.0.0.0",5555);
    socket.run();
    //CHILD-PROCESS-TODO
    int clientSocket=socket.getClientSocket();
    Process process(clientSocket);
    process.run();
    return 0;

}
