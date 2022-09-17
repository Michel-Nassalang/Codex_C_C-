#include <stdlib.h>
#include <stdio.h>

#define fact 10
#define salut() printf("Salut l\'ami")
#define GENRE(sexe) if (sexe == "homme") \
					printf("Monsieur nous vous souhaitons la bienvenue!");\
					else if(sexe == "femme")\
					printf("Madame nous vous souhaitons la bienvenue!")
main(){
	int r = fact * 5;
	salut()
//	char sexe[]= "";
//	scanf("%c", sexe);
//	if (sexe == "homme"){
//	printf("Monsieur nous vous souhaitons la bienvenue!");
//	}
//	else if(sexe == "femme"){
//	printf("Madame nous vous souhaitons la bienvenue!");
//	}
	GENRE(homme)
	printf("\n Le resultat est : %d \n", r);
}
