#include <stdio.h>
int main(){
    long int sum3=0;
    long int sum5=0;
    for(int i=0; i<=100; i++){
        if (!(i%3))
        sum3+=i;
        if (!((200-i)%5) && (200-i)!=100)
        sum5+=(200-i);
    }
    printf("somatorio de 3: %d\nsomatorio de 5: %d\nsomatorio de ambos: %d", sum3, sum5, sum3+sum5);
}