#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int v_leituras[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v_leituras[i]);
    }
    
        for (i = 0; i < 5; i++)
    {
        printf("%d", v_leituras[i]);
    }


    return 0;
}

