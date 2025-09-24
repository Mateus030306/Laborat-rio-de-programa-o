#include <stdio.h>
int main(){
    int n;
    puts("Insira n.");
    scanf("%d", &n);
    int i=0;
    int nmr=n;
    while(nmr>=1){
        if (nmr%10==7)
        i++;
        nmr/=10;
    }
    printf("%d tem %d setes", n, i);
}