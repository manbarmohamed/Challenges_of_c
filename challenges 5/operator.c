#include <stdio.h>
// addition function
int addition(int a, int b) {
    return a + b;
}
//soustraction function
int soustraction(int a, int b) {
    return a - b;
}
//multiplication fundtion
int multiplication(int a, int b) {
    return a * b;
}

int main() {
    int nbr1, nbr2;
    int choix;

    printf("Saiser le premier nombre : ");
    scanf("%d", &nbr1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &nbr2);

    printf("Choisissez l'opEration :\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
    printf("Le choix que vous avez choiser est : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("le resultat de l'addition : %d\n", addition(nbr1, nbr2));
            break;
        case 2:
            printf("le resultat de la soustraction : %d\n", soustraction(nbr1, nbr2));
            break;
        case 3:
            printf("le resultat de la multiplication : %d\n", multiplication(nbr1, nbr2));
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}