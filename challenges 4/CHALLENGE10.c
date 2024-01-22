#include <stdio.h>

int main()
{
    /* code */
    int nbr,i,somme=0;
    while (i<10)
    {
        /* code */
        printf("entrer le %d nombre ",i+1);
        scanf("%d",&nbr);
        if(nbr<0)
            continue;
        i++;
        nbr=+nbr;
        somme+=nbr;
    }
    printf("la somme de 10 nombre est: %d",somme);
    
    return 0;
}
