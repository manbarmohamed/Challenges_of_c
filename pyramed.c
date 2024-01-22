// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char const *argv[])
// {
//     /* code */
//     int i, j,num;
//     printf("entrer un nombre entier: ");
//     scanf("%d",&num);
//     for (i = 1; i < num; i++)
//     {
//         for (j = 1; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// SORT AN ARRAY
// #include<stdio.h>
// void main ()
// {
//     int i, j,temp;
//     int a[10] = { 10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
//     for(i = 0; i<10; i++)
//     {
//         for(j = i+1; j<10; j++)
//         {
//             if(a[j] > a[i])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     printf("Printing Sorted Element List ...\n");
//     for(i = 0; i<10; i++)
//     {
//         printf("%d\n",a[i]);
//     }
// }

#include <stdio.h> #include <string.h>
// Structure to represent a bank account
struct BankAccount
{
    int accountNumber;
    char accountHolderName[50];
    float balance;
}; // Function to transfer money between two accounts
void transferMoney(struct BankAccount *sender, struct BankAccount *receiver, float amount)
{
    if (sender->balance >= amount)
    {
        sender->balance -= amount;
        receiver->balance += amount;
        printf("Amount transferred successfully!\n");
    }
    else
    {
        printf("Insufficient balance!\n");
    }
} // Function to create a new account
void createAccount(struct BankAccount *account)
{
    printf("Enter account number: ");
    scanf("%d", &(account->accountNumber));
    printf("Enter account holder name: ");
    scanf("%s", account->accountHolderName);
    printf("Enter initial balance: ");
    scanf("%f", &(account->balance));
    printf("Account created successfully!\n");
} // Function to check account balance 
void checkBalance(struct Ba