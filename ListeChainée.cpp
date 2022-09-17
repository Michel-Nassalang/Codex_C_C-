#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <wchar.h>

struct node {
   int valeur;
   struct node *suivant;
};

struct node *tete = NULL;
struct node *courant = NULL;

void insererTete(int valeur) {
   //créer un noeud
   struct node *nouveauNoeud = (struct node*) malloc(sizeof(struct node));
	
   nouveauNoeud->valeur = valeur;
	
   //faire pointer son suivant sur l'ancienne tête de liste
   nouveauNoeud->suivant = tete;
	
   //... et devient la nouvelle tête de liste
   tete = nouveauNoeud;
}

void afficherListe() {
   struct node *ptr = tete;
   printf("\n ");
	
   //commencer au dÃ©but
   while(ptr != NULL) {
      printf("%d,  ",ptr->valeur);
      ptr = ptr->suivant;
   }
   printf(" \n");
}
int uno, dos, tres, quatro;
main(){
	printf("On a inséré et ensuite on a affiché la liste. \n");
	insererTete(5);
	insererTete(10);
	insererTete(15);
	afficherListe();
}
