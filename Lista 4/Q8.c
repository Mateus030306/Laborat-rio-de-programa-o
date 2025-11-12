#include <stdio.h>

#define TAM 50

char *proc(char *, char , int);

int main(){
    char n[TAM], c;
    
    puts("Insira a string.");
    fgets(n,TAM,stdin);
    puts("Insira o caracter.");
    scanf("%c", &c);

    (proc(n,c,TAM))?printf("Caracter %c achado em %s", c, n):printf("Caracter %c não achado em %s", c, n);
    return 0;
}

char *proc(char *x, char y, int z){
    for(int i=0; i<z; i++){
        if(x[i]==y)
        return &x[i];
    }
    return NULL;
}