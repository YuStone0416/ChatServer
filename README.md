# ChatServer
可以工作在nginx tcp负载均衡环境中的集群聊天服务器和客户端源码 基于muduo实现 redis mysql
编译方式
cd build
rm -rf *
cmake ..
make
需要nginx的负载均衡和redis
具体运行
cd bin
./ChatServer ip port
./ChatClient ip port
具体细节可以看我的博客
https://yustonerain.top/2025/06/02/C++-chatserver.html/
