








#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void pop(int [TAM][TAM], int);
void show(int [TAM][TAM], int);

int main(){
    srand(time(NULL));

    int n[TAM][TAM];
    pop(n,TAM);
    show(n,TAM);
    printf("%s\n", (Dsum(n,TAM)%2)?"A soma é ímpar.":"A soma é par.");
    return 0;
}

void pop(int x[TAM][TAM], int y){
    for(int i=0; i<y; i++){
        for(int j=0; j<y; j++){
            x[i][j] = rand() % 10;
        }
    }
}

void show(int x[TAM][TAM], int y){
    for(int i=0; i<y; i++){
        for(int j=0; j<y; j++){
            printf("%d ", x[i][j]);
        }
        puts("");
    }    
}

int Dsum(int x[][TAM], int y){
    int sum=0;
    for(int i=0; i<y; i++){
        sum += x[i][i];
    }
    return sum;
}