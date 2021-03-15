#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    double n1, n2, resultado, erro;

    erro = 0;

    scanf("%lf", &n1);
    scanf("%lf", &n2);

    if((n1>=n2) && (n2>=0)){
        resultado = pow(n1, n2);
        printf("%.2lf\n", resultado);
    }

    else if (n1<n2)
    {
        resultado = sqrt((n2 - n1));   
        printf("%.2lf\n", resultado);
    }

    else {
        printf("%.2lf\n", erro);
    }
    
    
    return 0;
}