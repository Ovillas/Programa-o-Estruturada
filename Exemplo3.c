#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int v_1[5];
    int v_2[5];
    int v_soma[5];

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v_1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v_2[i]);
    }

    for (i = 0; i < 5; i++)
    {
        v_soma[i] = v_1[i]+v_2[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d", v_soma[i]);
    }


    return 0;
}