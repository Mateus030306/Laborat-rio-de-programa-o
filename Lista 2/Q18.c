#include <stdio.h>
#include <math.h>

int main(){
    /*Depois de um tempo raciocinando, identifiquei o padrão nessa progressão.
    Ela segue a ordem (2^n)-1, sendo n o número do quadro. portanto, o mais simples seria
    usar a função "pow" da biblioteca math.h*/
    printf("Número de grãos: %1.f", pow( 2 , 64 ) - 1);
    return 0;
}