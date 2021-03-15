#include <stdio.h>
#include <string.h>

//Matrizes de Estruturas

struct endereco{
    
    char nome[100];
    char rua[200];
    int num;
};

int main(){

    struct endereco ends[3];
    register int i; //O comando register faz com que a variavel criada seja inicializada por um registrador no processador, deixando assim o programa mais rapido.

    for ( i = 0; i < 3; i++){
    
        fgets(ends[i].nome,sizeof(ends[i].nome),stdin);
        strtok(ends[i].nome, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
        fgets(ends[i].rua,sizeof(ends[i].rua),stdin);
        strtok(ends[i].rua, "\n"); //Para o fgets não receber e adicionar um "\n" na tecla Enter.
        scanf("%d%*c", &ends[i].num); //Para o scanf não receber o valor na tecla Enter.
    }

    for ( i = 0; i < 3; i++){
        printf("\nRegistro #%d", i);
        printf("\n%s", ends[i].nome);
        printf("\n%s", ends[i].rua);
        printf("\n%d", ends[i].num);
    }

    return 0;
}
