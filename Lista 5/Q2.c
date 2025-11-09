#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10

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
    printf("Primeiro par: %d\nUltimo par: %d", *endpar(n,MAX), *(endpar(n,MAX)+1));
    return 0;
}


void pop(int x[], int y){
    for(int i=0; i<y; i++){
        *(x+i)=rand() % 10;
    }
}

int *endpar(int x[], int y){
    int p_par, u_par;
    int band=1;
    for(int i=0; i<y; i++){
        if(!(x[i]%2) && x[i]!=0){
            if(band){
            p_par=x[i];
            band=0;
            }
            u_par=x[i];
        }
        else
        continue;
    }
    int *p = malloc(2*sizeof(int));
    if(!(p))
    exit(1);
    p[0]=p_par;
    p[1]=u_par;
    return p;
}