#include<stdio.h>
#include<string.h>
//Definir dos variables enteras y no inicializarlas.
//Definir una variable puntero a entero, hacer que apunte sucesivamente a las dos variables enteras definidas previamente y cargue sus contenidos.
//Imprimir las dos variables enteras.

int main()
{
    int valor1;
    int valor2;
    int *pe;

    pe=&valor1;
    *pe=100;
    pe=&valor2;
    *pe=200;

    printf("La primer variable entera es: %i\n", valor1);
    printf("La segunda variable entera es: %i", valor2);

    return 0;
}