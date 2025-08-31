#include<stdio.h>

int main(){
    //Realizar la carga de dos números enteros por teclado e imprimir su suma y su producto.
    int num1, num2, suma, multiplicacion;

    printf("Ingrese un numero: ");
    scanf("%i", &num1);
    printf("Ingrese un segundo numero: ");
    scanf("%i", &num2);

    suma = num1 + num2;
    multiplicacion = num1 * num2;

    printf("\nEl resultado de la suma de ambos numeros es igual a: %i\n",suma);
    printf("El producto de la multiplicación de ambos numeros es igual a: %i",multiplicacion);

    return 0;
}