#include <stdio.h>
int main(){
    puts("Insira n.");
    int n;
    scanf("%d", &n);
    printf("\nValor de n:%d \n Sucessor:%d \n Antecessor:%d", n, n+1, n-1);
    return 0;
}