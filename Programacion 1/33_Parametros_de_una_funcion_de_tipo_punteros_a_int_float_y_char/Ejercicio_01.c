#include<stdio.h>
#include<string.h>
//Confeccionar una función que reciba como parámetros las direcciones de dos variables enteras y le cargue a lo apuntado por dichas variables dos enteros.

void Cargar(int *pe1, int *pe2)
{
    *pe1=100;
    *pe2=200;
}

int main()
{
    int valor1, valor2;
    Cargar(&valor1, &valor2);

    printf("%i, %i", valor1, valor2);
    return 0;
}