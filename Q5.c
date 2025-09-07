#include <stdio.h>
#include <ctype.h>

int main(){
    float alt;
    puts("Insira a altura.");
    scanf("%f", &alt);
    char g;
    puts("Insira o genero, H para homem e M para mulher.");
    scanf(" %c", &g);
    g=toupper(g);
    
    switch(g){
        case 'H':
        printf("Seu peso ideal: %2.1f", (72.7*alt)-58);
        break;
        case 'M':
        printf("Seu peso ideal: %2.1f", (62.1*alt)-44.7);
        break;
        default:
        puts("Valor incorreto.");
    }
    return 0;
}