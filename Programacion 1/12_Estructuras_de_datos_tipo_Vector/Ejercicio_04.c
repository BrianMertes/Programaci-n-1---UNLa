#include<stdio.h>

int main(){
    //Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
    //El valor acumulado de todos los elementos del vector.
    //El valor acumulado de los elementos del vector que sean mayores a 36.
    //Cantidad de valores mayores a 50.
    int vector[8];
    int total_acumulado=0, mayores_36_acumulado=0, cantidad_mayores_50=0, i;

    for (i=0; i<8; i++)
    {
        printf("Ingrese un valor entero: ");
        scanf("%i", &vector[i]);
        total_acumulado += vector[i];

        if (vector[i]>36)
        {
            mayores_36_acumulado += vector[i];
        }
        if (vector[i]>50)
        {
            cantidad_mayores_50++;
        }
    }

    printf("\n");
    printf("El valor acumulado de los numeros ingresados es de: %i", total_acumulado);
    printf("\n");
    printf("El valor acumulado de los numeros ingresados mayores a 36 es de: %i", mayores_36_acumulado);
    printf("\n");
    printf("La cantidad de numeros ingresados mayores a 50 es de: %i", cantidad_mayores_50);

    return 0;
}