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

struct file{
	Noeud *premier;
	Noeud *dernier;
};
typedef struct file File;

void Initialisation(File *file){
	file->premier = NULL;
	file->dernier = NULL;
};
void AfficherFile(File *file){
	Noeud *actu = (Noeud*) malloc(sizeof(Noeud));
	actu = file->premier;
	if(actu == NULL){
		printf("La file est vide.");
	}else{
		printf("\nLes noeuds de la liste sont : ");
		while(actu != NULL){
			printf("%d,",actu->valeur);
			actu = actu->suivant;
		}
	}
};
void Inserer(int valeur, File *file){
	Noeud  *new_noeud = (Noeud*) malloc(sizeof(Noeud));
	new_noeud->valeur = valeur;
	if(file->premier == NULL || file->dernier == NULL){
		file->premier = new_noeud;
		file->dernier = new_noeud;
		file->dernier->suivant = NULL;
	}else{
		new_noeud->suivant = NULL;
		file->dernier->suivant = new_noeud;
		file->dernier = new_noeud;
	}
}
void Supprimer(File *file){
	Noeud  *s_noeud = (Noeud*) malloc(sizeof(Noeud));
	s_noeud = file->premier;
	file->premier = s_noeud->suivant;
	free(s_noeud);
}
int main(){
	File *file1 = (file*) malloc(sizeof(file));
	Initialisation(file1);
	AfficherFile(file1);
	Inserer(5,file1);
	AfficherFile(file1);
	Inserer(2,file1);
	AfficherFile(file1);
	Inserer(9,file1);
	AfficherFile(file1);
	Inserer(6,file1);
	AfficherFile(file1);
	Supprimer(file1);
	AfficherFile(file1);
	Supprimer(file1);
	AfficherFile(file1);
	Supprimer(file1);
	AfficherFile(file1);
};
