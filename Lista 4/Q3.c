#include <stdio.h>

int main(){
    int x=1, *p, m;
    puts("\nInsira x.");
    scanf("%d", &x);
    p=&m;
    while (x) {
        if(x<*p)
        *p=x;
        printf("\nMenor numero ate agora: %d", m);
        puts("\nInsira x.");
        scanf("%d", &x);
    }
    return 0;
}