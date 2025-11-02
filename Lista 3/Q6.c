#include <stdio.h>
#include <string.h>

#define TAM_S 50

int main(){
    char s[TAM_S];
    puts("Insira a string.");
    scanf("%[^\n]", s);

    for(int i=strlen(s); i>=0; i--){
        printf("%c", s[i]);
    }

    return 0;
}