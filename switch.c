#include <stdio.h>

int main() {
    float note;

    printf("Entrez la note de l'etudiant : ");
    scanf("%f", &note);

    // Tronquer la note à un nombre entier pour simplifier la structure switch
    int noteArrondie = (int)(note + 0.5);

    switch (noteArrondie) {
        case 20:
            printf("Appreciation : Tres bien\n");
            break;
        case 19:
        case 18:
        case 17:
        case 16:
        case 15:
        case 14:
            printf("Appreciation : Bien\n");
            break;
        case 13:
        case 12:
            printf("Appreciation : Assez bien\n");
            break;
        case 11:
        case 10:
            printf("Appreciation : Passable\n");
            break;
        default:
            printf("Appreciation : Insuffisant\n");
            break;
    }

    return 0;
}
