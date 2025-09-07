#include<stdio.h>
//Definir una matriz de 2 filas y 5 columnas. Realizar su carga e impresión.
//Intercambiar los elementos de la primera fila con la segunda y volver a imprimir la matriz.

void CargaMatriz(int matriz[2][5])
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Ingrese un valor en la fila %i, columna %i: ", i, j);
            scanf("%i", &matriz[i][j]);
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
            printf("%i - ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int valores[2][5];
    int i, aux;
    CargaMatriz(valores);
    printf("\n");
    ImprimirMatriz(valores);

    //intercambiamos los valores de la primera fila con los de la segunda fila.
    for (i = 0; i < 5; i++)
    {
        aux = valores[0][i];
        valores[0][i] = valores[1][i];
        valores[1][i] = aux;
    }
    printf("\n");
    printf("Valores intercambiados");
    printf("\n");
    ImprimirMatriz(valores);

    return 0;
}