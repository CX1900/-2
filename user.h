#ifndef USER_H
#define USER_H

class user{//user�� 
public: user();//���캯�� 
		user(string userna,string pass,int userro);
		user(const user & u);
 		void borrow();//���� 
		void _return();//���� 
		string getusername(){//�õ�user������Ϣ 
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
		string username;//�û��� 
		string password;
		int userrole;//1�ǹ���Ա��0����ͨ�û�
		static int sumofusers=0;	
};

#endif
