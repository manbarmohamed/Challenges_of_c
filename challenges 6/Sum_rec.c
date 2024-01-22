#include <stdio.h>
// int fact(int nbr){
//     if(nbr==0 || nbr ==1){
//         return 1;
//     }
//     return nbr * fact(nbr-1);
// }

int sum(int nbr)
{
    if (nbr < 0)
        return -1;
    else if (nbr == 0)
        return 0;
    else
        return nbr + sum(nbr - 1);
}
int main()
{
    int N;
    printf("entrer un nombre: ");
    scanf("%d", &N);
    if (sum(N) == -1)
        printf("le nombre est negatif\n");
    else
        printf("la somme de %d est :%d", N, sum(N));


    // printf("le factoriale de %d est :%d",N,fact(N));
    return 0;
}