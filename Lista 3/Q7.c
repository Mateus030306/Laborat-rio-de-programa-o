#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand(time(NULL));
    int n[3];

    for(int i=0; i<3; i++){
        n[i]=rand() % 20;
    }

    puts("Vetor:");
    for(int i=0; i<3; i++){
        printf("%d ", n[i]);
    }

    float med=0;
    for(int i=0; i<3; i++){
        med+= (float) n[i]/3;
    }

    float medg=1;
    for(int i=0; i<3; i++){
        if(!(n[i])) //Para evitar o caso n[i]=0 -> medg=0;
        continue;
        medg*=n[i];
    }
    medg=(float) pow(medg, 0.333);

    printf("\nMedia aritmetica: %.3f\nMedia geometrica: %.3f", med, medg);
    puts("\nInsira 1.");
    return 0;
}