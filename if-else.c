#include <stdio.h>

int main() {
    float note;

    printf("Entrez la note de l'etudiant : ");
    scanf("%f", &note);

    if (note >= 16.5 && note <= 20) {
        printf("Appreciation : Tres bien\n");
    } else if (note >= 14 && note < 16.5) {
        printf("Appreciation : Bien\n");
    } else if (note >= 12 && note < 14) {
        printf("Appreciation : Assez bien\n");
    } else if (note >= 10 && note < 12) {
        printf("Appreciation : Passable\n");
    } else if (note >= 0 && note < 10) {
        printf("Appreciation : Insuffisant\n");
    } else {
        printf("Note invalide. Veuillez entrer une note entre 0 et 20.\n");
    }

    return 0;
}
