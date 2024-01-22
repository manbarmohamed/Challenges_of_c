#include<stdio.h>
int Max_2(int num1,int num2){
    int max=num1;
    if(num2>max)
        max=num2;
    return max;
}
int Max_4(int n1,int n2 ,int n3, int n4){
    int max=n1;
    if(n3>Max_2(n1,n2))
        max=n3;
    if(n4>Max_2(n1,n2))
        max=n4;
    return max;
}

int main(int argc, char const *argv[])
{
    int nbr1,nbr2,nbr3,nbr4;
    printf("Entrez le nombre 1 : ");
    scanf("%d", &nbr1);
    printf("Entrez le nombre 2 : ");
    scanf("%d", &nbr2);
    printf("Entrez le nombre 3 : ");
    scanf("%d", &nbr3);
    printf("Entrez le nombre 4 : ");
    scanf("%d", &nbr4);
    printf("le max est %d",Max_4(nbr1,nbr2,nbr3,nbr4));
    // printf("le max est %d",Max_2(nbr1,nbr2));


    return 0;
}
