#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popv(int [], int);
void show(int [], int);

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
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m[i][j] = 0;
        }
    }

    for(int i=0; i<n; i++){
        m[x[i]][y[i]]++;
    }
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d ", m[i][j]);
        }
        puts("");
    }
    
    
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
