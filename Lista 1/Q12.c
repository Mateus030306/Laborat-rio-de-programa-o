#include <stdio.h>
int main(){
    int a, b;
    puts("insira A.");
    scanf("%d", &a);
    puts("Insira B.");
    scanf("%d", &b);
    a^=b;
    b^=a;
    a^=b;
    printf("b=%d\n a=%d", b, a);
}