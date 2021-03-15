#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    char opcao;
    double r1, r2, r3, r4;
    float result;
    
    scanf("%s", &opcao);

    switch(opcao)
    {

        case 'P':

            scanf("%lf%lf%lf%lf", &r1,&r2,&r3,&r4);
            result = 1/(1/r1 + 1/r2 + 1/r3 + 1/r4);
            printf("%.4f\n", result);
            break;

        case 'S':

            scanf("%lf%lf%lf%lf", &r1,&r2,&r3,&r4);
            result = r1+r2+r3+r4 ;
            printf("%.4f\n", result);
            break;

    default:
        break;
    }

    return 0;
}