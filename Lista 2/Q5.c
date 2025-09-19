#include <stdio.h>
int main(){
    int x;
    int y;
    puts("Insira dois números para serem comparados, caso qualquer um seja 0 o programa termina.");
    do{
        puts("\nInsira x.");
        scanf("%d", &x);
        puts("\nInsira y.");
        scanf("%d", &y);
        if(x>y)
        printf("\n%d é maior que %d", x, y);
        else
        printf("\n%d é maior que %d", y, x);
    } while(x!=0 && y!=0);
    puts("\nFim do programa.");
}