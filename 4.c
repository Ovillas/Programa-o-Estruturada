#include <stdio.h>

int main(){

    char vetor[50];
    char invertido[50];
    int i = 0, pos = -1;

    printf("Digite uma  palavra: ");
    scanf("%s", vetor);
    //fgets(vetor, 50, stdin);
    while(i<50 && pos==-1){
        if(vetor[i] == '\0'){
            pos = i-1;
        }
        i++;
    }
    invertido[pos+1] = '\0';
    for(i=0;i<50;i++){
        invertido[i] = vetor[pos--];
        if(pos == -1)
            break;
    }

    printf("\n%s\n", invertido);

    return 0;
}