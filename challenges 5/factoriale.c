#include <stdio.h>

int factorial(int n) 
{ 
    int res = 1, i; 
    for (i = 2; i <= n; i++) 
        res *= i; 
    return res; 
} 
int main()
{
    int num;
    printf("entrer un nombre: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}





// int factorial(int n)
// {
//     if (n == 0)
//         return 1;
//     return n * factorial(n - 1);
// }