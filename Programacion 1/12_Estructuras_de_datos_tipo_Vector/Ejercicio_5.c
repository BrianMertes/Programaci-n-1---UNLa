#include<stdio.h>

int main(){
    //Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.
    int vector_1[4];
    int vector_2[4];
    int vector_3[4];
    int i;

    printf("VECTOR 1");
    printf("\n");
    for (i=0; i<4; i++)
    {
        printf("Ingrese un número: ");
        scanf("%i", &vector_1[i]);
    }
    
    printf("\n");
    printf("VECTOR 2");
    printf("\n");
    for (i=0; i<4; i++)
    {
        printf("Ingrese un número: ");
        scanf("%i", &vector_2[i]);
    }

    printf("\n");
    printf("VECTOR 3 (suma de los dos vectores anteriores por indice)");
    printf("\n");
    for (i=0; i<4; i++)
    {
        vector_3[i] = vector_1[i] + vector_2[i];
        printf("indice %i: %i", i, vector_3[i]);
        printf("\n");
    }

    return 0;
}