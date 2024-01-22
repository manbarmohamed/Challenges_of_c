// #include <stdio.h>

// //METHOD1
// int main() {
//     int nbr,c=0;

//     printf("entrer le nombre : ");
//     scanf("%d",&nbr);

//         for(int i=1 ; i<=nbr ;i++){
//             if (nbr%i==0)
//                 c++;
//         }
//         if(c==2){
//             printf("le nombre %d est premier;",nbr);
//         }
//         else
//             printf("le nombre %d n'est pas premier;",nbr);

// return 0;
// }

// //METHODE2
// // int main() {
// // int nbr;
// // printf("entrer le nombre : ");
// // scanf("%d",&nbr);

// //     for(int i=2 ; i<nbr ;i++){
// //         if((nbr%i)!=0){
// //                 printf("le nombre %d est premier",nbr);
// //             break;
// //         }
// //         else
// //             printf("le nombre %d  n'est pas premier \n",nbr);
// //             break;
// //     }
// //     }
#include <stdio.h>
#include <stdbool.h>

bool isValide(int n)
{
    if (n <= 1)
    {
        printf("entrer un nombre valide");

        return false;
    }
    return true;
}


bool isPremier(int n)
{
    int sum = 0;
    isValide(n);
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum++;
        }
    }
    if (sum == 1)
        return true;
    else
        return false;
}
int main()
{
    int n;
    printf("entrer un nombre:");
    scanf("%d", &n);
    if (isPremier(n))
    {
        printf("%d est premier",n);
    }
    else
    {
        printf("%d n'est pas premier",n);
    }
    return 0;
}
