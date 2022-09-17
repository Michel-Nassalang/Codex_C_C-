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
	noeud * premier;
};
Liste *liste = (Liste*) malloc(sizeof(Liste));
void Initialisation(){
	if(liste == NULL){
		exit(EXIT_FAILURE);
	}
	else{
		liste->premier = NULL;
	}
};
// ----------------------------------------
void Inserer_Tete(int valeur){
	noeud  *new_noeud = (noeud*) malloc(sizeof(noeud));
	new_noeud->valeur = valeur;
	new_noeud->suivant = liste->premier; 
	liste->premier = new_noeud;
}
// ----------------------------------------
void Inserer_Queue(int valeur){
	noeud *noeud_queue = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_final = (noeud*) malloc(sizeof(noeud));
	
	noeud_queue->valeur = valeur;
	noeud_queue->suivant = NULL;
	noeud_final = liste->premier;
	while(noeud_final->suivant != NULL){
		noeud_final = noeud_final->suivant;
	}
	noeud_final->suivant = noeud_queue;
}
// -----------------------------------------
void Inserer_Middle(int valeur, int pos){
	noeud *noeud_prec = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_ins = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_pos = (noeud*) malloc(sizeof(noeud));
	
	int actu_pos = 1;
	noeud_ins->valeur = valeur;
	noeud_pos = liste->premier;
	while(actu_pos != pos){
		noeud_prec = noeud_pos;
		noeud_pos = noeud_pos->suivant;
		actu_pos++;
	}	
	noeud_ins->suivant = noeud_pos;
	noeud_prec->suivant = noeud_ins;
}
void Supprimer(int valeur){
	noeud *noeud_prec = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_supp = (noeud*) malloc(sizeof(noeud));
	noeud_supp = liste->premier;
	if(noeud_supp->valeur == valeur){
		liste->premier = noeud_supp->suivant;
		free(noeud_supp);
	}
	else{
		while(noeud_supp->valeur != valeur){
			noeud_prec = noeud_supp;
			noeud_supp = noeud_supp->suivant;
		}
		if(noeud_supp->suivant != NULL){
			noeud_prec->suivant = noeud_supp->suivant;
			free(noeud_supp);
		}
		else{
			noeud_prec->suivant = NULL;
			free(noeud_supp);
		}
	}
}
// -----------------------------------------
void Afficher(){
	noeud *actu_noeud = (noeud*) malloc(sizeof(noeud));
	actu_noeud = liste->premier;
	printf("\n Les noeuds qui figurent dans la liste ont les valeurs suivantes : ");
	while(actu_noeud->suivant != NULL){
		printf("%d, ", actu_noeud->valeur);
		actu_noeud = actu_noeud->suivant;
	}
	printf("%d.", actu_noeud->valeur);
}
// -----------------------------------------
// Fonction principale
main(){
	Initialisation();
	int val, i, premier, N;
	printf("\n Initialisons le premier de la liste :  ");
	scanf("%d", &premier);
	Inserer_Tete(premier);
	printf("\n Donnons le nombre d\'elements a inserer: ");
	scanf("%d", &N);
	printf("\n Le nombre d\'elements a inserer est : %d. \n", N);
	printf("\n On va inserer des noeuds sur la liste: \n");
	for(i=0; i<N; i++){
		scanf("%d", &val);
		Inserer_Queue(val);
	}
	Afficher();
	Inserer_Middle(9,4);
	Afficher();
	Supprimer(9);
	Afficher();
}
