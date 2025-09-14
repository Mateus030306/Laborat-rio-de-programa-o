#include <stdio.h>
int main(){
    int x;
    puts("Insira x.");
    scanf("%d", &x);
    (x<0) ? x=x*(-1) : 1;
    printf("\n%d", x);
}