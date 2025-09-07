#include<stdio.h>
//Crear una matriz de 3x4. Realizar la carga y luego imprimir el elemento mayor.

void cargaMatriz(int matriz[3][4])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Ingrese un valor en la fila %i, columna %i: ", i ,j);
            scanf("%i", &matriz[i][j]);
        }
    }
}
int RetornarMayor(int matriz[3][4])
{
    int i, j, mayor=matriz[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (matriz[i][j]>mayor)
            {
                mayor = matriz[i][j];
            }
        }
    }
    return mayor;
}

int main()
{
    int valores[3][4];
    cargaMatriz(valores);
    printf("\n");
    printf("El numero mayor ingresado en la matriz fue: %i", RetornarMayor(valores));

    return 0;
}