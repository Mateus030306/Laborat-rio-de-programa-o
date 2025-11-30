#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct aluno{
    char *nome;
    int qnotas;
    int *notas;
    float media;
};

float media(struct aluno *, int );
float op(struct aluno *, int, float (*)(struct aluno *, int));
void nomeS(struct aluno *, int);
void popS(struct aluno *, int);

int main(){
    srand(time(NULL));
    int d;
    puts("Insira a quantidade de aluno.");
    scanf("%d",&d);
    getchar();
    struct aluno *als = (struct aluno *) malloc(d*sizeof(struct aluno));
    if(als==NULL) exit(1);
    nomeS(als,d);
    unsigned char u;
    puts("Insira a quantidade de notas nos alunos. ");
    scanf("%hhu", &u);
    for(int i=0; i<d; i++){
        als[i].qnotas = u;
        als[i].notas = (int *) malloc(als[i].qnotas*sizeof(int));
        if(als[i].notas == NULL) exit(3);
    }
    for(int i=0; i<d; i++){
        popS(als,i);
    }
    for(int i=0; i<d; i++){
        als[i].media = op(als,i,media);
    }
    puts("Escolha o aluno a ser mostrado. ");
    scanf("%hhu", &u);
    printf("Aluno numero %d:\nNome: %s\nNotas: ", u, als[u].nome);
    for(int i=0; i<als[u].qnotas; i++){
        printf("%d ",als[u].notas[i]);
    }
    printf("\nMédia: %.2f",als[u].media);
    //Liberação da memória
    for(int i=0; i<d; i++){
        free(als[i].notas);
        free(als[i].nome);
    }
    free(als);
    als = NULL;
    return 0;
}

float media(struct aluno *al, int n){
    // n é o numero do aluno
    float m=0;
    for(int i=0; i<al[n].qnotas; i++){
        m+=al[n].notas[i];
    }
    return m/al[n].qnotas;
}

void nomeS(struct aluno *al, int n){
    for(int i=0; i<n; i++){
        //Tamanho max do nome do aluno:100
        char k[100];
        printf("Insira o nome do aluno %d ", i+1);
        fgets(k,100,stdin);
        k[strcspn(k,"\n")] = '\0';
        al[i].nome = malloc((strlen(k)+1)*sizeof(char));
        if(al[i].nome==NULL) exit(2);
        strcpy(al[i].nome,k);
    }
}

void popS(struct aluno *al, int n){
    //Notas variando de 0 - 10
    for(int i=0; i<al[n].qnotas; i++){
        al[n].notas[i] = rand()%11;
    }
}

//Sei que não precisava mas eu queria lembrar como fazia callbacks e pensei em fazer aqui
float op(struct aluno *al, int n, float (*func)(struct aluno *, int)){
    return func(al,n);
}