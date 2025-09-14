#include <stdio.h>
int main(){
    int dias;
    float sal_b, sal_l;
    puts("Insira o nº de dias.");
    scanf("%d", &dias);

    if(dias<=10){
        sal_b=dias*50.25;
    }
    else if(dias<=20){
        sal_b=dias*50.25;
        sal_b+=sal_b*0.2;
    }
    else{
        sal_b=dias*50.25;
        sal_b+=sal_b*0.3;
    }
    sal_l=sal_b-sal_b*0.1;
    
    printf("Salário bruto: %1.f\n Salário líquido: %1.f(após descontos)\n", sal_b, sal_l);
    return 0;
}