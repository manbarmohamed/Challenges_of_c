#include <stdio.h>
#include <stdlib.h>

void some_produit(int X, int Y)
{
    int somme, Produit;
    somme = X + Y;
    Produit = X * Y;
    if (somme > 0)
    {
        printf("la somme est positif\n");
    }
    else
    {
        printf("la somme est negatif");
    }
    if (Produit > 0)
    {
        printf("le produit est positif\n");
    }
    else
    {
        printf("le produit est negatif");
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    int x, y;
    printf("entrer les deux nombres: ");
    scanf("%d %d", &x, &y);
    some_produit(x, y);
    return 0;
}
