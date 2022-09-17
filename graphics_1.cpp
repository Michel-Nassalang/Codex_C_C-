#include<graphics.h>

const char *title = "Voiture";
int main(){
	initwindow(800,600,title);
	setcolor(BLUE);
	rectangle(25,25,775,575);
	setcolor(WHITE);
	bar(300,225,500,75);
	bar(200,225,300,150);
	bar(500,225,600,150);
	arc(300,225,25,25,30);
	arc(500,225,25,25,30);
	getch();
	cleardevice();
	outtextxy(400,300, "Fin");
	getch();
}
