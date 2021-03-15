#include <stdio.h>

int main(){

    FILE *in;
    char c;
    int i=0;

    in = fopen("texto.txt", "r");

    if(in == NULL){
          
        printf("erro!!!");
        return 1;
    }
    while(!feof(in)){

        if(!feof(in)){
            c = getc(in);
            if (c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U' ){
                i = i+1;
            }
        }
    }
    printf("O numero de vogais é: %d\n", i);
    fclose(in);

    return 0;

}