//Declaração e Manipulação de Ponteiros

#include <stdio.h>

int main(){

    int *p, x;

    x = 155;
    p = &x;

    printf("%d\n", x);
    
    printf("%d\n", *p);

    x++;
    printf("%d\n", *p);

    x = x + *p;
    printf("%d\n", *p);


}