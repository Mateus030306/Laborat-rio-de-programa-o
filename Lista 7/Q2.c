#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct estq{
    char *nomePeca;
    int npedido;
    int npeca;
    float preco;

} estoque;

int main(){
    char n[50];
    estoque *peca = malloc(sizeof(estoque));
    puts("Insira o nome da peça.");
    fgets(n,50,stdin);
    n[strcspn(n,"\n")] = '\0';
    peca->nomePeca = malloc((strlen(n)+1)*sizeof(char));
    strcpy(peca->nomePeca,n);
    puts("Insira o numero da peca.");
    scanf("%d",&peca->npeca);
    puts("Insira o numero do pedido.");
    scanf("%d",&peca->npedido);
    puts("Insira o valor da peca.");
    scanf("%f",&peca->preco);
    puts("\n");
    printf("Nome da peca: %s\nNumero da peca: %d\nNumero do pedido: %d\nValor da peca: %.2f",peca->nomePeca,peca->npeca,peca->npedido,peca->preco);
    free(peca->nomePeca);
    free(peca);
    peca = NULL;
    return 0;
}