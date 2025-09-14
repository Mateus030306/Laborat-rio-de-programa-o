#include <stdio.h>
int main(){
    float hr_aula, desc;
    int hr;
    puts("Insira o valor da hora-aula.");
    scanf("%f", &hr_aula);
    puts("Insira a quantidade de horas trabalhadas.");
    scanf("%d", &hr);
    puts("Insira a porcentagem de descontos no salário bruto.");
    scanf("%f", &desc);
    if(desc>1){
        desc=desc/100;
    }
    float sal_b, sal_l;
    sal_b=hr_aula*hr;
    sal_l=sal_b-sal_b*desc;
    printf("\nSalário bruto: %2.1f\nSalário Líquido: %2.1f", sal_b, sal_l);
    return 0;
}