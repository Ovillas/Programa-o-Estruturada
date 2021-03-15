#include <stdio.h>
#include <stdlib.h>

void conversao(int  n);

int main(){

    int x;
    scanf("%d", &x);
    conversao(x); 
}

void conversao(int n){

    int x;

    if (n/2 != 0){
        x = n/2;
        conversao(x); 
        printf("%d", n%2);
    }else{ 
        printf("%d", n%2);
    }

}

