#include <stdio.h>

void inserer(int T[], int taille, int N, int position)
{
        int i;
        if (position < 0 || position > taille)
        {
                printf("Position invalide!");
        }
        else
        {
                for (i = taille; i >= position; i--)
                {
                        T[i] = T[i - 1];
                }
                T[position] = N;
                taille++;
                printf("Les elements de tableau apres insersion:\n");
                for (i = 0; i < taille; i++)
                {
                        printf("tab[%d] = %d\n", i, T[i]);
                }
        }
}

int main()
{
        int i, N, taille, position;
        printf("Donner la taille du tableau: ");
        scanf("%d", &taille);
        int tab[taille];
        printf("Saisie les elements du tableau: \n");
        for (i = 0; i < taille; i++)
        {
                printf("Donner tab[%d] = ", i);
                scanf("%d", &tab[i]);
        }
        printf("Donner le nombre a inserer: \n");
        scanf("%d", &N);
        printf("Donner la position: \n");
        scanf("%d", &position);
        inserer(tab, taille, N, position);
}