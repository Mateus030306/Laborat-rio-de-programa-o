#include <stdio.h>

#define TAM 15

int main(){
    float n[TAM];
    
    for(int i=0; i<TAM; i++){
        printf("\nInsira a pos %d ", i+1);
        scanf("%f", n+i);
    }

    float me_el=n[0];
    float ma_el=n[0];
    for(int j=1; j<TAM; j++){
        if(n[j]>ma_el)
        ma_el=n[j];
        if(n[j]<me_el)
        me_el=n[j];
    }

    printf("\nMenor elemento: %.2f\nMaior Elemento: %.2f", me_el, ma_el);
}
