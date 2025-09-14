#include <stdio.h>
int main(){
    int x, y;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira y.");
    scanf("%d", &y);
    (x%y==0)? puts("x é múltiplo de y."): puts("x não é múltiplo de y.");
    return 0;
}