#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 6

void show(int [], int);
void preencher(int [], int);
float media(int [], int);
float mediana(int [], int);
float moda(float [], int);

int main(){
    srand(time(NULL));
    int n[TAM];
    preencher(n,TAM);
    show(n,TAM);
    char c;
    puts("\nInsira a opção desejada:\n1-Media\n2-Moda\n3-Mediana");
    scanf("%c", &c);
    switch (c){
        case '1':
        printf("Media do vetor: %.3f", media(n,TAM));
        break;

        case '2':
        printf("Moda do vetor: %.3f", moda(n,TAM));
        break;

        case '3':
        printf("Mediana do vetor: %.3f", mediana(n,TAM));
        break;

        default:
        puts("Opcao invalida.");
    }
}

void show(int x[], int y){
    for(int i=0; i<y; i++){
        printf("%d ", x[i]);
    }
}

void preencher(int x[], int y){
    for(int i=0; i<y; i++){
        x[i] = rand()%21;
    }
}

float media(int x[], int y){
    float m=0;
    for(int i=0; i<y; i++){
        m+= (float) x[i]/y;
    }
    return m;
}

float mediana(int x[], int y){
    for(int i=0; i<y-1; i++){
        for(int j=i+1; j<y; j++){
            if(x[i]>x[j]){
                x[i] = x[i] ^ x[j];
                x[j] = x[i] ^ x[j];
                x[i] = x[i] ^ x[j];
            }
        }
    }
    float mn=0;
    if (y%2)
    mn = x[y/2];
    else
    mn = (float) (x[y/2]+x[(y/2)-1])/2;
    return mn;
}

float moda(int x[], int y){
    int contador;
    int pos;
    int ordem[y];
    for(int i=0; i<y-1; i++){
        for(int j=i+1; j<y; j++){
            if(x[i]>x[j]){
                x[i] = x[i] ^ x[j];
                x[j] = x[i] ^ x[j];
                x[i] = x[i] ^ x[j];
            }
        }
    }

    for(int i=0; i<y; i++){
        contador = 1;
        pos = x[i];
        for(int j=i+1; j<y; j++){
            if(pos==x[j])
            contador++;
        }
        

    }
}