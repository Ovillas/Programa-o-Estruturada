//Estudo de Funções
#include <stdio.h>

int somaNumeros( int a, int b){

    int soma;

    soma = a + b;
    return soma;
}

int main(){

    int v1, v2,s;

    scanf("&d", &v1);
    scanf("&d", &v2);
    s = somaNumeros(v1, v2);
    printf("Valor :%d\n", s);

    return 0;
}