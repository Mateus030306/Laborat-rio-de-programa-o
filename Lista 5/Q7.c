#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 5

void pop(int [TAM][TAM], int);
void show(int [TAM][TAM], int);
void binar(int [TAM][TAM], int [TAM][TAM], int, int);

int main(){
    srand(time(NULL));
    unsigned char u;
    puts("Insira o limiar l.");
    scanf("%hhu", &u);
    int M[TAM][TAM];
    int S[TAM][TAM];
    pop(M,TAM);
    show(M,TAM);
    binar(M,S,TAM,u);
    puts("");
    show(S,TAM);
}

void binar(int x[TAM][TAM], int y[TAM][TAM], int z, int l){
    for(int i=0; i<z; i++){
        for(int j=0; j<z; j++){
            y[i][j] = (x[i][j]>l)?1:0;
        }
    }
}

void pop(int x[TAM][TAM], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            x[i][j] = rand()%10;
        }
    }
}

void show(int x[TAM][TAM], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", x[i][j]);
        }
        puts("");
    }
}