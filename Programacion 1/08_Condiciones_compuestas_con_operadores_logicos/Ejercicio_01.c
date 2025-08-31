#include<stdio.h>

int main(){
    //Confeccionar un programa que lea por teclado tres números distintos y nos muestre el mayor.
    int num1, num2, num3;

    printf("Ingrese tres numeros:\n");
    printf("Primero: ");
    scanf("%i", &num1);
    printf("segundo: ");
    scanf("%i", &num2);
    printf("tercero: ");
    scanf("%i", &num3);
    printf("\n");

    if (num1>num2 && num1>num3)
    {
        printf("El numero mayor ingresado es: %i.", num1);
    } else if (num2>num1 && num2>num3)
    {
        printf("El numero mayor ingresado es: %i.", num2);
    } else {
        printf("El numero mayor ingresado es: %i.", num3);
    }
    
    

    return 0;
}