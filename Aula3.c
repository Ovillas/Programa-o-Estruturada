//Alocação Dinamica na Memoria
#include <stdio.h>
#include <stdlib.h>

float main(){

    int *p, x;

    p = &x;
    *p = 155;

    p = (float *) malloc(sizeof(float));
    *p = 3.5;

    return 0;
}