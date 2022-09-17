#include<graphics.h>
int main(){
	initwindow(800,600);
	int maxx = getmaxx();
	int maxy = getmaxy();
	for(int i=0;i<maxx;i++){
		line(0,550,maxx,550);
		setcolor(YELLOW);
		circle(50+i,100,30);
		setcolor(WHITE);
		bar(0+i,480,50+i,530);
		bar(50+i,440,150+i,530);
		bar(150+i,480,200+i,530);
		arc(50+i,530,25,25,20);
		arc(150+i,530,25,25,20);
		delay(20);
		cleardevice();
	}
	getch();
}
