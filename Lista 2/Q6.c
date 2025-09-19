#include <stdio.h>
#include <ctype.h>
int main(){
    char op;
    int vt_P=0, vt_R=0, vt_b=0;
    do{
        puts("Insira o número do candidato. \n5-Paulo \n7-Renata \n0-Voto nulo \n(Também é Aceito 'P' e 'R' para Paulo e Renata respectivamente).");
        scanf("%c%*c", &op);

        if (op=='5' || toupper(op)=='P')
            op=5;
        if (op=='7' || toupper(op)=='R')
            op=7;
        if (op=='0')
            op=0;

            switch (op){
                case (5):
                puts("\nVoto para o candidato Paulo.");
                vt_P++;
                break;

                case (7):
                puts("\nVoto para a candidata Renata.");
                vt_R++;
                break;

                case (0):
                puts("\nVoto branco.");
                vt_b++;
                break;

                default:
                puts("\nVoto nulo ou inválido.");
                break;
            }
    } while ( (int) op-'0' <= 127);
    /*O código está sem condição de parada porque eu quis fazer com que pudesse ser inserido tanto números (5 e 7) quanto letras (R e P)
    não achei uma forma de consertar.*/
    printf("Numero de votos de cada candidato e brancos:\nPaulo:%d\nRenata:%d\nBrancos:%d", vt_P, vt_R, vt_b);
    return 0;
}