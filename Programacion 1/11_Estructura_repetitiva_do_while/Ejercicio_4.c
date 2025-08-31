#include<stdio.h>

int main(){
    //Realizar un programa que acumule (sume) valores ingresados por teclado hasta ingresar el 9999 (no sumar dicho valor, indica que ha finalizado la carga). Imprimir el valor acumulado e informar si dicho valor es cero, mayor a cero o menor a cero.
    int num, suma=0;

    printf("Ingrese un valor (Ingrese 9999 para finalizar el programa): ");
    scanf("%i", &num);

    do
    {
        suma += num;
        printf("Ingrese un valor (Ingrese 9999 para finalizar el programa): ");
        scanf("%i", &num);
    } while (num!=9999);
    
    printf("\n");
    printf("La suma de los valores ingresados es de: %i.", suma);

    return 0;
}