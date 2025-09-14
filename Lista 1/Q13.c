#include <stdio.h>
#include <ctype.h>
int main(){
    float temp_k, temp_c, temp_f;
    float temp;
    char op;
    puts("Insira a unidade da temperatura.\n'K' para kelvin\n'C' para celsius\n'F' para fahrenheit.");
    scanf("%c", &op);
    puts("Insira o valor da temperatura.");
    scanf("%f", &temp);
    op=toupper(op);


    switch(op){
        case 'K':
        temp_c=temp-273;
        temp_f=(9*temp-273*9+160)/5;
        printf("Temperaturas: \nCelsius: %1.f\nFahrenheit: %1.f", temp_c, temp_f);
        break;

        case 'C':
        temp_k=temp+273;
        temp_f=(9*temp+160)/5;
        printf("Temperaturas: \nKelvin: %1.f\nFahrenheit: %1.f", temp_k, temp_f);
        break;

        case 'F':
        temp_c=(5*temp-160)/9;
        temp_k=(5*temp-160+273*9)/9;
        printf("Temperaturas: \nCelsius: %1.f\nKelvin: %1.f", temp_c, temp_k);
        break;

        default:
        puts("Unidade incorreta");
    }
    return 0;
}