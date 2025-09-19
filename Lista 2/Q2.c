#include <stdio.h>
int main(){
    int op;
    puts("Insira o dia da semana em número.\n1-Domingo\n2-Segunda\n3-Terça\n4-Quarta\n5-Quinta\n6-Sexta\n7-Sábado\n0-Para sair.");
    scanf("%d", &op);
    do{
        switch (op) {
            case (1):
            puts("Domingo.");
            break;

            case (2):
            puts("Segunda.");
            break;

            case (3):
            puts("Terça.");
            break;

            case (4):
            puts("Quarta.");
            break;

            case (5):
            puts("Quinta.");
            break;

            case (6):
            puts("Sexta.");
            break;

            case (7):
            puts("Sábado.");
            break;

            default:
            puts("\nNúmero de dia não válido.");
            break;
        }
        puts("\nInsira o dia novamente.");
        scanf("%d", &op);
    } while (op!=0);
    puts("Fim do programa.");
}