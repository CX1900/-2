#include "AccountManagement.h"
#include "user.h"
#include<string>
#include<iostream>
AccountManagement::AccountManagement(){
}
void AccountManagement::addUser(){
	string na,pass;
	int userty;
	ofstream fin;
	fin.open("users.dat",ios::out|ios::binary|ios::app);
	if(!fin)
    {
        cout<<"open users.dat failed"<<endl;
    }
    cout<<"enter the username:";
    cin>>na;
    cout<<"enter the password: ";
    cin>>pass;
    cout<<"enter the usertype:1.admin;0.student ";
    cin>>userty;
    user stu(na,pass,userty);//利用构造函数对对象成员初始化 写入数据
    fin.write((char*)&stu,sizeof(stu));//将数据以类的整块形式 写入到文件
    cout<<"导入成功！"<<endl; 
	fin.close();	
}
void AccountManagement::deleteUser(){
	ofstream fin("users.dat");	
} 
void AccountManagement::updateUser(){
}
