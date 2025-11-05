#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 5

void pop(int [], int );
int *endpar(int [], int y);

int main(){
    int n[MAX];
    srand(time(NULL));
    pop(n,MAX);
    for(int i=0; i<MAX; i++){
        printf("%d ", *(n+i));
    }
    puts("");
    printf("Endereco do primeiro par: [%p]\nValor dele: %d", endpar(n, MAX), *endpar(n,MAX));
    return 0;
}


void pop(int x[], int y){
    for(int i=0; i<y; i++){
        *(x+i)=rand() % 10;
    }
}

int *endpar(int x[], int y){
    for(int i=0; i<y; i++){
        if(x[i]%2)
        continue;
        else if(x[i]!=0)
        return (x+i);
        else
        continue;
    }
    exit(1);
}
