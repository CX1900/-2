#ifndef USER_H
#define USER_H

class user{//user类 
public: user();//构造函数 
		user(string userna,string pass,int userro);
		user(const user & u);
 		void borrow();//借书 
		void _return();//还书 
		string getusername(){//得到user基本信息 
			return username;
		}
		string getpassword(){
			return password;
		}
		int getuserrole(){
			return userrole;
		}
		//~user();
private: 
		string username;//用户名 
		string password;
		int userrole;//1是管理员，0是普通用户
		static int sumofusers=0;	
};

#endif
