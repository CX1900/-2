#ifndef BOOK_H
#define BOOK_H
#include<string>
class book{//book�� 
public: 
		book(int ,string ,string ,string ,string ,string ,int ty=0,int st=1);//���캯�� 
		int getnum(){//�õ���Ļ�����Ϣ 
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
		void show();//չʾ���������Ϣ 
		~book();
private:int num;//book������� 
		string ISBN;
		string name;
		string publisher;
		string author;
		string position;
		int state;//1�ڼܣ�0���裬-1�쳣 
		int type;//1�ǵ����飬0��ʵ�壬-1�Ƕ��߽��� 
		static int sumofbooks;
};

#endif
