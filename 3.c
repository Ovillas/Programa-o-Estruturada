#include <stdio.h>
#include <stdlib.h>

int sfat(int x, int y);
int fat(int x);

int main(){

    int a, b = 1;
    scanf("%d", &a);

    sfat(a,b);
    printf("%d", sfat(a,b));
}

int sfat(int x, int y){

    int z;

    if (x <= 1 ){
        return y;

    }else{
        z = fat(x);
        y = y*z;
        y = sfat(x - 1, y);

        return y;
        
    }
}

int fat(int x){

    int y; 

    if (x <= 1){
        return 1;

    }else{

        y = x*fat(x-1);
        return y;    
    }
}
