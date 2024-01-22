#include <stdio.h>

int main() {
int nombre;
// Demander à l'utilisateur de saisir un nombre
printf("Entrez un nombre entier : ");
scanf("%d", &nombre);
// Vérifier si le nombre est pair ou impair
if (nombre % 2 == 0) {
    printf("%d est un nombre pair.\n", nombre);
} else {
    printf("%d est un nombre impair.\n", nombre);
}



return 0; }

