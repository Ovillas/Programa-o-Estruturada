#include <stdio.h>
#include <string.h>

//Funções e Estruturas

struct endereco{
    
    char nome[100];
    char rua[200];
    int num;
};

void mostraCampoStringEstrutura(char *nome, char *rua){

    printf("\n%s", nome);
    printf("\n%s", rua);
}

void mostraCampoIntEstrutura(int numero){

    printf("\n%d", numero);
}

void mostraEstrutura(struct endereco end){

    printf("\n%s", end.nome);
    printf("\n%s", end.rua);
    printf("\n%d", end.num);
}

int main(){

    struct endereco end1;

    fgets(end1.nome,sizeof(end1.nome),stdin);
    strtok(end1.nome, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    fgets(end1.rua,sizeof(end1.rua),stdin);
    strtok(end1.rua, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    scanf("%d%*c", &end1.num); //Para o scanf não receber o valor na tecla Enter.

    mostraCampoStringEstrutura(end1.nome, end1.rua);
    mostraCampoIntEstrutura(end1.num);
    mostraEstrutura(end1);
    
    return 0;
}
