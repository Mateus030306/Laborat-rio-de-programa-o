#include <stdio.h>
int main(){
    int s=0, m=0, h=0;
    puts("Insira os segundos.");
    scanf("%d", &s);
    while (s>=60){
        s-=60;
        m++;
    }
    while (m>=60){
        m-=60;
        h++;
    }
    printf("\nSegundos: %d\nMinutos: %d\nHoras: %d", s, m, h);
}