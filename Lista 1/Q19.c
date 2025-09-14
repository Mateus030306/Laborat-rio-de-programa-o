#include <stdio.h>
int main(){
    int x;
    puts("Insira x.");
    scanf("%d", &x);
    (x%2)? puts("x é ímpar."): puts("x é par.");
    return 0;
}