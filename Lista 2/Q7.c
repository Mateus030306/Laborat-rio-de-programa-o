#include <stdio.h>
int main(){
    int x, y;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira y.");
    scanf("%d", &y);
    while(y){
        printf("\nDivisão inteira de x por y: %d", x/y);
        puts("\nInsira x.");
        scanf("%d", &x);
        puts("Insira y.");
        scanf("%d", &y);
    }
    return 0;
}