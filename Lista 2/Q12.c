#include <stdio.h>
int main(){
    int n;
    puts("Insira n.");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        printf("\n%d * %d = %d", n, i, n*i);
    }
    return 0;
}