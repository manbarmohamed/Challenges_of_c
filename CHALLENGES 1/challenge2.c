// ALGORITHME CHALLENGE2
// VARIABLES
//     i : ENTIER
// DEBUT
//     i < --1
//     repeter
//     ecrire(i, "*8=", i * 8)
//     ecrire(\n)
//     i < --i + 1 
//     jusqu'a i<=10
// FIN

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int i;
    do
    {
        /* code */
        printf("%d * 8 = %d\n", i, i * 8);
        i+=1;
    } while (i<=10);
    
    return 0;
}
