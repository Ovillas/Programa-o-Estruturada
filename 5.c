#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float v[10];
    int i = 0;
    float m = 0;
    float n = 0;
    float total = 0;
    float desvio;
    

    for (i = 0; i < 10; i++){

        scanf("%f", &v[i]);
    }

    for (i = 0; i < 10; i++){

        total = total + v[i];
    }

    m = total/10;

    for (i = 0; i < 10; i++){

        n = n + pow((v[i] - m),2);
    }
    
    desvio = sqrt(n/9);

    printf("%f", desvio);
}