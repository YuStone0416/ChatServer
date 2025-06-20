#include "chatserver.hpp"
#include "chatservice.hpp"
#include <iostream>
#include <signal.h>
using namespace std;
//处理服务器ctrl+c结束后，重置user的状态信息
void resetHandler(int){
    ChatService::instance()->reset();
    exit(0);
}
int main(int argc, char **argv){
    if (argc < 3)
    {
        cerr << "command invalid!example:./ChatClient 127.0.0.1 6000" << endl;
        exit(-1); // 异常退出 exit(0)是正常退出
    }
    // 解析通过命令行参数传递的ip和port
    char *ip = argv[1];
    uint16_t port = atoi(argv[2]);
    signal(SIGINT,resetHandler);
    EventLoop loop;
    InetAddress addr(ip,port);
    ChatServer server(&loop, addr, "ChatServer");
    server.start();
    //开启事件循环
    loop.loop();
    return 0;
}