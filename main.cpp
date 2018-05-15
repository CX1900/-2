#include <iostream>
#include "book.h"
#include "user.h"
#include "paper.h"
#include "AccountManagement.h"
#include "ResourceManagement.h" 
#include<string>
using namespace std;
int main(int argc, char** argv) {
	user u;
	AccountManagement a;
	ResourceManagement r;
	book b;
	int choice;
	cout<<"                 1.borrow book"<<endl;
    cout<<"                 2.return book"<<endl;
    cout<<"                 3.add user"<<endl;
    cout<<"                 4.delete user"<<endl;
    cout<<"                 5.update user"<<endl;
    cout<<"                 6.search book"<<endl;
    cout<<"                 7.add book"<<endl;
    cout<<"                 8.update book"<<endl;  
    cout<<"                 9.delete book"<<endl;
    cout<<"                 10.show book"<<endl;
    cout<<"enter the number of the function:"<<endl;//想法：搞一个普通用户和管理员 
	cin>>choice;
	switch(choice){
		case 1: u.borrow();break;
		case 2: u._return();break;
		case 3: a.addUser();break;
		case 4: a.deleteUser();break;
		case 5: a.updateUser();break;
		case 6: r.search();break;
		case 7: r.add_books();break;
		case 8: r.update();break;
		case 9: r._delete();break;
	    case 10:b.show();
	}
	return 0;
}
