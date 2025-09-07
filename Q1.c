#include <stdio.h>
#include <ctype.h>
int main(){

    char val[8];
    for(int i=0; i<8; i++){
        val[i]=-1;
    }

    int x;
    puts("\nInsira o número.");
    scanf("%d", &x);
    char op;
    puts("\nHexadecimal ou Octal?\n'H' para hexadecimal e 'O' para octal.");
    scanf(" %c", &op);
    op=toupper(op);

    if(op=='H'){
        short int r = x % 16;
        short int q = (x - r)/16;
        val[0]=r;
        for(int i=1; i<7; i++){
            short int r1 = q % 16;
            q = ( q - r1 )/16;
            val[i]=r1;
            if(q<16){
                val[i+1]=q;
                break;
            }
            else{}
        }
    for(int i=7; i>=0; i--){
        if(val[i]>=0)
        printf("%x", val[i]);
        else{}
        }
    }
    else if(op=='O'){
                short int r = x % 8;
        short int q = (x - r)/8;
        val[0]=r;
        for(int i=1; i<7; i++){
            short int r1 = q % 8;
            q = ( q - r1 )/8;
            val[i]=r1;
            if(q<8){
                val[i+1]=q;
                break;
            }
            else{}
        }
    for(int i=7; i>=0; i--){
        if(val[i]>=0)
        printf("%o", val[i]);
        else{}
        }
    }
    else
    printf("Opção inválida.");
    return 0;
}