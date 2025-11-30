#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct professor{
    char *nome;
    int horas;
} prof;

typedef struct disc{
    char *nome;
    int carga_horaria;
    prof *p;
} disciplina;

void nomeSd(disciplina *);
void nomeSp(prof *);

int main(){
    disciplina *lab = (disciplina *) malloc(sizeof(disciplina));
    if(lab==NULL) exit(1);
    lab->p = (prof *) malloc(sizeof(prof));
    if(lab->p==NULL) exit(2);
    nomeSd(lab);
    nomeSp(lab->p);
    puts("Insira a carga horária da disciplina. ");
    scanf("%d", &lab->carga_horaria);
    puts("Insira a carga horária do professor. ");
    scanf("%d", &lab->p->horas);
    printf("\nNome da disciplina: %s\nCarga horária da disciplina: %d\nNome do professor: %s\nCarga horária do professor: %d", lab->nome, lab->carga_horaria, lab->p->nome, lab->p->horas);
    //liberacao da memoria
    free(lab->p->nome);
    free(lab->p);
    free(lab->nome);
    free(lab);
    lab = NULL;
    return 0;
}

void nomeSd(disciplina *d){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    char n[100];
    puts("Insira o nome da disciplina");
    fgets(n,100,stdin);
    getchar();
    n[strcspn(n,"\n")] = '\0';
    d->nome = (char *) malloc((strlen(n)+1)*sizeof(char));
    if(d->nome==NULL) exit(3);
    strcpy(d->nome,n);
}

void nomeSp(prof *p){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    char n[100];
    puts("Insira o nome do professor. ");
    fgets(n,100,stdin);
    getchar();
    n[strcspn(n,"\n")] = '\0';
    p->nome = (char *) malloc((strlen(n)+1)*sizeof(char));
    if(p->nome==NULL) exit(4);
    strcpy(p->nome,n);
}