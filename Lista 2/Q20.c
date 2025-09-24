#include <stdio.h>
int main(){
    for(int i=1; i<10; i++){
        long int fat=1;
        if (i%2){
            for(int k=1; k<=i; k++){
                fat*=k;
            }
            printf("\nFatorial de %d: %d", i, fat);
        }
    }
}