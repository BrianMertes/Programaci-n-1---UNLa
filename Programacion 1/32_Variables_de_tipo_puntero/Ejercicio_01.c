#include<stdio.h>
#include<string.h>
//Definir dos variables enteras y almacenar valores por asignación. Definir una variable puntero a entero y guardar sucesivamente las direcciones de dichas dos variables y acceder a sus valores.

int main()
{
    int valor1=10;
    int valor2=20;
    int *pe;

    pe=&valor1;
    printf("El numero apuntado por pe es: %i\n", *pe);
    printf("La direccion que apunta pe es: %p\n", pe);
    pe=&valor2;
    printf("El numero apuntado por pe es: %i\n", *pe);
    printf("La direccion que apunta pe es: %p\n", pe);

    return 0;
}