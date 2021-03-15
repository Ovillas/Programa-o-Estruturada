#include <stdio.h>
#include <string.h>

//Aula 1 - Conceitos Básicos

struct endereco{
    
    char nome[100];
    char rua[200];
    int num;
};

int main(){

    struct endereco end1, end2;

    fgets(end1.nome,sizeof(end1.nome),stdin);
    strtok(end1.nome, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    fgets(end1.rua,sizeof(end1.rua),stdin);
    strtok(end1.rua, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    scanf("%d%*c", &end1.num); //Para o scanf não receber o valor na tecla Enter.

    printf("\n%s", end1.nome);
    printf("\n%s", end1.rua);
    printf("\n%d", end1.num);

    end2 = end1;

    printf("Mostrando a End2\n");
    printf("\n%s", end2.nome);
    printf("\n%s", end2.rua);
    printf("\n%d", end2.num);

    return 0;
}
