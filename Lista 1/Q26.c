#include <stdio.h>
#include <math.h>
int main(){
    float x[3]; //Vou usar vetor mesmo, to cansado de escrever x1, x2,... xn;
    for(int i=0; i<3; i++){
        printf("Insira a pos %d", i+1);
        scanf("%f", &x[i]);
    }
    float ma=0;
    for(int i=0; i<3; i++){
        ma+=x[i]/3;
    }
    float mg=1;
    for(int i=0; i<3; i++){
        mg*=x[i];
    }
    mg=cbrt(mg);
    printf("Media aritmética: %2.1f\n Media geométrica: %2.1f", ma, mg);
    return 0;
}