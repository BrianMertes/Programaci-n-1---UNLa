#include<stdio.h>

int main(){
    //Mostrar todos los múltiplos de 8 que hay hasta el valor 500.
    //Debe aparecer en pantalla 8 - 16 - 24, etc.
    int multiplos=8;

    while (multiplos<500)
    {
        if (multiplos<500)
        {
            printf("%i - ", multiplos);
        }
        multiplos = multiplos + 8;
    }
    

    return 0;
}