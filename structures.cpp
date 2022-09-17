#include <stdlib.h>
#include <stdio.h>
typedef struct coordonnees coordonnees;
struct coordonnees
{
	int x;
	int y;
};
int main(){
	coordonnees point;
	point.x = 5;
	point.y = 10;
	printf("Les coordonnees du point cree est : x = %d en abscisse et y = %d en ordonnee . \n", point.x, point.y);
}
