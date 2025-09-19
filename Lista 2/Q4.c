#include <stdio.h>
int main(){
    int J=150;
    int P=110;
    int ano=0;
    while(J>=P){
        ano++;
        J+=2;
        P+=3;
    }
    printf("\nJosé ficou com altura %d e Pedro com %d em %d anos.", J, P, ano);
    return 0;
}