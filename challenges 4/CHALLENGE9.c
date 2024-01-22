#include <stdio.h>

int main()
{
    int base, exposant, puissance;
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exposant);
    puissance = 1;
    if (base < 0 || exposant <= 0)
    {
        printf("la base ou exposant invalid");
    }
    else
    {
        while (exposant > 0)
        {
            puissance *= base;
            exposant--;
        }
        printf("La puissance de %d a la puissance %d est %d.\n", base, exposant, puissance);
    }
    return 0;
}