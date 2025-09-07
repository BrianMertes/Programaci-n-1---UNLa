#include<stdio.h>
#include<string.h>
//Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos precios en un vector paralelo de tipo float.
//Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se debe contar)

void CargarDatos(char productos[5][31], float precios[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del producto: ");
        fgets(productos[i],31,stdin);
        printf("Ingrese el valore del producto: ");
        scanf("%f", &precios[i]);
        getchar();
    }
}
int RetornarMayoresAlPrimero( float precios[5])
{
    int i, cantidad=0;
    for (i = 1; i < 5; i++)
    {
        if (precios[0]<precios[i])
        {
            cantidad++;
        }
    }
    return cantidad;
}

int main()
{
    char productos[5][31];
    float precios[5];

    CargarDatos(productos, precios);
    printf("\nLa cantidad de productos ingresados con un precio mayor al primer producto ingresado es de %i productos.", RetornarMayoresAlPrimero(precios));

    return 0;
}