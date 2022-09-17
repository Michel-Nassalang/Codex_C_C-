#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct noeud noeud;
struct noeud{
	int valeur;
	noeud * suivant;
};
typedef struct Liste Liste;
struct Liste{
	noeud *premier;
};
// ----------------------------------------
void Inserer_Tete(int valeur, Liste *liste){
	noeud  *new_noeud = (noeud*) malloc(sizeof(noeud));
	new_noeud->valeur = valeur;
	new_noeud->suivant = liste->premier; 
	liste->premier = new_noeud;
}
// -----------------------------------------
Compteur(Liste *liste){
	int n;
	noeud *actu_noeud = (noeud*) malloc(sizeof(noeud));
	actu_noeud = liste->premier;
	n = 0;
	if(actu_noeud == NULL){
		printf(" Malheureusement, la liste est vide.");
	}else{
		while(actu_noeud != NULL){
		actu_noeud = actu_noeud->suivant;
		n++;
		}
	}
	return n;
}
// -----------------------------------------
void Afficher(Liste *liste){
	noeud *actu_noeud = (noeud*) malloc(sizeof(noeud));
	actu_noeud = liste->premier;
	printf(" Les noeuds qui figurent dans la liste ont les valeurs suivantes : ");
	if(actu_noeud == NULL){
		printf(" Malheureusement, la liste est vide. \n");
	}else{
		while(actu_noeud->suivant != NULL){
		printf("%d, ", actu_noeud->valeur);
		actu_noeud = actu_noeud->suivant;
		}
		
		printf("%d. ", actu_noeud->valeur);
	}
}
// -----------------------------------------
// Fonction principale
main(){
	int first;
	Liste *liste1 = (Liste*) malloc(sizeof(Liste));
	liste1->premier = NULL;
	printf("\n Initialisons le premier de la liste :  ");
	scanf("%d", &first);
	Inserer_Tete(first, liste1);
	Afficher(liste1);
	printf("\n Le nombre d\'elements dans la liste est de : %d. \n", Compteur(liste1));
}
