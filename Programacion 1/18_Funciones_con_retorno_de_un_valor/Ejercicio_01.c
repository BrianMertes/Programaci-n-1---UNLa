#include<stdio.h>
//Confeccionar una función que le enviemos como parámetro el valor del lado de un cuadrado y nos retorne su superficie.

int retornar_superficie(int lado)
{
    int superficie = lado * lado;
    return superficie;
}

int main()
{
    int lado, superficie;

    printf("Ingrese el valor de un lado de un cuadrado en cm: ");
    scanf("%i", &lado);

    superficie = retornar_superficie(lado);

    printf("La superficie del cuadrado ingresado es de %i cm", superficie);

    return 0;
}