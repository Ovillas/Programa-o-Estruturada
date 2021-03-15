#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mdc(int a, int b);
int mod(int a, int b);
int pot(int a, int b);

int main(){

    int x,y;
    int rmdc = 99999, rmod = 99999, rpot = 99999;
    char opcao[3];

    scanf("%d", &x); 
    scanf("%d", &y);

    while (strcmp(opcao,"OOO") != 0){
        scanf("%s", opcao);

        if (strcmp(opcao,"MDC") == 0){
            rmdc = mdc(x,y);

        }if (strcmp(opcao,"MOD") == 0){
            rmod = mod(x,y);

        }if (strcmp(opcao,"POT") == 0){
            rpot = pot(x,y);
        }
    }

    if (rmdc != 99999){

        printf("MDC(%d,%d) = %d\n",x,y,rmdc);
    }
    
    if (rmod != 99999){

        printf("MOD(%d,%d) = %d\n",x,y,rmod);
    }
    
    if(rpot != 99999){
    
        printf("POT(%d,%d) = %d\n",x,y,rpot);
    }
}

int mdc(int a, int b){

    int x;

    if (a == b){
        x = a;
        
    }else if(a > b){
        x=mdc(a-b,b);
    }
    else if(a < b){
        x=mdc(b,a);
    }
    
    return x;
}

int mod(int a, int b){

    int x;

    if (a == b){
        x = a - b;
        
    }else if(a > b){
        x=mod(a-b,b);
    }
    else if(a < b){
        x=mod(b,a);
        x = a;
    }
    
    return x;
}

int pot(int a, int b){

    int x;

    if (b == 0){
        x = 1;
    }else{
        x = a*pot(a,b-1);        
    }

    return x;
}