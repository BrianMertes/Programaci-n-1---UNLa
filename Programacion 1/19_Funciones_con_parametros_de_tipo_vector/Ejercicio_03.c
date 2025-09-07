#include<stdio.h>
//Definir tres vectores de tipo entero. Realizar la carga de los dos primeros por teclado. Definir una única función que realice la carga de un vector y llamar a dicha función dos veces pasando el primer y segundo vector definido.
//Plantear otra función que reciba tres vectores y proceda a sumar elemento a elementos los dos primeros vectores y se carguen en el tercer vector.
//Imprimir los tres vectores.

void CargarVector(int vector[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("Ingrese un valor en el indice %i: ", i);
        scanf("%i", &vector[i]);
    }   
}
void SumarVectores(int vector1[5], int vector2[5], int vector3[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }
}
void ImprimirVectores(int vector[5])
{
    int i;
    for (i=0; i<5; i++)
    {
        printf("Indice %i: %i", i, vector[i]);
        printf("\n");
    }
}

int main()
{
    int valores1[5];
    int valores2[5];
    int valores3[5];

    printf("CARGA DE VECTORES:");
    printf("\n");
    printf("Vector 1:");
    printf("\n");
    CargarVector(valores1);
    printf("\n");
    printf("Vector 2:");
    printf("\n");
    CargarVector(valores2);
    SumarVectores(valores1, valores2, valores3);

    printf("\n");
    printf("IMPRESION DE VECTORES:");
    printf("\n");
    printf("Vector 1:");
    printf("\n");
    ImprimirVectores(valores1);
    printf("\n");
    printf("Vector 2:");
    printf("\n");
    ImprimirVectores(valores2);
    printf("\n");
    printf("Vector 3:");
    printf("\n");
    ImprimirVectores(valores3);

    return 0;
}