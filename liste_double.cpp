#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct noeud{
	int valeur;
	noeud *suivant;
	noeud *precedent;
};
typedef noeud Noeud;
struct liste{
	noeud *premier;
	noeud *dernier;
	int ne;
};
typedef liste Liste;

Initialisation(Liste *liste){
	liste->premier = NULL;
	liste->dernier = NULL;
	liste->ne = 0;
}
//(((((((((((((((((((((((())))))))))))))))))))))))
//Inserer en tête de liste
InsererTete(Liste *liste, int val){
	Noeud *i_noeud = (Noeud*) malloc(sizeof(Noeud));
	i_noeud->valeur = val;
	i_noeud->precedent = NULL;
	if(liste->premier == NULL && liste->dernier == NULL){
		i_noeud->suivant = liste->premier ;
		liste->premier = i_noeud;
		liste->dernier = i_noeud;
	}else{
		liste->premier->precedent = i_noeud;
		i_noeud->suivant = liste->premier ;
		liste->premier = i_noeud;
	}
	liste->ne +=1;
}
//(((((((((((((((((((((((())))))))))))))))))))))))
//Inserer à une position donnée
Inserer(Liste *liste, int pos, int val){
	Noeud *i_noeud = (Noeud*) malloc(sizeof(Noeud));
	i_noeud->valeur = val;
	if(liste->premier ==NULL || liste->dernier == NULL){
		i_noeud->suivant = liste->premier;
		liste->premier = i_noeud;
		liste->dernier = i_noeud;
	}else{
		if(pos == 1){
			i_noeud->suivant = liste->premier;
			i_noeud->precedent = NULL;
			liste->premier = i_noeud;
		}else if(pos > liste->ne){
			i_noeud->suivant = NULL;
			i_noeud->precedent = liste->dernier;
			liste->dernier = i_noeud;
		}else{
			int place = 1;
			Noeud *point = (Noeud*) malloc(sizeof(Noeud));
			point = liste->premier;
			while(place != pos-1){
				point = point->suivant;
				place++;
			}
			i_noeud->precedent = point;
			i_noeud->suivant = point->suivant;
			point->suivant->precedent = i_noeud;
			point->suivant = i_noeud;
		}
	}
	liste->ne += 1;
}
//(((((((((((((((((((((((())))))))))))))))))))))))
//Inserer en fin de liste
InsererQueue(Liste *liste, int val){
	Noeud *i_noeud= (Noeud*) malloc(sizeof(Noeud));
	i_noeud->valeur = val;
	i_noeud->suivant = NULL;
	if(liste->premier == NULL || liste->dernier == NULL){
		i_noeud->precedent = liste->dernier ;
		liste->premier = i_noeud;
		liste->dernier = i_noeud;
	}else{
		liste->dernier->suivant = i_noeud;
		i_noeud->precedent = liste->dernier;
		liste->dernier = i_noeud;
	}
	liste->ne +=1;
}
//(((((((((((((((((((((((())))))))))))))))))))))))
//Supprimer en tête de liste
SupprimerTete(Liste *liste){
	Noeud *s_noeud = (Noeud*) malloc(sizeof(Noeud));
	s_noeud = liste->premier;
	liste->premier = s_noeud->suivant;
	liste->premier->precedent = NULL;
	free(s_noeud);
	liste->ne -=1;
}
//(((((((((((((((((((((((())))))))))))))))))))))))
//Supprimer un noeud à une position donnée
Supprimer(Liste *liste, int pos){
	Noeud *s_noeud = (Noeud*) malloc(sizeof(Noeud));
	if(liste->premier == NULL || liste->dernier == NULL){
		exit(EXIT_FAILURE);
	}else{
		if(pos == 1){
			s_noeud = liste->premier;
			s_noeud->suivant->precedent = NULL;
			liste->premier = s_noeud->suivant;
			free(s_noeud);
		}else if(pos == liste->ne){
			s_noeud = liste->dernier;
			s_noeud->precedent->suivant = NULL;
			free(s_noeud);
		}else{
			int place = 1;
			s_noeud = liste->premier;
			while(place != pos){
				s_noeud = s_noeud->suivant;
				place++;
			}
			s_noeud->precedent->suivant = s_noeud->suivant;
			s_noeud->suivant->precedent = s_noeud->precedent;
			free(s_noeud);
		}
	}
	liste->ne -= 1;
}
//(((((((((((((((((((((((())))))))))))))))))))))))
//Supprimer en fin de liste
SupprimerQueue(Liste *liste){
	Noeud *s_noeud = (Noeud*) malloc(sizeof(Noeud));
	s_noeud = liste->dernier;
	liste->dernier = s_noeud->precedent;
	liste->dernier->suivant = NULL;
	free(s_noeud);
	liste->ne -=1;
}

//(((((((((((((((((((((((())))))))))))))))))))))))
//Afficher une liste par la tête
T_AfficherListe(Liste *liste){
	Noeud *pre = (Noeud*) malloc(sizeof(Noeud));
	pre = liste->premier;
	if(liste->premier == NULL && liste->dernier == NULL){
		printf("\n La liste est vide.");
	}else{
		printf("\n Les noeuds dans la liste ont les valeurs suivantes : ");
		while(pre != NULL){
			printf("%d,",pre->valeur);
			pre = pre->suivant;
		}
	}
}

//(((((((((((((((((((((((())))))))))))))))))))))))
//Afficher une liste par la queue
Q_AfficherListe(Liste *liste){
	Noeud *pre, *post = (Noeud*) malloc(sizeof(Noeud));
	post = liste->dernier;
	if(liste->premier == NULL && post == NULL){
		printf("La liste est vide.");
	}else{
		printf("\n Les noeuds dans la liste ont les valeurs suivantes : ");
		while(post != NULL){
			printf("%d,",post->valeur);
			post = post->precedent;
		}
	}
}

//(((((((((((((((((((((((())))))))))))))))))))))))

main(){
	Liste *liste1 = (Liste*) malloc(sizeof(Liste));
	Liste *liste2 = (Liste*) malloc(sizeof(Liste));
	Initialisation(liste1);
	Initialisation(liste2);
	InsererTete(liste1, 5);
	T_AfficherListe(liste1);
	InsererTete(liste1, 8);
	InsererTete(liste1, 3);
	InsererQueue(liste1,1);
	T_AfficherListe(liste1);
	Q_AfficherListe(liste1);
	Inserer(liste1, 3, 2);
	T_AfficherListe(liste1);
	Q_AfficherListe(liste1);
	Supprimer(liste1, 5);
	T_AfficherListe(liste1);
	SupprimerTete(liste1);
	T_AfficherListe(liste1);
	Q_AfficherListe(liste1);
	SupprimerQueue(liste1);
	T_AfficherListe(liste1);
	Q_AfficherListe(liste1);
	T_AfficherListe(liste2);
}
