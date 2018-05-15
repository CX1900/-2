#include "paper.h"

paper::paper(int nu,string tit,string au,string pe,string ti,string pos){
	num=nu;
	title=tit;
	author=au;
	periodical=pe;
	time=ti;
	position=pos;
}
paper (const paper & p){
	num=p.num;
	title=p.title;
	periodical=p.periodical;
	time=p.time;
	position=p.position;
	sumofpapers++;
}
void paper::show(){	
}
~paper(){
}
