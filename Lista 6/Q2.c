#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

void show(int [], int);
void pop(int [], int);
float EQM(int [], int [], int);
float EAM(int [], int[], int);
float gen(int [], int [], int , float (*)(int [], int [], int));

int main(){
    srand(time(NULL));
    int n;
    
    puts("Insira o tamanho n dos vetores.");
    scanf("%d", &n);
    getchar();
    int *x = malloc(n*sizeof(int));
    if(x == NULL)
    exit(1);

    int *y = malloc(n*sizeof(int));
    if(y == NULL)
    exit(1);

    pop(x,n);
    pop(y,n);

    //Assumindo x como o vetor dos valores reais e y o vetor dos valores esperados;
    char q;
    puts("Insira a opção desejada: \n0-Erro quadrático médio (EQM)\n1-Erro absoluto médio (EAM)");
    scanf("%c", &q);

    if(q)
    printf("%.3f\nVetores para fins de conferência:\n", gen(x,y,n,EAM));
    else
    printf("%.3f\nVetores para fins de conferência:\n", gen(x,y,n,EQM));

    show(x,n);
    puts("");
    show(y,n);

    free(x);
    free(y);
    return 0;
}

float gen(int x[], int y[], int n, float (*func)(int [], int [], int)){
    return func(x,y,n);
}

float EAM(int x[], int y[], int n){
    float e = 0;
    for(int i=0; i<n; i++){
        e+= abs(y[i]-x[i]);
    }

    return e/n;
}

float EQM(int x[], int y[], int n){
    float e = 0;
    for(int i=0; i<n; i++){
        e+= (float) ((y[i]-x[i])*(y[i]-x[i]));
    }
    return e/n;
}

void pop(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = (rand() % 9)+1;
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}