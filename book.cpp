#include "book.h"
#include<fstream>
#include<string>
#include<iostream>
#include<iomanip>
using namespace std;

book::book(int nu,string na,string isbn,string pub,string au,string pos,int ty,int st){
			num=nu;
			name=na;
			ISBN=isbn;
			publisher=pub;
			author=au;
			position=pos;
			state=st;
			type=ty;
}
book ( book & b){
	num=b.num;
	name=b.name;
	ISBN=b.ISBN;
	publisher=b.publisher;
	author=b.author;
	position=b.position;
	type=b.type;
	state=b.state;
	sumofbooks++;
}
void book::show(){  //�뷨1���Ѷ����Ƹĵ��뷨����д�ö������� 
     	book temp;
     	int length=0; 
     	int length_end=0;
     	int i=0; 
     	ifstream books_in;
     	books_in.open("books.dat",ios::in|ios::binary);//ֻ���� 
     	if(!books_in)
        {
           cout<<"open books.dat failed"<<endl;
           exit(1);
        }
      	//cout<<"name author publisher isbn num"<<endl;
      	books_in.seekg(0,ios::end);//ȷ���ļ�β��������ȡһ��
      	length_end=books_in.tellg();//
      	books_in.seekg(0,ios::beg);//
      	while(!books_in.eof())
        { 
            books_in.read((char*)&temp,sizeof(temp));       
            cout<<left<<setw(6)<<temp->getname()<<"  ";
        	cout<<left<<setw(6)<<temp->getauthor()<<"  ";
        	cout<<left<<setw(7)<<temp->getpublisher()<<"  ";
        	cout<<left<<setw(6)<<temp->getISBN()<<"  ";
        	cout<<left<<setw(5)<<temp->getnum()<<"  ";
        	cout<<left<<setw(5)<<temp->getposition()<<"  ";
        	cout<<left<<setw(5)<<temp->getstate()<<"  ";
        	cout<<left<<setw(5)<<temp->gettype()<<"  ";
          	length=books_in.tellg();
            if(length_end==length) break;//���ļ�β����
        }
    books_in.close(); 
}
~book(int ,string ,string ,string ,string ,string ,int ,int ){ };
