#include <stdio.h>
#include <stdlib.h>

int main(){

    double n = 0;
    double soma = 0;
    do
    {
        
        scanf("%lf", &n);

        if (n != 0){

            soma = soma + (1/n);

        }else if (n == 0){

            soma = soma;
        }

    } while (n != 0);
    
    printf("%.15lf", soma);

    return 0;
}