#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

void pop(int [], int);
int maior(int [], int);
int menor(int [], int);
void mostr(int [], int);

int main(){
    srand(time(NULL));
    int n[MAX];
    pop(n,MAX);
    int mai= maior(n,MAX);
    int men = menor(n,MAX);
    mostr(n, MAX);
    puts("");
    for(int i=0; i<MAX; i++){
        *(n+i) = (*(n+i)-men)/(mai-men);
    }
    mostr(n,MAX);
}

void pop(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand() % 10;
    }
}

int maior(int x[], int y){
    int m=x[0];
    for(int i=0; i<y; i++){
        if(x[i]>m)
        m=x[i];
    }
    return m;
}

int menor(int x[], int y){
    int m=x[0];
    for(int i=0; i<y; i++){
        if(x[i]<m)
        m=x[i];
    }
    return m;
}

void mostr(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", *(x+i));
    }
}