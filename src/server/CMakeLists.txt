
#定义了SRC_LIST变量，包含了当前目录下的所有源文件
aux_source_directory(. SRC_LIST) #获取当前目录下所有源文件
aux_source_directory(./db DB_LIST)#获取db文件下的所有源文件
aux_source_directory(./model MODEL_LIST)#获取model文件下的所有源文件
aux_source_directory(./redis REDIS_LIST)#获取redis文件下的所有源文件
#指定生成可执行文件
add_executable(ChatServer ${SRC_LIST} ${DB_LIST} ${MODEL_LIST} ${REDIS_LIST})
#指定可执行文件需要链接的库
target_link_libraries(ChatServer muduo_net muduo_base mysqlclient hiredis pthread) #链接muduo库和pthread库