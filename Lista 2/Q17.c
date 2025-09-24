#include <stdio.h>
int main(){
    for(int i=10; i<=100; i+=10){
        printf("\nValor de %1.1f Celsius em Fahrenheit: %2.1f", (float) i, (float) (9*i+160)/5);
    }
    return 0;
}