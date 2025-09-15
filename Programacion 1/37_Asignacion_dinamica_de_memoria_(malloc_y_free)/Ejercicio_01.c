#include<stdio.h>
#include<stdlib.h>
//Ingresar por teclado un entero que represente la cantidad de elementos que debe crearse un vector. Crear el vector en forma dinámica, cargar e imprimir sus datos. Hacer todo en la main.

int main()
{
    int *pe;
    int tam;
    int i;

    printf("Ingrese la cantidad de valores que se ingresaran: ");
    scanf("%i", &tam);

    pe = malloc(tam*sizeof(int));

    for (i = 0; i < tam; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &pe[i]);
    }
    for (i = 0; i < tam; i++)
    {
        printf("%i - ", pe[i]);
    }
    
    free(pe);

    return 0;
}