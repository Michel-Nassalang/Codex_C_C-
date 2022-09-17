#include<graphics.h>
using namespace std;
int main(){
	initwindow(500,500);
	int maxx = getmaxx();
	int maxy = getmaxy();
	printf("%d \n", maxx);
	printf("%d \n",maxy);
	line(maxx-300,maxy-100,maxx-100,maxy-100);
	getch();
}
