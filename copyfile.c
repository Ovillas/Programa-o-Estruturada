#include <stdio.h>

int main(int argc, char *argv[] ){

    FILE *in, *out;
    char c;

    if(argc == 3){

        in = fopen(argv[1], "r");
        out = fopen(argv[2], "w");

        if(in == NULL || out == NULL){
          
            printf("erro!!!");
            return 1;
        }
        while(!feof(in)){

            c = getc(in);
            if(!feof(in))
                putc(c,out);
        }
        fclose(in);
        fclose(out);
    }
}