#include <stdio.h>
int main(){
    int x, y;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira y.");
    scanf("%d", &y);
    printf("\nDiferença %d\n Soma: %d\n produto: %d\n resto: %d\n quociente da divisão: %d", x-y, x+y, x*y, x%y, (x-(x%y))/y);
}