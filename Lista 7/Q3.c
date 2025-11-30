#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct M{
    int c;
    int l;
    int *p;
    float media;
} matriz;

matriz *Al_din_matr(int , int);
void popM(matriz *);

int main(){
    srand(time(NULL));
    int c, l;
    puts("Insira a quantidade de colunas.");
    scanf("%d", &c);
    puts("Insira a quantidade de linhas.");
    scanf("%d", &l);
    matriz *m = Al_din_matr(c,l);
    popM(m);
    for(int i=0; i<m->c; i++){
        for(int j=0; j<m->l; j++){
            printf("%d ", m->p[i*m->c+j]);
        }
        puts("\n");
    }
    free(m->p);
    free(m);
    m = NULL;
    return 0;
}

void popM(matriz *k){
    for(int i=0; i<k->c; i++){
        for(int j=0; j<k->l; j++){
            k->p[i*k->c+j] = rand()%10;
        }
    }
}

matriz *Al_din_matr(int c, int l){
    matriz *k = (matriz *)malloc(sizeof(matriz));
    k->p = (int *)malloc(c*l*sizeof(matriz));
    if(k->p==NULL) exit(1);
    k->c = c;
    k->l = l;
    return k;
}