#include <stdio.h>
#include <math.h>
int main(){
    int n;
    puts("\nInsira o valor de n.");
    scanf("%d", &n);
    printf("\nQuadrado de %d: %d", n, (int)pow(n,2));
    return 0;
}