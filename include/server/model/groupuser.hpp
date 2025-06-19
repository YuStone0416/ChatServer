#ifndef GROUPUSER_H
#define GROUPUSER_H
#include "user.hpp"
//群组用户，多了个role角色信息，从User类直接继承，复用User的其他信息
//对应的GroupUser表，但是光是这张表的不够，还要联表查询，所以继承User类。
class GroupUser:public User{
public:
    void setRole(string role){this->role=role;}
    string getRole(){return this->role;}
private:
    string role;
};

#endif