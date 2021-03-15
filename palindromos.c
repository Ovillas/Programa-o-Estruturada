#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int v = 1;

    while (v != 0){

     int i,j;
     char palavra[50];
     char inverso[50];
    
     fgets(palavra, 50, stdin);
     palavra[strcspn(palavra,"\r\n")] = 0;

     j = strlen(palavra);
     v= strcmp(palavra,"END");
     i = 0;
     
     if (v==0)
     {break;}
 

     for(i = strlen(palavra)-1; i >= 0;i--){

          inverso[i] = palavra[j]; 
          i++;
     }

     inverso[j] = '\0'; 
          
     if (strcmp(palavra,inverso)==0){

          printf("SIM\n");

     }else{

          printf("NAO\n");
     }
}    
     return 0;
}