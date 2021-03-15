//Declarando Matriz Tridimensional
#include <stdio.h>

int main(){ 

    int matriz[3][4][2];
    int i,j,k;

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            for (k = 0; k < 2; k++){
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }

    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            for ( k = 0; k < 2; k++){
                printf("%d ", matriz[i][j][k]);
            }
        
            printf("\n");
        }
    }
}