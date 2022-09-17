#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void insertion1(){
	int age;
	FILE* fichier = NULL;
	fichier = fopen("fichier.txt", "a+");
	if(fichier != NULL)
	{
		fputs("Salut l\'ami, maintenant on pourra rester ensemble.", fichier);
		printf("\n Donne ton age: ");
		scanf("%d", &age);
		fprintf(fichier, "L\'age saisie est : %d ans.", age);
		fclose(fichier);
	}
}
void insertion2(){
	int age;
	FILE* fichier = NULL;
	fichier = fopen("fichier.txt","a+");
	if(fichier != NULL)
	{
		printf("Donnez l\'age de votre frere : ");
		scanf("%d", &age);
		fprintf(fichier, "\nL\'age de mon frère est de: %d.", age);
		fclose(fichier);
	}
}
main(int arg, char *argv[]){
	insertion2();
}
