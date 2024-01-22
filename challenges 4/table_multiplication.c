#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int n,i;
    printf("entrer un nombre entier: ");
    scanf("%d",&n);
    for (i = 1; i <=10; i++)
    {
        /* code */
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
