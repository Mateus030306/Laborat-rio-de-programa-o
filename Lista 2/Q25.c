#include <stdio.h>
#include <math.h>
int main(){
    float pai=0;
    int n;
    puts("Insira o nº de iterações desejadas para pi.");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        pai+= ((4.0)/(2*i+1.0))*pow( -1 , i);   
    }
    printf("\nValor aproximado de pi com %d iteraçoes : %5.5f", n, pai);
    return 0;
}