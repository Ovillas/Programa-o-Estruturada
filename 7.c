#include<stdio.h>
#include<stdlib.h>

int main()
{

    double assinatura = 17.90;
    double valor_pulso = 0.04;
    double valor_celular = 0.09;
    double resultado = assinatura;

    double consumo_pulso ;
    double consumo_cel;

    printf("Informe o quanto de Pulso você consumiu:");
    scanf("%lf", &consumo_pulso);

    printf("Informe o quanto de Celular você consumiu:");
    scanf("%lf", &consumo_cel);

    if(consumo_pulso > 90)
    {
        resultado = resultado + ((consumo_pulso - 90 * valor_pulso));
    }

    resultado += + (consumo_cel * valor_celular);
    printf("O total é : %.2f", resultado);
 




}