#include <stdio.h>
void Permuter (int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("la nouvelle valeur de A est %d et de B est %d",a,b);
}

int main(int argc, char const *argv[])
{
    /* code */
    int A,B;
    printf("entrer le nombre A: ");
    scanf("%d",&A);
    printf("entrer le nombre B: ");
    scanf("%d",&B);
    Permuter(A,B);
    return 0;
}
