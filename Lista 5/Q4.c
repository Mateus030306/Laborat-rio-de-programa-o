#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3
void soma(float [], float * , int);
void pop(float [], int);
void show(float [], int);

int main(){
    srand(time(NULL));

    float n[TAM];
    float sum;

    pop(n,TAM);
    show(n,TAM);
    soma(n, &sum ,TAM);

    printf("\n%.2f", sum);
}

void soma(float x[], float *s, int y){
    *s=0;
    for(int i=0; i<y; i++){
        *s+=x[i];
    }
}

void pop(float x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand() % 10;
    }
}

void show(float x[], int y){
    for(int i=0; i<y; i++){
        printf("%.2f ", x[i]);
    }
}