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
    user stu(na,pass,userty);//���ù��캯���Զ����Ա��ʼ�� д������
    fin.write((char*)&stu,sizeof(stu));//�����������������ʽ д�뵽�ļ�
    cout<<"����ɹ���"<<endl; 
	fin.close();	
}
void AccountManagement::deleteUser(){
	ofstream fin("users.dat");	
} 
void AccountManagement::updateUser(){
}
