#include<stdio.h>

int main(){
    //Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.
    int num1, num2, operacion;
    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    if (num1>num2)
    {
        operacion = num1+num2;
        printf("La suma de los numeros da como resultado: %i", operacion);
        operacion = num1 - num2;
        printf("\nLa diferencia entre los numeros ingresados es igual a: %i", operacion);
    } else if (num2>num1)
    {
        operacion = num1 * num2;
        printf("El producto de los numeros da como resultado: %i", operacion);
        operacion = num1 / num2;
        printf("\nLa division de los numeros da como resultado: %i", operacion);
    }

    return 0;
}