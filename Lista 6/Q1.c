#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popv(int [], int);
void show(int [], int);
void zerarm(int **, int);
void adpos(int **, int [], int [], int);
void mostm(int **, int);

int main(){
    srand(time(NULL));
    int n;
    puts("Insira n.");
    scanf("%d", &n);
    
    int *x = malloc(n*sizeof(int));
    if(x == NULL)
    exit(1);
    
    int *y = malloc(n*sizeof(int));
    if(y == NULL)
    exit(1);
    
    popv(x,n);
    popv(y,n);
    
    int **m = malloc(n*sizeof(int *));
    
    for(int i=0; i<n; i++){
        m[i] = malloc(n*sizeof(int));
    }
    
    zerarm(m,n);
    
    adpos(m,x,y,n);

    mostm(m,n);    
    puts("");
    
    show(x,n);
    puts("");

    show(y,n);
    puts("");
    
    free(x);
    free(y);
    for(int i=0; i<n; i++){
        free(m[i]);
    }
    free(m);
    return 0;
}

void popv(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand() % y;
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}

void zerarm(int **x, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            x[i][j] = 0;
        }
    }   
}

void adpos(int **x, int a[], int b[], int n){
    for(int i=0; i<n; i++){
        x[a[i]][b[i]]++;
    }
}

void mostm(int **x, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", x[i][j]);
        }
        puts("");
    }
}
