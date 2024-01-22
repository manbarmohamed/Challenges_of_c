#include <stdio.h>
#include <stdbool.h>

bool estImpair(int nbr){
    
    return nbr%2!=0;
}
int main()
{
    int num;
    printf("entrer un nombre: ");
    scanf("%d",&num);
    if(estImpair(num)){
        printf("%d est impair",num);
    }else
        printf("%d est pair",num);
    return 0;
}
