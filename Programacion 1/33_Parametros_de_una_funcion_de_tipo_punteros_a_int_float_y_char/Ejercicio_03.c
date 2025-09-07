#include<stdio.h>
//Implementar una función que intercambie el contenido de dos variables enteras, utilizar punteros para solucionarlo.

void Intercambiar(int *pe1, int *pe2)
{
    int aux;
    aux=*pe1;
    *pe1=*pe2;
    *pe2=aux;
}
int main()
{
    int valor1=100, valor2=200;

    printf("%i, %i\n", valor1, valor2);
    Intercambiar(&valor1, &valor2);
    printf("%i, %i", valor1, valor2);

    return 0;
}