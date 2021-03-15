#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, cont = 0,j;
    int v1[100], v2[100];
    
    scanf("%d", &n);

    for (i = 0; i < n; i++){

        scanf("%d", &v1[i]);
    }
    
    for (i = 0; i < n; i++){

        scanf("%d", &v2[i]);
    }

    for (i = 0; i < n ; i++){

        for (j = 0; j < n; j++){
            
            if (v1[i] == v2[j]){

                cont++; 
            }
        }
    }
    
    if (n == cont){
        
        printf("IGUAIS");
    }else{

        printf("DIFERENTES");
    }

    return 0;
}