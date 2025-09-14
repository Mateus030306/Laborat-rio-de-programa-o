#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main(){
    char x;
    puts("Imprmir alfabeto? 's' para sim.");
    scanf("%c", &x);
    x=toupper(x);
    if(x=='S'){
    for(int i=0; i<pow(2,sizeof(x)*8)-1; i++){
        x=i;
        printf("\n%c", x);
    }
    }
    else{
        printf("A=%d\n' '=%d\nB=%d\nC=%d\na=%d\nb=%d\nc=%d\n0=%d\n12=%d\n$=%d\n*=%d\n+=%d\n/=%d\n", 'A', ' ', 'B', 'C', 'a', 'b', 'c', '0', '12', '$', '*', '+', '\\');
    }
    return 0;
}