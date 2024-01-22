#include <stdio.h>
int search(int T[],int taille , int x){
    for (int i = 0; i < taille; i++){
        if(T[i]==x)
            return i;
    }
    return -1;
    
}
int main(){
    int x,taille,res;
    printf("entrer la taille du tableau: ");
    scanf("%d",&taille);
    int T[taille];
    for (int i = 0; i < taille; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }
    printf("entrer la valeur rechercher: ");
    scanf("%d",&x);
    res=search(T,taille,x);
    if(res==-1)
        printf("la valeur rechercher ne se trouve pas dans le tableau");
    else
        printf("la valeur %d se trouve a la position %d",x,res);
    return 0;
}