#include <stdio.h>
int main(){
    //Fórmula do comprimento da circuferência : 2*(pi)*r
    //Fórmula da área da circuferência: (pi)*r²   
    float r;
    puts("Insira o raio.");
    scanf("%f", &r);
    float Ar, Co, Di;
    Ar=(3.14159)*r*r;
    Co=2*(3.14159)*r;
    Di=2*r;
    printf("\nÁrea: %1.1f\nComprimento: %1.1f\nDiâmetro: %1.1f", Ar, Co, Di);
    return 0;
}