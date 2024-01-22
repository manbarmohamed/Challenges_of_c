// ALGORITHME CHALLENGE3
// VARIABLES
//     count,N : ENTIER
// DEBUT
//     ecrire("entrer un nombre entier:")
//     lire(N)
//     si N < --0 alors
//         count < --1
//     sinon
//         tant que N < >0 faire
//         N < --N / 10 
//         count++ 
//         fin tant que 
//     fin si
//     ecrire("le nombre de chiffres est:", count)
// FIN
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    /* code */
    int c,N;
    printf("entrer un nombre entier: ");
    scanf("%d",&N);
    c=0;
    if (N == 0)
    {
        c=1;
    }
    else{
        while (N!=0)
        {
            /* code */
            N/=10;
            c++;
        }   
    }
    printf("le nombre de chiffres est:%d", c);
    return 0;
}
