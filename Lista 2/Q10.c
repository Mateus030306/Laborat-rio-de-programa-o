#include <stdio.h>
#include <math.h>
int main(){
    for(int i=15; i<90; i++){
        if (i%4)
        continue;
        else
        printf("\n%1.f", pow(i,2));
    }
    return 0;
}