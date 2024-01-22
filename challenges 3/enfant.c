#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int age;

    printf("entrer l'age de votre enfant: ");
    scanf("%d",&age);
    if(age>=6 && age<=7){
        printf("poussin");
    }
    else if(age>=8 && age<=9){
        printf("pupille");
    }else if(age>=10 && age<=11){
        printf("minime");
    }else if(age>=12){
        printf("cadet apres 12 ans");
    }
    else{
        printf("L'âge entré n'est pas valide pour les catégories.\n");
    }
    return 0;
}
