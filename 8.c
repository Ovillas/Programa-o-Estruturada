#include<stdio.h>
#include<stdlib.h>

int main()
{

    int ano;

    printf("Informe o Ano: ");
    scanf("%d", &ano);

    if((ano%400 == 0) || ((ano%100 =! 0) && (ano%4 == 0)))
    {
        printf("O ano é bissexto");
    }

    else
    {
        printf("O ano não é bissexto");
    }
    

}