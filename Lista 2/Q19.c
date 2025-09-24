#include <stdio.h>
int main(){
    int n;
    puts("Insira o maior número inteiro da media.");
    scanf("%d", &n);
    float sum=0.0;
    for(int i=1; i<=n; i++){
        sum=sum+ ((float) i/n);
    }
    printf("\nmedia: %2.f", sum);
}