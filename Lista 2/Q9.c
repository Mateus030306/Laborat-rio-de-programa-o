#include <stdio.h>

int main(){
    int fib[20];
    fib[0]=1;
    fib[1]=1;
    for(int i=2; i<20; i++){
        fib[i]=fib[i-1]+fib[i-2];
    } //não consegui pensar em outra forma de fazer sem usar vetores.
    for(int i=0; i<20; i++){
        printf("\n%d", fib[i]);
    }
}