#include<stdio.h>

int main(){
    //Realizar un programa que solicite al operador ingresar dos números y muestre por pantalla el mayor de ellos.
    int num1, num2;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    if (num1>num2)
    {
        printf("El numero %i es mayor que el numero %i.", num1, num2);
    } else if (num2>num1)
    {
        printf("El numero %i es mayor que el numero %i.", num2, num1);
    } else {
        printf("Los numeros son iguales.");
    }

    return 0;
}