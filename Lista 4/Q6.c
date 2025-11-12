#include <stdio.h>
#include <string.h>
 
#define TAM 50

int main(){
    char n[TAM], m[TAM];
    puts("Insira a string que sera colada.");
    fgets(n,TAM,stdin);
    puts("Insira a string que sera sobrescrita.");
    fgets(m,TAM,stdin);
    puts("");

    int i=0;
    while(1){
        if(n[i]=='\0')
        break;
        i++;
    }
    
    int q = i;
    i=0;
    //q é o tamanho de n. colocar n em m;
    while(i<q-1){
        m[i] = n[i];
        i++;
    }
    
    printf("%s", m);
    getchar();
    return 0;
}