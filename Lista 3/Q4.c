#include <stdio.h>
#include <string.h>

#define TAM_S 50

int main(){
    char s[TAM_S];
    puts("Insira a string.");
    scanf("%[^\n]", s);
    getchar();

    char m[TAM_S];
    puts("Insira a segunda string.");
    scanf("%[^\n]", m);
    getchar();
    
    unsigned char p=1;
    int i=0;
    while (s[i] != '\0' || m[i] != '\0'){
        if (s[i] != m[i]){
            p = 0;
            break;
        }
        i++;
    }

    if(p)
    printf("As strings: \n%s \n%s \nsão iguais.", s, m);
    else
    printf("As strings: \n%s \n%s \nnão são iguais.", s, m);

    //Comparação com strcmp
    if(!(strcmp(s,m)))
    printf("\nAmbas são idênticas. Via strcmp.");
    return 0;
}