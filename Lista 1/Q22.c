#include <stdio.h>
int main(){
    int x;
    puts("Insira x.");
    scanf("%d", &x);
    int p1, p2, p3;
    p1=x%10;
    p2=(x%100-x%10)/10;
    p3=(x-p2-p1)/100;
    printf("%d%d%d", p1,p2,p3);
}