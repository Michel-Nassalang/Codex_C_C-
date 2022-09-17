#include <stdio.h>
main(){
	int a = 5;
	int *ptr = &a;
	printf("\n l\'adresse de la variable est : %d",ptr);
	printf("\n La variable est : %d \n", a);
	scanf("%d", ptr);
	printf("\n La nouvelle variable est : %d", a);
	char carac[] = "Maximilliam";
	printf("\n Le nom du receveur est : %s \n", carac);
	scanf("%s", carac);
	printf("\n Le nouveau nom du receveur est : %s", carac);
}
