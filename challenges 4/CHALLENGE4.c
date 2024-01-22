#include <stdio.h>

int main()
{
    int nbr, sum = 0, max = 0;
    do
    {
        printf("Enter un nombre: ");
        scanf("%d", &nbr);
        if (nbr <= 100)
        {
            sum = sum + nbr;
            if (nbr > max)
            {
                max = nbr;
            }
        }
    } while (nbr != 0);
    printf("La somme est %d et le max est %d", sum, max);
    return 0;
}