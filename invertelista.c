#include <stdio.h>

int main(){

    FILE *in, *out;
    char str[50][50];
    int i, j = 0;

    in = fopen("nomes.txt", "r");
    out = fopen("nomes2.txt", "w");

    if(in == NULL || out == NULL){
          
        printf("erro!!!");
        return 1;
    }

    while(!feof(in)){

        fgets(str[j],50,in);
        j = j+1;
    }

    for (i = j; i >-1; i--){
        fputs(str[i], out);
    }
    
    fclose(in);
    fclose(out);

    return 0;

}