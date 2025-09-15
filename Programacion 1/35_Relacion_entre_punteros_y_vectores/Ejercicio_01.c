#include<stdio.h>
#include<string.h>
//Confeccionar un programa que permita cargar e imprimir un vector de 5 elementos de tipo float. Utilizar la sintaxis de punteros en los parámetros de las funciones.

#define tamano 5

void cargar(float *pf)
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%f", &pf[i]);
    }
}
void imprimir(float *pf)
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("%f - ", pf[i]);
    }
}

int main()
{
    float vec[tamano];
    cargar(vec);
    printf("\n");
    imprimir(vec);
}