#include <stdio.h>
int main(){
    int x, y;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira y.");
    scanf("%d", &y);
    int qt=0;
    if(x>y)
    for(int i=y; i<=x; i++){
        if(i%3)
        continue;
        else
        qt++;
    }
    else
    for(int i=x; i<=y; i++){
        if(i%3)
        continue;
        else
        qt++;
    }
    printf("\nQuantidade de divisores de 3 entre %d e %d: %d", x, y, qt);
    return 0;
}