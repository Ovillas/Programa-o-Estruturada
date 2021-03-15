#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "Ola Mundo!";

    char str2[] = {'O', 'l', 'a', ' ', 'M','u','n','d','o','!','\0'};

    char str3[11];

    str3[0] = 'O'; str3[1] = 'l'; str3[2] = 'a'; str3[3] = ' '; str3[4] = 'M'; str3[5] = 'u';
    str3[6] = 'n'; str3[7] = 'd'; str3[8] = 'd'; str3[9] = 'o'; str3[10] = '!';

    char str4[11];
    strcpy(str4, "Ola Mundo!");

    char str5[11];
    scanf("%s", str5);

    printf("Str1: %s, Tamanho: %ld\n", str1, strlen(str1));
    printf("Str2: %s, Tamanho: %ld\n", str2, strlen(str2));
    printf("Str3: %s, Tamanho: %ld\n", str3, strlen(str3));
    printf("Str4: %s, Tamanho: %ld\n", str4, strlen(str4));
    printf("Str5: %s, Tamanho: %ld\n", str5, strlen(str5));

    return 0;
}