#ifndef BOOK_H
#define BOOK_H
#include<string>
class book{//book类 
public: 
		book(int ,string ,string ,string ,string ,string ,int ty=0,int st=1);//构造函数 
		int getnum(){//得到书的基本信息 
			return num;
		}
		string getISBN(){
			return ISBN;
		}
		string getname(){
			return name;
		}
		string getpublisher(){
			return publisher;
		}
		string getauthor(){
			return author;
		}
		string getposition(){
			return position;
		}
		int getstate(){
			return state;
		}
		int gettype(){
			return type;
		}
		book (const book & b);
		void show();//展示所有书的信息 
		~book();
private:int num;//book类的属性 
		string ISBN;
		string name;
		string publisher;
		string author;
		string position;
		int state;//1在架，0出借，-1异常 
		int type;//1是电子书，0是实体，-1是二者皆有 
		static int sumofbooks;
};

#endif
