#include "user.h"

user::user(){	
}
user::user(string userna,string pass,int userro){
	username=userna;
	password=pass;
	userrole=userro;
}
user(const user&u){
	sumofusers++;
}
void user::borrow(){  
}
void user::_return(){
}
