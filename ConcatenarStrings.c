#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    void concatenarStrings(char string1[], int t1,char string2[], int t2, char string3[] );

    char palavra1[] = {'V', 'i', 't', 'o', 'r', ' '};
    char palavra2[] = {'V', 'i', 'l', 'e', 'l', 'a'};
    char palavra3[12];

    concatenarStrings(palavra1, 6, palavra2, 6, palavra3);

    int i;
    for ( i = 0; i < 12; i++){
        
        printf("%c", palavra3[i]);
    }
    
    return 0;
}

    void concatenarStrings(char string1[],int t1,char string2[],int t2, char string3[] ){

        int i, j;
        for ( i = 0; i < t1 ; i++){

            string3[i] = string1[i];
        }

        for ( j = 0; j < t2 ; j++){

            string3[t1+j] = string2[j];
        }
    }