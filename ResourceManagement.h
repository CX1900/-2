#ifndef RESOURCEMANAGEMENT_H
#define RESOURCEMANAGEMENT_H

class ResourceManagement
{
public: ResourceManagement();
		void add_books();//����鼮 
		void update();//�����鼮��Ϣ 
		void _delete();//ɾ���鼮 
		void view();//չʾ�鼮 
		bool search();//�����鼮 
		//~MOS();
		static int sumofbooks;
		static int sumofpapers;
};

#endif
