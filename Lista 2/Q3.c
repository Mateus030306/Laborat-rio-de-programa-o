#include <stdio.h>
int main(){
    int n;
    puts("Insira n.");
    scanf("%d", &n);
    long int fat=1;
    for(int i=1; i<=n; i++){
        fat*=i;
    }
    printf("fatorial de %d: %d", n, fat);
    return 0;
}