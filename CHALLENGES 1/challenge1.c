// ALGORITHME CHALLENGE1
//     VARIABLES
//         N1,N2, N3, MAX : ENTIER
// DEBUT
//     ECRIRE("ENTRER LES TROI NOMBRES: ")
//     LIRE(N1, N2, N3)
//     MAX < --N1
//     si(N2 > MAX) alors
//         MAX < --N2
//     si(N3 > MAX)
//         MAX < --N3
//     fin si
//     ecrire("le max est : ", MAX)
// FIN
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int N1, N2, N3, MAX;
    printf("entrer les trois nombres: ");
    scanf("%d %d %d", &N1, &N2, &N3);
    MAX = N1;
    if (N2 > MAX)
    {
        MAX = N2;
    }
    if (N3 > MAX)
    {
        MAX = N3;
    }
    printf("le max est: %d", MAX);

    return 0;
}
