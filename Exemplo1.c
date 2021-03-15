#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 0;

    double v_notas[4] = {5.4, 7.8, 2.4, 9.0};
    double media = 0.0;

    for ( i = 0; i < 4; i++)
    {
        media += v_notas[i];
    
    }
    
    media/= 4.0;

    printf("%.2lf\n", media);

    return 0 ;

}