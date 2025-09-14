#include <stdio.h>
int main(){
    puts("Insira a atual cotação do dólar.");
    float cot;
    scanf("%f", &cot);
    puts("Insira a quantidade de R$ que deseja converter.");
    float R;
    scanf("%f", &R);
    float conv= R/cot;
    printf("Valor em dólar: %2.1f", conv);
}