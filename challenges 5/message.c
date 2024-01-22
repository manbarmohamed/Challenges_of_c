#include <stdio.h>

void bonjour(char name[50]){
    printf("bonjour %s!",name);
}
int main()
{
    char NOM[50];
    printf("entrer votre nom: ");
    scanf("%s",NOM);
    bonjour(NOM);
    return 0;
}
