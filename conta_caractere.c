#include <stdio.h>
#include <stdlib.h>

int main(){

    char caractere;
    int vogal = 0;
    int consoante = 0;
    
    scanf("%c\n", &caractere);

    while (caractere != '.' ) {   
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){

            vogal++;

    } else if (caractere == 'b' || caractere == 'c' || caractere == 'd' || caractere == 'f' || caractere == 'g'||
                    caractere == 'h' || caractere == 'j' || caractere == 'k' || caractere == 'l' || caractere == 'm'||
                    caractere == 'n' || caractere == 'p' || caractere == 'q' || caractere == 'r' || caractere == 's'||
                    caractere == 't' || caractere == 'v' || caractere == 'w' || caractere == 'x' || caractere == 'y'||
                    caractere == 'z')
        {

            consoante++;
        }
        
        scanf("%c", &caractere);

    }
    
    printf("%d %d", vogal,consoante);
    
    return 0;

}