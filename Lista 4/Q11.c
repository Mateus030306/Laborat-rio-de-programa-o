#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 7

void show(int [], int);
void pop(int [], int);
void matriz(int [TAM][TAM], int [], int [], int);

int main(){
    srand(time(NULL));
    int h[TAM], g[TAM];
    int f[TAM][TAM];
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            f[i][j] = 0;
        }
    }
    pop(h,TAM);
    show(h,TAM);
    pop(g,TAM);
    puts("");
    show(g,TAM);
    matriz(f,h,g,TAM);
    puts("\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%d ", f[i][j]);
        }
        puts("");
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}

void pop(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand() % TAM;
    }
}

void matriz(int x[TAM][TAM], int y[], int z[], int n){
    for(int i=0; i<n; i++){
        x[y[i]][z[i]]++;
    }
}