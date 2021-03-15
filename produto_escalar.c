#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j; 
    int v1[100];
    int v2[100];
    int result[100];
    int resultado = 0;

    scanf("%d", &j);

    for (i = 0; i < j; i++){

        scanf("%d", &v1[i]);
    }

    for (i = 0; i < j; i++){

        scanf("%d", &v2[i]);
    }

    for (i = 0; i < j; i++){

        result[i] = v1[i] * v2[i];
        resultado = resultado + result[i];
    }
        
    printf("%d", resultado);

    return 0;
}