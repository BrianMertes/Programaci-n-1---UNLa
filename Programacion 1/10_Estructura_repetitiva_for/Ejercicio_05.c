#include<stdio.h>

int main(){
    //Escribir un programa que lea n números enteros y calcule la cantidad de valores mayores o iguales a 1000.
    int num, n, i, mayor_1000=0;

    printf("¿Cuantos valores se van a ingresar? ");
    scanf("%i", &n);

    for (i=1; i<=n; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);

        if (num>=1000)
        {
            mayor_1000++;
        }
    }
    
    printf("La cantidad de numeros ingresados que fueron mayores a 100, fue de: %i", mayor_1000);

    return 0;
}