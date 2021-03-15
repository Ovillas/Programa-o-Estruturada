#include <stdio.h>
#include <math.h>

int main() {
    
    float l1, l2, d;
    
    printf("===== Vamos calcular a Diagonal =====\n");
    
    printf("Indique um lado: \n");
    scanf("%f", l1);
    
    printf("Indique o segudo lado: \n");
    scanf("%f", l2);
    
    d = sqrt((l1*l1)+(l2*l2));
    
    printf("A diagonal é %0.2f");

    return 0;
}

