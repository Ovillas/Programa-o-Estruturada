#include <stdio.h>
#include <string.h>

//Estruturas com ponteiros

struct endereco{
    
    char nome[100];
    char rua[200];
    int num;
};

int main(){

   /* struct endereco *end;

    end = malloc(sizeof(struct endereco));

    fgets(end->nome,sizeof(end->nome),stdin);
    strtok(end->nome, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    fgets(end->rua,sizeof(end->rua),stdin);
    strtok(end->rua, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    scanf("%d%*c", &end->num); //Para o scanf não receber o valor na tecla Enter.

    printf("\n%s", end->nome);
    printf("\n%s", end->rua);
    printf("\n%d", end->num);

    free(end);*/

    struct endereco end1, *endpoint;

    fgets(end1.nome,sizeof(end1.nome),stdin);
    strtok(end1.nome, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    fgets(end1.rua,sizeof(end1.rua),stdin);
    strtok(end1.rua, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
    scanf("%d%*c", &end1.num); //Para o scanf não receber o valor na tecla Enter.

    endpoint = &end1;

    endpoint->num = 456;

    printf("\n%s", endpoint->nome);
    printf("\n%s", endpoint->rua);
    printf("\n%d", endpoint->num);

    return 0;
}
