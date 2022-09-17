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
	int elmt;
};
// ----------------------------------------
void Inserer_Tete(int valeur, Liste *liste){
	noeud  *new_noeud = (noeud*) malloc(sizeof(noeud));
	new_noeud->valeur = valeur;
	new_noeud->suivant = liste->premier; 
	liste->premier = new_noeud;
}
// ----------------------------------------
void Inserer_Queue(int valeur, Liste *liste){
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
void Inserer_Middle(int valeur, int pos, Liste *liste){
	noeud *noeud_prec = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_ins = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_pos = (noeud*) malloc(sizeof(noeud));
	
	int actu_pos = 1;
	noeud_ins->valeur = valeur;
	noeud_pos = liste->premier;
	if(actu_pos == pos){
		noeud_ins->suivant = noeud_pos;
		liste->premier = noeud_ins;
	}else{	
		while(actu_pos != pos){
			noeud_prec = noeud_pos;
			noeud_pos = noeud_pos->suivant;
			actu_pos++;
		}	
		noeud_ins->suivant = noeud_pos;
		noeud_prec->suivant = noeud_ins;
	}
}
// -----------------------------------------
void Supprimer(int valeur, Liste *liste){
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
void SupprimerListe(Liste *liste){
	noeud *noeud_supp = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_actu = (noeud*) malloc(sizeof(noeud));
	noeud_actu = liste->premier;
	while(noeud_actu != NULL){
		noeud_supp = noeud_actu;
		liste->premier = noeud_actu->suivant;
		noeud_actu = liste->premier;
		free(noeud_supp);
	}
	printf(" \n La liste est supprimee. \n");
}
// -----------------------------------------
void Compteur(Liste *liste){
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
	printf("\n Le nombre d\'elements dans la liste est de : %d. \n", n);
}
// -----------------------------------------
void Renverseur(Liste *liste){
	noeud *actu_noeud = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_prec = (noeud*) malloc(sizeof(noeud));
	noeud *noeud_suiv = (noeud*) malloc(sizeof(noeud));
	actu_noeud = liste->premier;
	noeud_prec = NULL;
	if(actu_noeud == NULL){
		printf(" Malheureusement, la liste est vide.");
	}else{
		while(actu_noeud != NULL){
		noeud_suiv = actu_noeud->suivant;
		actu_noeud->suivant = noeud_prec;
		noeud_prec = actu_noeud;
		actu_noeud = noeud_suiv;
		}
		liste->premier = noeud_prec;
	}
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
	Liste *liste1 = (Liste*) malloc(sizeof(Liste));
	liste1->premier = NULL;
	Afficher(liste1);
	int val, i, first, N;
	printf("\n Initialisons le premier de la liste :  ");
	scanf("%d", &first);
	Inserer_Tete(first,liste1);
	printf("\n Donnons le nombre d\'elements a inserer: ");
	scanf("%d", &N);
	printf("\n Le nombre d\'elements a inserer est : %d. \n", N);
	printf("\n On va inserer des noeuds sur la liste: \n");
	for(i=0; i<N; i++){
		scanf("%d", &val);
		Inserer_Queue(val, liste1);
	}
	Afficher(liste1);
	Compteur(liste1);
	Inserer_Middle(9,3,liste1);
	printf("\n Apres insertion a la troisieme place, ");
	Afficher(liste1);
	Compteur(liste1);
	Supprimer(9,liste1);
	printf("\n Apres suppression du nombre 9,");
	Afficher(liste1);
	Compteur(liste1);
	Renverseur(liste1);
	Afficher(liste1);
	SupprimerListe(liste1);
	Afficher(liste1);
	Compteur(liste1);
}
