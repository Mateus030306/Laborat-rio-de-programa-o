#include <stdio.h>
int main(){
    for(int i=1; i<=256; i++){
        printf("\nHexadecimal de %d: %x", i, i);
        printf("\nOctal de %d: %o", i, i);
    }
    
}