#include <stdio.h>

#define TAM 50

int tams(char []);

int main(){
    char n[TAM], m[TAM];
    puts("Insira a primeira String.");
    fgets(n,TAM,stdin);
    puts("Insira a segunda String.");
    fgets(m,TAM,stdin);
    int q = 0;
    for(int i=tams(m); i<tams(n)+tams(n)+1; i++){
        if(q>tams(n))
        break;
        m[i] = n[q];
        q++;
    }
    printf("%s", m);
}

int tams(char x[]){ //tams : String -> Tamanho da String
    int q=0;
    while(x[q]!='\0' && x[q]!='\n'){
        q++;
    }
    return q;
}