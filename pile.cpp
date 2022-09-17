#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <wchar.h>
struct noeud{
	int valeur;
	noeud *suivant;
};
typedef struct noeud Noeud;

struct pile{
	Noeud *premier;
};
typedef struct pile Pile;

void Initialisation(Pile *pile){
	pile->premier = NULL;
};
void AfficherPile(Pile *pile){
	Noeud *actu = (Noeud*) malloc(sizeof(Noeud));
	actu = pile->premier;
	if(actu == NULL){
		printf("La pile est vide.");
	}else{
		printf("\n Les noeuds de la liste sont : ");
		while(actu != NULL){
			printf("%d,",actu->valeur);
			actu = actu->suivant;
		}
	}
};
void Inserer(int valeur, Pile *pile){
	Noeud  *new_noeud = (Noeud*) malloc(sizeof(Noeud));
	new_noeud->valeur = valeur;
	new_noeud->suivant = pile->premier;
	pile->premier = new_noeud;
}
void Supprimer(Pile *pile){
	Noeud  *s_noeud = (Noeud*) malloc(sizeof(Noeud));
	s_noeud = pile->premier;
	pile->premier = s_noeud->suivant;
	free(s_noeud);
}
int main(){
	Pile *pile1 = (Pile*) malloc(sizeof(Pile));
	Initialisation(pile1);
	AfficherPile(pile1);
	Inserer(5,pile1);
	AfficherPile(pile1);
	Inserer(9,pile1);
	AfficherPile(pile1);
	Supprimer(pile1);
	AfficherPile(pile1);
};
