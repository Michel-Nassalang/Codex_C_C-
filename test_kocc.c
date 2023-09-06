#include <stdio.h>
#include <limits.h>

int main() {
    int taille;

    printf("Saisir la taille du tableau : ");
    scanf("%d", &taille);

    if (taille <= 0) {
        printf("La taille du tableau doit être supérieure à 0.\n");
        return 1;
    }

    int tableau[taille];
    int somme = 0;
    float moyenne;
    int valeurMax= INT_MIN;
    int valeurMin= INT_MAX;

    printf("Saisir les %d éléments du tableau :\n", taille);
    for (int i = 0; i < taille; i++) {
        printf("Elemen0 %d : ", i + 1);
        scanf("%d", &tableau[i]);

        somme += tableau[i];

        if (tableau[i] > valeurMax) {
            valeurMax = tableau[i];
        }

        if (tableau[i] < valeurMin) {
            valeurMin = tableau[i];
        }
    }

    moyenne = (float)somme / taille;

    printf("Contenu du tableau : ");
    for (int i = 0; i < taille; i++) {
        printf("%d", tableau[i]);
        if (i < taille - 1) {
            printf(", ");
        }
    }
    printf("\n");

    printf("Somme des éléments : %d\n", somme);
    printf("Moyenne des éléments : %.2f\n", moyenne);
    printf("Valeur maximale : %d\n", valeurMax);
    printf("Valeur minimale : %d\n", valeurMin);

    return 0;
}
