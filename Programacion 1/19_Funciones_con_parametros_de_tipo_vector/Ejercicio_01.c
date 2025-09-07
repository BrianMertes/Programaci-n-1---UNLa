#include<stdio.h>
//Confeccionar un programa que defina dos funciones, una que permita cargar un vector de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
//En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.

void CargarVector(int vector[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("Ingrese un valor en el indice %i: ", i);
        scanf("%i", &vector[i]);
    }
}
void ImprimirVector(int vector[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("%i - ", vector[i]);
    }
}

int main()
{
    int vector[5];
    CargarVector(vector);
    ImprimirVector(vector);

    return 0;
}