#ifndef RESOURCEMANAGEMENT_H
#define RESOURCEMANAGEMENT_H

class ResourceManagement
{
public: ResourceManagement();
		void add_books();//添加书籍 
		void update();//更新书籍信息 
		void _delete();//删除书籍 
		void view();//展示书籍 
		bool search();//查找书籍 
		//~MOS();
		static int sumofbooks;
		static int sumofpapers;
};

#endif
