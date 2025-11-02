#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAM 100

int main(){
    int n[TAM];
    srand(time(NULL));
    int p, q; //numeros no intervalo [p,q]

    do{
    puts("Insira o limite inferior.");
    scanf("%d", &p);
    puts("Insira o limite superior.");
    scanf("%d", &q);
    } while(p<0 && q<=0);

    for(int i=0; i<TAM; i++){
        n[i]=(rand()%(q-p+1))+p;
    }

    for(int i=0; i<20; i++){
        printf("%d ", n[i]);
    }

    unsigned char op;
    puts("\nInsira a opção desejada de ordenação:\n1-selection sort\n0=bubbles sort.");
    scanf("%hhu", &op);

    if(op%2){
    for(int i=0; i<TAM-1; i++){
        for(int j=i+1; j<TAM; j++){
            if(n[i]>n[j]){
                n[i]=n[i]^n[j];
                n[j]=n[i]^n[j];
                n[i]=n[i]^n[j];
            }
        }
    }
    }
    else{
        for(int i=0; i<TAM-1; i++){
            for(int j=0; j<TAM-1-i; j++){
                if(n[j]>n[j+1]){
                    int temp=n[j];
                    n[j]=n[j+1];
                    n[j+1]=temp;
                }
            }
        }
    }

    puts("");
    for(int i=0; i<20; i++){
        printf("%d ", n[i]);
    }
    return 0;
}