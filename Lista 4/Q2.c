#include <stdio.h>

int main(){
    int x;
    int *px=&x;
    int y;
    int *py=&y;
    puts("Insira x.");
    scanf("%d", px);
    puts("Insira y.");
    scanf("%d", py);

    *px=*px^*py;
    *py=*px^*py;
    *px=*px^*py;
    printf("x: %d\ny: %d", *px, *py);
    return 0;
}