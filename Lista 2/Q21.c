#include <stdio.h>

int main(){
    int n;
    puts("Insira um numero de 5 digitos.");
    scanf("%d", &n);
    int p1, p2, p3, p4, p5;
    p1=(n-n%10000);
    p2=(n-n%1000-p1);
    p3=(n-n%100-p2-p1);
    p4=(n-n%10-p3-p2-p1);
    p5=n-p4-p3-p2-p1;
    p1/=10000;
    p2/=1000;
    p3/=100;
    p4/=10;
    if( p1==p5 && p2==p4)
    printf("\no numero %d é simetrico.", n);
    else
    printf("\n%d não é simétrico.", n);
}