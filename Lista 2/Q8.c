#include <stdio.h>
#include <math.h>
int main(){
    float val;
    puts("Insira o valor total");
    scanf("%f", &val);
    int par=floor(val/3);
    float entr=val-2*par;
    printf("Valor do total:%2.1f\nValor da entrada:%2.2f\nValor das parcelas:%d", val, entr, par);
    return 0;
}