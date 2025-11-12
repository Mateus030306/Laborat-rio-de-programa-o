#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMN 6 //N é o vetor de números que vai de [0,N-1]
#define TAMP 5 //P é o vetor que armazena a contagem dos elementos de N

void pop(int [], int, int);
void show(int [], int);
void proc(int [], int[], int, int);

int main(){
    srand(time(NULL));
    int n[TAMN];
    pop(n,TAMN,TAMP);
    show(n,TAMN);
    int p[TAMP];
    proc(n,p,TAMN,TAMP);
    puts("");
    show(p,TAMP);
}

void pop(int x[], int y, int n){
    for(int i=0; i<y; i++){
        x[i] = rand() % n;
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}

void proc(int x[], int y[], int n, int m){
    for(int i=0; i<m; i++){
        y[i] = 0;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(x[i]==j)
            y[j]++;
        }
    }
}