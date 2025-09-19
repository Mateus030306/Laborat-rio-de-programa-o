#include <stdio.h>
#include <math.h>
int main(){
    int x, y;
    puts("Insira x.");
    scanf("%d", &x);
    puts("Insira y.");
    scanf("%d", &y);
    if(x>y)
    for(int i=y; i<x; i++){
        if(i%4)
        continue;
        else
        printf("\n%2.f", pow(i,2));
    }
    else
        for(int i=x; i<y; i++){
        if(i%4)
        continue;
        else
        printf("\n%2.f", pow(i,2));
    }
    return 0;
}