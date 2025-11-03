#include <stdio.h>

#define TAM 50
int main(){
    char s[TAM];
    
    puts("Insira a string.");
    scanf("%[^\n]", s);
    getchar();

    printf("%s", s);
    
    int i=0;
    char *p;
    do{
        p=(s+i);
        i++;
    } while(*p!='\0');
    printf("\nEndereco do ultimo elemento: %p \nTamanho da string: %d", p, i-1);
}