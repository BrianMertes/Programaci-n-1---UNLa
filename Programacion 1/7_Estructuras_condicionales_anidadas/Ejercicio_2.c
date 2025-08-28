#include<stdio.h>

int main() {
    //Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
    int num1, num2, num3;
    printf("Ingrese tres numeros:\n");
    printf("Primero: ");
    scanf("%i", &num1);
    printf("segundo: ");
    scanf("%i", &num2);
    printf("tercero: ");
    scanf("%i", &num3);
    printf("\n");

    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("EL numero mayor ingresado fue %i", num1);
        }
    } else if (num2>num1)
    {
        if (num2>num3)
        {
            printf("EL numero mayor ingresado fue %i", num2);
        } else {
            printf("EL numero mayor ingresado fue %i", num3);
        }
        
    }
    
    
    return 0;
}