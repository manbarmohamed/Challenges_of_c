#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, i, p;
    bool v;
    printf("Donnez un entier:\n");
    scanf("%d", &n);
    printf("Les nombres premiers inferieurs a %d sont:\n", n);
    for (p = 2; p <= n; p++)
    {
        v = true;
        for (i = 2; i < p; i++)
        {
            if (p % i == 0)
            {
                v = false;
                break;
            }
        }
        if (v)
            printf("%d ", p);
    }
    printf("\n");
    
    return 0;
}
