#include <stdio.h>
int main(){
    int x=5;
    printf("\nValor de x: %d", x);
    x= --x - x;
    printf("\nNeste caso: %d \tx foi pre incrementado.", x);
    x=5;
    x= x-- - x;
    printf("\nNeste caso: %d \tx foi pos incrementado.", x);
}