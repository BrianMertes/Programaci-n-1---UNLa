#include<stdio.h>
//Crear y cargar una matriz de 4 filas por 4 columnas. Imprimir la diagonal principal.

void cargarMatriz(int matriz[4][4])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Ingrese un valor en la fila %i, columna %i: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
}
void ImprimirDiagonal(int matriz[4][4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%i", matriz[i][i]);
        printf("\n");
    }
}
int main(){
    int valores[4][4];
    cargarMatriz(valores);
    printf("\n");
    printf("Impresion de la diagonal principal:");
    printf("\n");
    ImprimirDiagonal(valores);

    return 0;
}