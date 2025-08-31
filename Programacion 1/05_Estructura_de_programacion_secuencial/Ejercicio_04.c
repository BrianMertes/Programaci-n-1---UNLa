#include<stdio.h>

int main(){
    //Realizar un programa que lea cuatro valores numéricos e informar su suma y promedio.
    int num1, num2, num3, num4, suma, promedio;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);
    printf("Ingrese el cuarto numero: ");
    scanf("%i", &num4);

    suma = num1 + num2 + num3 + num4;
    promedio = suma / 4;

    printf("\nEl resultado de la suma de los 4 numeros ingresados da como resultado: %i", suma);
    printf("\nEl promedio de los numeros es de: %i", promedio);

    return 0;
}