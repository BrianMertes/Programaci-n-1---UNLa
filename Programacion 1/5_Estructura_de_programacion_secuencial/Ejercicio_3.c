#include<stdio.h>

int main(){
    //Escribir un programa en el cual se ingresen cuatro números, calcular e informar la suma de los dos primeros y el producto del tercero y el cuarto.
    int num1, num2, num3, num4, suma, producto;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num4);

    suma = num1 + num2;
    producto = num3 * num4;

    printf("\nLa suma de los dos primeros numeros da como resultado: %i", suma);
    printf("\nEl producto de los dos ultimos numeros da como resultado: %i",producto);

    return 0;
}