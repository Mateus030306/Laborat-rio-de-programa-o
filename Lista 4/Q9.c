#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void pop(int [],int );
void show(int [], int);
void ordb(int [], int);

int main(){ 
    srand(time(NULL));
    int n[TAM];
    pop(n,TAM);
    show(n,TAM);    
    ordb(n,TAM);
    puts("");
    show(n,TAM);
}

void pop(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand() % 10;
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}

void ordb(int x[], int y){
    for(int i=0; i<y-1; i++){
        for(int j=0; j<y-i-1; j++){
            if(x[j]>x[j+1]){
                x[j] = x[j+1] ^ x[j];
                x[j+1] = x[j+1] ^ x[j];
                x[j] = x[j+1] ^ x[j];
            }
        }
    }
}