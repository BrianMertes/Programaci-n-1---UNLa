#include<stdio.h>
//Elaborar una función que nos retorne el perímetro de un cuadrado pasando como parámetros el valor de un lado.

int RetornarPerimetro(int lado)
{
    int perimetro = lado * 4;
    return perimetro;
}

int main()
{
    int lado;

    printf("Ingrese el valor en cm de un lado de un cuadrado: ");
    scanf("%i", &lado);
    printf("\n");
    printf("El perimetro del cuadrado es: %i.", RetornarPerimetro(lado));

    return 0;
}