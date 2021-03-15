#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, j;
    int chave;
    char palavra[100] = {"\0"};
    char cifrado[100] = {"\0"};

    scanf("%d\n", &chave);/* Sempre que existir um Scanf e abaixo tiver um fgets, adicionar um \n no Scanf */
    fgets(palavra, 1024, stdin);/*quando o fgets faz a leitura, ele adiciona um quebra linha(\n) */
    palavra[strcspn(palavra,"\r\n")] = 0;/*Essa estrutura retira o \n colocado pelo fgets*/

    j = strlen(palavra);

    if(j % 2 == 0){

        for ( i = 0; i < j;i = i + 2)
        {
            cifrado[i] = palavra[i + 1];
            cifrado[i+ 1] = palavra[i];
        }

    }else {

        for ( i = 0; i < j-1; i=i + 2)
        {
            cifrado[i] = palavra[i + 1];
            cifrado[i+ 1] = palavra[i];
        }

            cifrado[i] = palavra[i];
    }

    for (i = 0; i < j; i++){
        
        cifrado[i] += chave;
    }

    for (i = 0; i < j; i++)
    {
        printf("%03d", cifrado[i]);
    }
 
    return 0;
}