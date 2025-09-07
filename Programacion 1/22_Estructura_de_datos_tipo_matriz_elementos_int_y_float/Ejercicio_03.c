#include<stdio.h>
//Crear y cargar una matriz de 3 filas por 4 columnas. Imprimir la primer fila. Imprimir la última fila e imprimir la primer columna.

void cargarMatriz(int matriz[3][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Ingrese un valor en la fila %i, columna %i: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
}
void imprimirPrimerFila(int matriz[3][4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%i", matriz[0][i]);
        printf("\n");
    }
}
void imprimirUltimaFila(int matriz[3][4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%i", matriz[2][i]);
        printf("\n");
    }
}
void imprimirPrimerColumna(int matriz[3][4])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%i", matriz[i][0]);
        printf("\n");
    }
}

int main()
{
    int valores[3][4];
    cargarMatriz(valores);
    printf("\n");
    printf("Impresion de la primera fila:");
    printf("\n");
    imprimirPrimerFila(valores);
    printf("\n");
    printf("Impresion de la ultima fila:");
    printf("\n");
    imprimirUltimaFila(valores);
    printf("\n");
    printf("Impresion de la primera columna:");
    printf("\n");
    imprimirPrimerColumna(valores);

    return 0;
}