#include <stdio.h>

int main(){

    int *p, x;

    p = &x;
    //Váriavel (p) recebe o endereço de x.
    *p = 155;
    //o que esta alocado em p, no caso x, recebe o valor indicado.
    return 0;
}