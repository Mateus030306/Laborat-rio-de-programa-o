#include <stdio.h>
int main(){
    int L, C, A;
    puts("Insira a largura.");
    scanf("%d", &L);
    puts("Insira o comprimento.");
    scanf("%d", &C);
    puts("Insira a altura.");
    scanf("%d", &A);
    long int Ar=L*C*A;
    printf("Área: %ld", Ar);
    return 0;
}