#include <stdio.h>

#define TAM_S 50
int main(){
    char s[TAM_S];
    puts("Insira a string.");
    fgets( s, TAM_S, stdin);
    printf("String: %s", s);

    int i=0;
    while(1){
        if(s[i]=='\n'){
            printf("Tamanho da string: %d", i);
            break;
        }
        i++;
    }
    
    return 0;
}