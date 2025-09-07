#include<stdio.h>
//Desarrollar un programa que permita administrar un vector de 8 elementos tipo entero.
//Se deben codificar las siguientes funciones:
//1-Carga del vector.
//void cargar(int vector[8])
//2-Retornar el valor acumulado de todos los elementos del vector.
//int sumar(int vector[8])
//3-Retornar el valor acumulado de los elementos del vector que sean mayores a 36.
//int sumaMayores36(int vector[8])
//4-Retornar la cantidad de componentes con valores mayores a 50.
//int cantidadMayores50(int vector[8])

void cargar(int vector[8])
{
    int i;
    for (i=0; i<8; i++)
    {
        printf("Ingrese un valor entero: ");
        scanf("%i", &vector[i]);
    }
}
int sumar(int vector[8])
{
    int i, suma=0;
    for (i=0; i<8; i++)
    {
        suma+=vector[i];
    }
    return suma;
}
int sumarMayores36(int vector[8])
{
    int i, sumaMayores36=0;
    for (i = 0; i < 8; i++)
    {
        if (vector[i]>36)
        {
            sumaMayores36+=vector[i];
        }
    }
    return sumaMayores36;
}
int cantidadMayores50(int vector[8])
{
    int i, sumaMayores50=0;
    for (i = 0; i < 8; i++)
    {
        if (vector[i]>50)
        {
            sumaMayores50++;
        }
    }
    return sumaMayores50;
}

int main()
{
    int vector[8];
    cargar(vector);
    printf("\n");
    printf("valor acumulado de todos los elementos: %i\n", sumar(vector));
    printf("valor acumulado de los elementos del vector que sean mayores a 36: %i\n", sumarMayores36(vector));
    printf("cantidad de componentes con valores mayores a 50: %i", cantidadMayores50(vector));

    return 0;
}
