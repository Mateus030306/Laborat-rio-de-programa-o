#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
    char *nome;
    int qnotas;
    int *notas;
    float media;
} aluno;

float mediaS(aluno *);

int main(){
    char n[50];
    aluno *a = malloc(sizeof(aluno));
    puts("Insira o nome do aluno.");
    fgets(n,50,stdin);
    n[strcspn(n,"\n")] = '\0';
    a->nome = malloc((strlen(n)+1)*sizeof(char));
    if(a->nome==NULL)
    exit(1);
    strcpy(a->nome,n);
    puts("Insira a quantidade de notas.");
    scanf("%d",&a->qnotas);
    a->notas = malloc(a->qnotas*sizeof(int));
    if(a->notas==NULL)
    exit(2);
    for(int i=0; i<a->qnotas; i++){
        printf("Insira a nota %d ", i+1);
        scanf("%d", &a->notas[i]);
    }
    a->media = mediaS(a);
    printf("\nNome do aluno: %s\nNotas dele: ", a->nome);
    for(int i=0; i<a->qnotas; i++){
        printf("%d ",a->notas[i]);
    }
    printf("\nCom media: %.2f", a->media);
    free(a->nome);
    free(a->notas);
    free(a);
    a = NULL;
    return 0;
}

float mediaS(aluno *x){
    float m=0;
    for(int i=0; i<x->qnotas; i++){
        m+=(x->notas[i]);
    }
    return m/=x->qnotas;
}
