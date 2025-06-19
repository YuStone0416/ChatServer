#ifndef GROUP_H
#define GROUP_H
#include<vector>
#include<string>
#include "groupuser.hpp"
using namespace std;
//AllGroup表的ORM类但也不完全是还加了储存组用户的数组
class Group{
public:
    Group(int id=-1,string name ="",string desc=""){
        this->id=id;
        this->name=name;
        this->desc=desc;
    }
    void setId(int id){
        this->id=id;
    }
    void setName(string name){
        this->name=name;
    }
    void setDesc(string desc){this->desc=desc;}
    int getId(){
        return this->id;
    }
    string getName(){
        return this->name;
    }
    string getDesc(){
        return this->desc;
    }
    vector<GroupUser> &getUsers() {return this->users;}

private:
    int id;//组id
    string name;//组名
    string desc;//组功能描述
    vector<GroupUser> users;//组员的详细信息
};
#endif