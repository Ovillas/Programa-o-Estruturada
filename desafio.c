#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, j;
    char vetor[5][5];

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            scanf("%c", &vetor[i][j]);
        }
    }
     
    
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("\n%c", vetor[i][j]);
        }
    }

    
}