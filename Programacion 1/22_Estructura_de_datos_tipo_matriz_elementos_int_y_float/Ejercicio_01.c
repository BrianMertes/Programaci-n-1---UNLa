#include<stdio.h>
//Crear una matriz de 3 filas por 5 columnas con elementos de tipo int, cargar sus componentes y luego imprimirlas.

void cargarMatriz(int matriz[3][5])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Ingrese un valor en la fila %i y la columna %i: ", i ,j);
            scanf("%i", &matriz[i][j]);
        }
    }
}
void imprimirMatriz(int matriz[3][5])
{
    int i, j;
    for (i = 0; i < 3; i++)
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
    int valores[3][5];
    cargarMatriz(valores);
    printf("\n");
    printf("IMPRESION DE LA MATRIZ.");
    printf("\n");
    imprimirMatriz(valores);

    return 0;
}