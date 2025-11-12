#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

void pop(int [], int);
void show(int [], int);
void precy(int [], int [], int);
void matriz(int [][], int [], int [], int);

int main(){
    srand(time(NULL));
    int x[TAM], y[TAM];
    pop(x,TAM);
    show(x,TAM);
    puts("");
    precy(x,y,TAM);
    show(y,TAM);
}

void pop(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand() % TAM;
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}

void precy(int x[], int y[], int n){
    int r = rand() % 11 ;
    for(int i=0; i<n; i++){
        y[i] = (r<=3)?x[i]:(r<=5)?x[i]-1:(r<=7)?x[i]+1:(r<=9)?x[i]-2:x[i]+2;
    }
    
    //tirando os negativos
    for(int i=0; i<n ; i++){
        if(y[i]<0)
        y[i] = -y[i];
    }
}

void matriz(int x[TAM][TAM], int y[], int z[], int n){
    for(int i=0; i<n; i++){
        x[y[i]][z[i]]++;
    }
}