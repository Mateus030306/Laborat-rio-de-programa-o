#include <stdio.h>
#include <math.h>
int main(){
    for(int c1=1; c1<=500; c1++){
        for(int c2=1; c2<=500; c2++){
            for(int h=1; h<=500; h++){
                if (c1+c2>h && c1+h>c2 && c2+h>c1) //Desigualdade triangular, coloquei aqui pra poupar um pouco a máquina porque ela quebra vários casos.
                    if ( sqrt((c1*c1)+(c2*c2))==h)
                        printf("\nValor do cateto 1: %d\nValor do cateto 2: %d\nValor da hipotenusa: %d\n\n", c1, c2, h);
            }
        }
    }
    return 0;
}