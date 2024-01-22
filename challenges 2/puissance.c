#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int base ,exposant , P; /*P=puissance*/
    printf("Entrer la valeur de base: ");
    scanf("%d", &base);
    printf("Entrer la valeur de exposant: ");
    scanf("%d", &exposant);
    P=pow(base,exposant);
    printf("%d ^ %d = %d",base,exposant, P);
    return 0;
}


