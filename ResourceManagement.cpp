#include "ResourceManagement.h"
#include "book.h"
#include "paper.h"
ResourceManagement::ResourceManagement(){
}
void ResourceManagement::add_books()//添加书籍
{   
	/*string s1,s2,s3,s4,s5;
    int t1=0,t2=0;
    ofstream books_out;
    books_out.open("books.dat",ios::out|ios::binary|ios::app);//以输出到文件，二进制追加的方式打开文件
    if(!books_out)
    {
        cout<<"open books.dat failed"<<endl;
    } 
    cout<<"enter the number of the book:";
    cin>>t1;
    cout<<"enter the name of the book:";
    cin>>s1;
    cout<<"enter the author of the book:";
    cin>>s2;
    cout<<"enter the publisher of the book:";
    cin>>s3; 
    cout<<"enter the isbn of the book:";
    cin>>s4;
    cout<<"enter the position of the book:";
    cin>>s5;
    cout<<"enter the type of the book:1.ebook2.phisical book\n";
    cin>>t2;
    book b(t1,s1,s4,s3,s2,s5,t2);//利用构造函数对对象成员初始化 写入数据
    cout<<"导入成功！"<<endl;
    books_out.write((char*)&b,sizeof(b));
    books_out.close();*/
    string name;
    cout<<"enter the name of the book:";
    cin>>name;
    name+=".txt";
    ofstream fout(name);
    if(!fout){
    	cout<<"open file failed"<<endl;
	}
	int num,type;
	string s1,s2,s3,s4,s5;
	cout<<"enter the number of the book:";
    cin>>num;
    fout<<num;
    fout<<s1;
    cout<<"enter the isbn of the book:";
    cin>>s2;
    fout<<s2;
    cout<<"enter the publisher of the book:";
    cin>>s3; 
    fout<<s3;
    cout<<"enter the author of the book:";
    cin>>s4;
    fout<<s4;
    cout<<"enter the position of the book:";
    cin>>s5;
    fout<<s5;
    cout<<"enter the type of the book:1.ebook2.phisical book\n";
    cin>>type;
    fout<<s6;
    cout<<"导入成功！"<<endl;
    fout.close() ;
}
bool ResourceManagement::search(){	
} 
void ResourceManagement::update(){
} 
void ResourceManagement::_delete(){
} 
void ResourceManagement::view(){
}
