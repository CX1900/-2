#ifndef PAPER_H
#define PAPER_H

class paper{ //paper�� 
public: paper();//���캯�� 
		paper(int ,string ,string ,string ,string ,string );
		paper(const paper & p);
		int getnum(){//�õ�paper��Ļ�����Ϣ 
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
		void show();//չʾpaper����Ϣ 
		//~paper();
private:int num;//paper������� 
		string title;
		string author;
		string periodical;
		string time;
		string position;
		static int sumofpapaers=0;	
};

#endif
