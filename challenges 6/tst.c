// #include <stdio.h>
// // void bubblesort(int T[], int n, int Sw)
// // {
// //     int i, j;
// // }
// void rentrer(int taille, int T[taille])
// {
//     printf(" entrer la taille du tableau: ");
//     scanf("%d", &taille);
//     for (int i = 0; i < taille; i++)
//     {
//         printf("T[%d] = ", i);
//         scanf("%d", &T[i]);
//     }
//     afiichage(taille, T);
// }
// void afiichage(int taille, int T[taille])
// {
    
//     for (int i = 0; i < taille; i++)
//     {
//         printf("T[%d]=%d\t", i, T[i]);
//     }
// }

// int main()
// {
//     int taille, T[] = {};

//     rentrer(taille, T);
//     //afiichage(taille, T);

//     // printf("le tableau que vous avez rentre est comme suit ");

//     return 0;
// }
#include <stdio.h>

void sort(int n, int T[n])
{
    int c;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (T[i] > T[j])
            {
                c = T[i];
                T[i] = T[j];
                T[j] = c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", T[i]);
    }
}

int main()
{
    int n;
    printf("Entrez un nombre: ");
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }
    sort(n, T);
    return 0;
}