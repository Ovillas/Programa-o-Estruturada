#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, k, l, result1, result2, total, tam;
    int vetor[50][50];

    scanf("%d", &k);
    scanf("%d", &l);

    tam = k*l;

    for (i = 0; i < k; i++){
        for (j = 0; j < l; j++){
            scanf("%d", &vetor[i][j]);
        }
    }

    for (i = 0; i < k; i++){
        for (j = 0; j < l; j++){
            if (i == j){
                if (vetor[i][j] == 1){
                    result1 = result1 + 1;
                }
            }

            if (i != j){
                if (vetor[i][j] == 0){
                    result2 = result2 + 1;
                }
            }
        }
    }

    total = result1+result2;

    if (total == tam){
        printf("Eh matriz identidade.");
    }else{
        printf("Nao eh matriz identidade.");
    }
    
    return 0;
}