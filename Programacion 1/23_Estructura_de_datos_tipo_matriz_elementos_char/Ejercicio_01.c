#include<stdio.h>
//Confeccionar un programa que permita ingresar en una matriz de tipo char los nombres de artículos para la venta. Hacer luego una función que imprima los nombres de dichos artículos.

void CargaMatriz(char matriz[5][31])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del articulo: ");
        fgets(matriz[i],31,stdin);
    }
}
void ImprimirMatriz(char matriz[5][31])
{
    int i;
    printf("Listado de los articulos:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%i: %s",i+1, matriz[i]);
    }   
}

int main()
{
    char articulos[5][31];
    CargaMatriz(articulos);
    printf("\n");
    ImprimirMatriz(articulos);

    return 0;
}