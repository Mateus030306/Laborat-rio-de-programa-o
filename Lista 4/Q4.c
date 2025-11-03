#include <stdio.h>
#include <ctype.h>

#define TAM 3
int main(){
    char op;
    puts("Insira: \nc-vetor de char\ni-vetor de int\nf-vetor de float");
    scanf("%c", &op);
    getchar();
    op=toupper(op);

    switch(op){

        case 'C':{
        char n[TAM];
        for(int i=0; i<TAM; i++){
            printf("\nInsira o caractere da pos %d.", i+1);
            scanf("%c", &n[i]);
            getchar();
        }
        for(int i=0; i<TAM; i++){
            printf("\nElemento %c com endereco [%p]", n[i], (n+i));
        }
        break;
        }

        case 'I':{
        int n[TAM];
        for(int i=0; i<TAM; i++){
            printf("\nInsira o inteiro da pos %d.", i+1);
            scanf("%d", &n[i]);
            }
        for(int i=0; i<TAM; i++){
             printf("\nElemento %d com o endereco [%p]", n[i], (n+i));
            }
        break;
        }

        case 'F':{
        float n[TAM];
        for(int i=0; i<TAM; i++){
            printf("\nInsira o real da pos %d", i+1);
            scanf("%f", &n[i]);
        }
        for(int i=0; i<TAM; i++){
            printf("\nElemento %.4f com o endereco [%p]", n[i], (n+i));
        }
        break;
    }
    }
/* Não entendi muito bem o que deveria ser observado aqui, mas no que diz respeito ao padrão na localização dos dados
na memória, já era esperado devido ao tamanho (em bytes) de cada um dos 3 tipos aqui testados, então essa foi a única
conclusão que pude tirar do teste. */
    return 0;
}