#include <stdio.h>

int main(){
    int x, n;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira o expoente n.");
    scanf("%d", &n);
    int num=1;
    for(int i=0; i<n; i++){
        num=num<<1;
    }
    x*=num;
    printf("%d", x);
}