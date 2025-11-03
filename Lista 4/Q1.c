#include <stdio.h>

int main(){
    int x, y;
    int *px=&x, *py=&y;

    puts("Insira y.");
    scanf("%d", py);
    puts("Insira x.");
    scanf("%d", px);
    
    int sum=*px+*py;
    printf("%d + %d : %d", *px, *py, sum);
    return 0;
}
