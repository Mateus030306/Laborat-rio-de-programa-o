#include <stdio.h>

int main(){
    float x;
    puts("Insira x.");
    scanf("%f", &x);
    /*Pra ser sincero não entendi muito bem o que o professor pediu, 
    acho que foi mais pra fazer os alunos descobrirem a formatação do
    tipo float no printf, porque não consegui achar uma forma de manipular
    as casas decimais de uma forma geral sem ter que saber o valor do número */
    printf("valor com uma casa: %0.1f", x);
    return 0;
}