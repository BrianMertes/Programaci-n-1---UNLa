#include<stdio.h>
//Crear una matriz de 2 filas y 5 columnas. Realizar la carga de componentes por columna (es decir primero ingresar toda la primer columna, luego la segunda columna y así sucesivamente) Imprimir luego la matriz.

void cargaMatriz(int matriz[2][5])
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Ingrese un valor en la columna %i, fila %i: ", i, j);
            scanf("%i", &matriz[j][i]);
        }
    }
}
void ImprimirMatriz(int matriz[2][5])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("fila %i, columna %i: %i", i, j, matriz[i][j]);
            printf("\n");
        }
    }
}

int main()
{
    int valores[2][5];
    cargaMatriz(valores);
    printf("\n");
    ImprimirMatriz(valores);

    return 0;
}