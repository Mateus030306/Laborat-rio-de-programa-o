#include <stdio.h>

#define TAM_S 50

int main(){
    char s[TAM_S];
    puts("Insira a string.");
    scanf("%[^\n]s", s);
    getchar();
    char n;
    puts("Insira o caracter a ser procurado.");
    scanf("%c", &n);

    unsigned char p=1;
    for(int i=0; i<TAM_S; i++){
        if(s[i]==n){
            printf("Caracter %c encontrado na pos %d em: \n%s", n, i+1, s);
            p=0;
            break;
        }
    }
    if(p)
    printf("Caracter %c não encontrado em:\n%s", n, s);
    
    return 0;
}