#include<stdio.h>

int main(){
    //Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 términos)
    //Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.
    int i, n;

    printf("Ingrese un valor del 1 al 10: ");
    scanf("%i", &n);
    printf("\n");

    for (i=n; i<=n*12; i=i+n)
    {
        printf("%i", i);
        printf("\n");
    }
    
    return 0;
}