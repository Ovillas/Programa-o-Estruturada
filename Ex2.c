#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, k, l;
    float soma = 0;
    float vetor[50][50];

    scanf("%d", &k);
    scanf("%d", &l);

    for (i = 0; i < k; i++){
        for (j = 0; j < l; j++){
            scanf("%f", &vetor[i][j]);
        }
    }

    for(i=0; i<k; i++){
        for(j=0; j<=i; j++){
                soma = soma + vetor[i][j];
        }
    }

    printf("Soma = %.2f", soma);
}