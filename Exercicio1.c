#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int num;
    double raio1, circun;
    double raio2, area;
    double x1,x2,y1,y2, distancia;
    double pi;

    pi = 3.1415926;
    
    scanf("%d", &num);

    switch(num)
    {

        case 1:

            scanf("%lf", &raio1);
            circun = 2*pi*raio1;
            printf("%.2lf", circun);
            break;

        case 2:

            scanf("%lf", &raio2);
            area = pow(raio2,2)*pi;
            printf("%.2lf", area);
            break;

        case 3:

            scanf("%lf", &x1);
            scanf("%lf", &x2);
            scanf("%lf", &y1);
            scanf("%lf", &y2);
            distancia = sqrt( pow((x2 - x1),2) + pow((y2 - y1),2));
            printf("%.2lf", distancia);
        break;

        default:
            printf("Invalido");
            break;

    }

    return 0;
}
