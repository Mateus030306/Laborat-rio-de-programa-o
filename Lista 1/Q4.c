#include <stdio.h>
int main(){
    float val;
    puts("Insira o valor da conta.");
    scanf("%f", &val);
    float tax=val*0.1;
    val+=tax;
    printf("Valor total: %1.1f \nValor para o garcom: %2.1f", val, tax);
    return 0;
}