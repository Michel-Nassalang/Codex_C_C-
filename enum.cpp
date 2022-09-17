#include<stdio.h>
main(){
	typedef enum{ Lundi, Mardi, Mercredi, Jeudi, Vendredi, Samedi, Dimache } semaine;
	semaine journee = Lundi;
	printf("La journee donnee est : %d . \n", journee);
	int a;
	int b;
	a = 5;
	b = 14;
	int * r = &b;
	printf("La valeur de l'adresse de la donnee : %d . \n", r );
}
