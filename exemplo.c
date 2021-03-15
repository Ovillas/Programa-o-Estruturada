#include <stdio.h>
#include <stdlib.h>

int** instanciaMatriz(int tamL, int tamC);
void exibeMatriz(int **m, int tamL, int tamC);
void leMatriz(int **m, int tamL, int tamC);

int main(){
    int i, x, y, **matriz;

    printf("Digite as dimensoes da matriz: ");
    scanf("%d %d", &x, &y);

    matriz = instanciaMatriz(x, y);
    printf("Lendo a matriz:\n");
    leMatriz(matriz, x, y);
    printf("Exibindo a matriz:\n");
    exibeMatriz(matriz, x, y);

    //liberando a matriz da memoria
    for(i=0;i<x;i++){
        free(matriz[i]);
    }
    free(matriz);
}

int** instanciaMatriz(int tamL, int tamC){
    int **m, i;

    m = (int **) malloc(sizeof(int*) * tamL);
    for(i=0;i<tamL;i++){
        m[i] = (int*) malloc(sizeof(int) * tamC);
    }

    return m;
}

void leMatriz(int **m, int tamL, int tamC){
    int i, j;

    for(i=0;i<tamL;i++){
        for(j=0;j<tamC;j++){
            scanf("%d", &m[i][j]); 
        }
    }
}

void exibeMatriz(int **m, int tamL, int tamC){
    int i, j;

    for(i=0;i<tamL;i++){
        for(j=0;j<tamC;j++){
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}