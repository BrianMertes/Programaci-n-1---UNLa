#include<stdio.h>

int main(){
    //Desarrollar un programa que permita cargar n números enteros y luego nos informe cuántos valores fueron pares y cuántos impares.
    //Emplear el operador “%” en la condición de la estructura condicional (este operador retorna el resto de la división de dos valores, por ejemplo 11%2 retorna un 1):
    int n, num, pares=0, impares=0, x=1;

    printf("¿Cuantos numeros van a ser ingresados? ");
    scanf("%i", &n);

    while (x<=n)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);

        if (num%2==0)
        {
            pares++;
        } else {
            impares++;
        }
        x++;
    }
    printf("\n");
    printf("La cantidad de numeros pares ingresados fue de %i.", pares);
    printf("\n");
    printf("La cantidad de numeros impares ingresados fue de %i.", impares);

    return 0;
}