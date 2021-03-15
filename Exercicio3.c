#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int n1, n2 , n3;

    scanf("%d%d%d", &n1, &n2, &n3);

    if ((n1==n2)&&(n2==n3)&&(n3==n2))
    {
        printf("Equilatero\n");
    }

    else if ((n1==n2) || (n2==n3) || (n1==n3))
    {
        printf("Isosceles\n");
    }

    else
    {
        printf("Escaleno\n");
    }
    
    return 0;
    
}