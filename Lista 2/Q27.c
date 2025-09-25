#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    int maior=0, menor=0;
    do{
        printf("\nInsira x.\t");
        scanf("%d", &x);
        if(x>maior)
        maior=x;
        if(x<menor)
        menor=x;
        printf("\nProduto entre o maior e o menor numero digitados ate agr: %d", maior*menor);
    } while (!(x<0 && x%2==0));
}