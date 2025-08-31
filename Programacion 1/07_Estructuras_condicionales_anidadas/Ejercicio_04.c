#include<stdio.h>

int main() {
    //Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.
    int num;

    printf("Ingrese un numero de hasta tres cifras: ");
    scanf("%i", &num);

    if (num>=0)
    {
        if (num<=9)
        {
            printf("El numero ingresado tiene una cifra.");
        } else if (num<=99)
        {
            printf("El numero ingresado tiene dos cifras.");
        } else if (num<=999)
        {
            printf("El numero ingresado tiene tres cifras.");
        } else {
            printf("El numero ingresado sobrepasa las tres cifras.");
        }
    } else {
        if (num>=-9)
        {
            printf("El numero ingresado tiene una cifra.");
        } else if (num>=-99)
        {
            printf("El numero ingresado tiene dos cifras.");
        } else if (num>=-999)
        {
            printf("El numero ingresado tiene tres cifras.");
        } else {
            printf("El numero ingresado sobrepasa las tres cifras.");
        }
    }
    
    
    return 0;
}