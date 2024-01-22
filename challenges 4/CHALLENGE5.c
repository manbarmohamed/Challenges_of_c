#include <stdio.h>

int main()
{
    int nbr, inverse = 0, m;
    printf("Enter un nombre: ");
    scanf("%d", &nbr);
    while (nbr > 0)
    {
        m = nbr % 10;
        inverse = inverse * 10 + m;
        nbr = nbr / 10;
    }
    printf("%d", inverse);
    return 0;
}