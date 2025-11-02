#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main(){
    int n[TAM][TAM];
    srand(time(NULL));

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            n[i][j]=(rand()%10)+1;
        }
    }

    int x;
    puts("Insira o elemento a se procurar. (somente entre 1 e 10)");
    scanf("%d", &x);
    
    unsigned char p=1;
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if(n[i][j]==x){
                printf("Numero %d encontrado em [%d][%d]\t", x, i+1, j+1);
                p=0;
            }
        }
    }
    if(p)
    printf("\nElemento não encontrado;");

    printf("\nMatriz:\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%d  ", n[i][j]);
        }
        puts("\n");
    }
    
    return 0;
}