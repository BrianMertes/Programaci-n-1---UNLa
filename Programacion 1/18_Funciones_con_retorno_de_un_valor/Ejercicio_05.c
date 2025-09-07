#include<stdio.h>
//Confeccionar una función que calcule la superficie de un rectángulo y la retorne, la función recibe como parámetros los valores de dos de sus lados:
//int retornarSuperficie(int lado1,int lado2)
//En la función main del programa cargar los lados de dos rectángulos y luego mostrar cual de los dos tiene una superficie mayor.

int retornarSuperficie(int lado1,int lado2)
{
    int superficie=lado1 * lado2;
    return superficie;
}

int main()
{
    int lado1, lado2;
    printf("Ingrese el primer lado del rectangulo: ");
    scanf("%i", &lado1);
    printf("Ingrese el segundo lado del rectangulo: ");
    scanf("%i", &lado2);
    printf("\n");
    printf("La superficie del rectangulo es de: %i", retornarSuperficie(lado1,lado2));

    return 0;
}