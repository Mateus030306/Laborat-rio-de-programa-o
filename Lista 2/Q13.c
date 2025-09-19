#include <stdio.h>
int main(){
    int x, y;
    int sum=0;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira y.");
    scanf("%d", &y);
    if(x>y)
    for(int i=y; i<=x; i++){
        if(i%2)
        continue;
        else
        sum+=i;
    }
    else
        for(int i=x; i<=y; i++){
        if(i%2)
        continue;
        else
        sum+=i;
    }
    printf("\nSoma: %d", sum);
}