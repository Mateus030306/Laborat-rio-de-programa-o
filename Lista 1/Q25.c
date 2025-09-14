#include <stdio.h>
#include <math.h>
int main(){
    int x1, x2, y1, y2;
    puts("Insira x1.");
    scanf("%d", &x1);
    puts("Insira x2.");
    scanf("%d", &x2);
    puts("Insira y1.");
    scanf("%d", &y1);
    puts("Insira y2.");
    scanf("%d", &y2);
    float d=sqrt( ( pow( x2-x1 , 2 ) + pow( y2-y1 , 2 ) ) );
    printf("%2.1f", d);
    return 0;
}