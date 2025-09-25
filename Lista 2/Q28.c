#include <stdio.h>

int main() {
    unsigned char X, Y;
    unsigned char valores[9];
    int i;
    printf("Digite X.");
    scanf("%hhu", &X);

    do {
        printf("Digite Y maior que 5: ");
        scanf("%hhu", &Y);
    } while (Y <= 5);

    for (i = -4; i <= 4; i++) {
        valores[i+4] = Y + i; 
    }
    
    printf("\nValores originais:\n");
    for (i = 0; i < 9; i++) {
        printf("%hhu ", valores[i]);
    }
    printf("\n");

    for (i = 0; i < 8; i++) {
        int bit = (X >> i) & 1;
        valores[i + (i < 4 ? 0 : 5)] &= ~1;
        valores[i + (i < 4 ? 0 : 5)] |= bit;
    }

    printf("\nValores apos esconder X nos vizinhos de Y:\n");
    for (i = 0; i < 9; i++) {
        printf("%hhu ", valores[i]);
    }
    printf("\n");

    return 0;
}
