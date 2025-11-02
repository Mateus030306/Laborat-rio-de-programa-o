#include <stdio.h>

#define TAM 3

int main(){
    int n[TAM][TAM];
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("Insira a pos %d %d ", i+1, j+1);
            scanf("%d", &n[i][j]);
        }
    }
    printf("\nElementos da diagonal:\n");
    for(int i=0; i<TAM; i++){
        printf("%d", n[i][i]);
        puts("");
    }
}