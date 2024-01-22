#include <stdio.h>
#include <math.h>

int Carre(int num)
{
    int carre = pow(num,2);
    // int carre = num * num;
    return carre;
}
void affiche_carre(int T[5])
{
    for (int i = 0; i < 5; i++)
    {
        printf("LE CARRE DE T[%d]=%d\n",i,Carre(T[i]));
    }
}

int main()
{
    int T[5];
    for (int i = 0; i < 5; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }
    affiche_carre(T);

    return 0;
}
