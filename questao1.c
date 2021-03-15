#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

    int n, n1, n2, n3, result1, result2, result3;

    scanf("%d%d%d%d", &n, &n1, &n2, &n3);

    if (((n1%2) != 0) && (n1 >= n)){
        result1 = pow(n1, 2);
        printf("%d\n", result1);
    }

    else if (((n1%2) == 0) && (n1 >= n)){
        result1 = pow(n1, 3);
        printf("%d\n", result1);
    }

    else {
        printf("%d\n",n);
    }

    if (((n2%2) != 0) && (n2 >= n)){
        result2 = pow(n2, 2);
        printf("%d\n", result2);
    }

    else if (((n2%2) == 0) && (n2 >= n)){
        result2 = pow(n2, 3);
        printf("%d\n", result2);
    }

    else{
        printf("%d\n", n);
    }

    
    if (((n3%2) != 0) && (n3 >= n)){
        result3 = pow(n3, 2);
        printf("%d\n", result3);
    }

    else if (((n3%2) == 0) && (n3 >= n)){
        result3 = pow(n3, 3);
        printf("%d\n", result3);
    }
    
    else{
        printf("%d\n", n);
    }
    
return 0;
}