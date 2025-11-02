#include <stdio.h>
#include <string.h>

#define TAM_S 50

int main(){
    char s[TAM_S];
    puts("Insira a primeira string.");
    scanf("%[^\n]", s);
    getchar();

    int i=0;
    while(1){
        if(s[i]=='\0')
        break;
        else
        i++;
    }
    
    char m[TAM_S];
    puts("Insira a segunda string.");
    scanf("%[^\n]", m);
    getchar();
    
    //Versão com strcat;
    printf("Nova string através do strcat: %s", strcat(s,m));
    
    int j=0;
    while(1){
        if(m[j]=='\0')
        break;
        else
        j++;
    }
    int l=0;
    for(int k=i; k<=i+j; k++){
        if(k==i+j){
            s[k]='\0';
            break;
        }
        s[k]=m[l];
        l++;
    }
    
    printf("\nNova string: %s", s);
    return 0;
}