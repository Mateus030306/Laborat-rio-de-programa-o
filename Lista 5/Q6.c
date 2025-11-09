#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

float EQM(float [], float [], int);
void show(float [], int);
void pop(float [], int);

int main(){
    srand(time(NULL));
    float A[TAM], B[TAM];
    pop(A,TAM);
    pop(B,TAM);
    show(A,TAM);
    puts("");
    show(B,TAM);
    
    printf("\n%.4f", EQM(A,B,TAM));
    return 0;
}

float EQM(float x[], float y[], int n){
    float er=0;
    //Sendo x o vetor dos valores observados e y o vetor dos valores previstos;
    for(int i=0; i<n ;i++){
        er +=(*(x+i)- *(y+i))*(*(x+i)- *(y+i));
    }
    return er/n;
}

void show(float x[], int n){
    for(int i=0; i<n; i++){
        printf("%.1f ", *(x+i));
    }
}

void pop(float x[], int n){
    for(int i=0; i<n; i++){
        *(x+i) = (sqrt(rand()%100)+1)/(rand()%9+1);
    }
}