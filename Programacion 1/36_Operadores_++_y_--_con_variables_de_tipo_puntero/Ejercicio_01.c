#include<stdio.h>
#include<string.h>
//Desarrollar un programa para administrar un vector de 5 enteros.
//En la función de carga e impresión utilizar la sintaxis de punteros para acceder a sus elementos (no utilizar la sintaxis de subíndice)

#define tamano 5

void carga(int *pe)
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &*pe);
        pe++;
    }
}
void imprimir(int *pe)
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("%i - ", *pe);
        pe++;
    }
    
}

int main()
{
    int vec[tamano];
    carga(vec);
    printf("\n");
    imprimir(vec);

    return 0;
}