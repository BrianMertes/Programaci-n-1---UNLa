#include<stdio.h>

int main(){
    //Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio. Este problema ya lo desarrollamos empleando el while, lo resolveremos empleando la estructura for.
    int num, suma, promedio, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);
        suma = suma + num;
    }

    promedio = suma / 10;

    printf("\n");
    printf("La suma de los valores ingresados es de: %i", suma);
    printf("\n");
    printf("El promedio de los valores ingresados es de: %i", promedio);
    

    return 0;
}