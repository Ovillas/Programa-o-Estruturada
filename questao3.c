#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    double r, cx, cy, px, py, dp;

    scanf("%lf", &r);
    scanf("%lf%lf", &cx, &cy);
    scanf("%lf%lf",&px, &py);

    dp = sqrt(pow((px-cx),2) + pow((py-cy),2));

    if(dp > r){
        printf("Ponto P(%.2lf,%.2lf) externo a circunferencia.\n", px, py);
    }

    else if (dp < r){
        printf("Ponto P(%.2lf,%.2lf) interno a circunferencia.\n", px, py);
    }
    
    else {
        printf("Ponto P(%.2lf,%.2lf) pertence a circunferencia.\n", px, py);
    }
    
    return 0;
}