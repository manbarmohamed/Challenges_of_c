#include <stdio.h>

void sort(int T[10] ){
    int c;
    for(int i=0;i < 9;i++){
        for(int j=i+1;j<10;j++){
            if(T[i]>T[j]){
                c=T[i];
                T[i]=T[j];
                T[j]=c;
            }
        }
    }
}
void afficher(int T[]){
    for (int i = 0; i < 10; i++){
            printf("%d\n",T[i]);
    }
}
int main(){
    int T[10];
    for (int i = 0; i < 10; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);
    }
    sort(T);
    afficher(T);
    return 0;
}