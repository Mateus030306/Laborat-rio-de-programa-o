#include <stdio.h>
int main(){
    int h, m, s;
    long int sec_re=0;
    puts("Insira as horas.");
    scanf("%d", &h);
    puts("Insira os minutos.");
    scanf("%d", &m);
    puts("Insira os segundos");
    scanf("%d", &s);
    sec_re=3600*h+60*m+s;
    printf("Total em segundos: %d", sec_re);
}