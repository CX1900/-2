#ifndef PAPER_H
#define PAPER_H

class paper{ //paper类 
public: paper();//构造函数 
		paper(int ,string ,string ,string ,string ,string );
		paper(const paper & p);
		int getnum(){//得到paper类的基本信息 
			return num;
		}
		string gettitle(){
			return title;
		}
		string getauthor(){
			return author;
		}
		string getperiodical(){
			return periodical;
		}
		string gettime(){
			return time;
		}
		string getposition(){
			return position;
		}
		void show();//展示paper的信息 
		//~paper();
private:int num;//paper类的属性 
		string title;
		string author;
		string periodical;
		string time;
		string position;
		static int sumofpapaers=0;	
};

#endif
