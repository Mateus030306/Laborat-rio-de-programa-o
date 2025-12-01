#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
    char *nome;
    char *id;
    float valorconta;
} user;
//Farei como se fosse para um banco;
void gravacsv(FILE *, user);
char ultchar(FILE *);
int main(){
    FILE *f;
    user u;
    f = fopen("data.csv","r+");
    if(f == NULL){
        printf("Arquivo ainda não existe, criando arquivo...\n");
        f = fopen("data.csv","w+");
        if(f==NULL){
            puts("Não foi possível criar o arquivo.");
            exit(1);
        }
        fprintf(f,"Nome,valor da conta,id");
        fclose(f);
    }
    else{
        fseek(f,0,SEEK_END);
        long tam = ftell(f);
        if(!(tam)) fprintf(f,"Nome,valor da conta,id");
        fclose(f);
    }
    f = fopen("data.csv","a");
    if(f==NULL){
        puts("Erro ao abrir o arquivo.");
        exit(2);
    }
    char n[100];
    char c;
    do{
        if(getc(stdin)=='\n')
        goto rd;
        rd:
        //Sim, é uma gambiarra.
        puts("Insira o nome do usuario.");
        fgets(n,100,stdin);
        n[strcspn(n,"\n")] = '\0';
        u.nome = malloc((strlen(n)+1)*sizeof(char));
        strcpy(u.nome,n);
        puts("Insira o valor da conta do usuario.");
        scanf("%f",&u.valorconta);
        getchar();
        puts("Insira o identificador da conta.");
        fgets(n,100,stdin);
        n[strcspn(n,"\n")] = '\0';
        u.id = malloc((strlen(n)+1)*sizeof(char));
        strcpy(u.id,n);
        gravacsv(f,u);
        puts("\nDeseja continuar o processo?\ns-sim\tn-não");
        scanf("%c",&c);
    } while(toupper(c)=='S');
    free(u.nome);
    fclose(f);
    printf("Dados inseridos com sucesso");
    return 0;
}

void gravacsv(FILE *f, user a){
    fprintf(f,"%s,%.2f,%s\n",a.nome,a.valorconta,a.id);
}
