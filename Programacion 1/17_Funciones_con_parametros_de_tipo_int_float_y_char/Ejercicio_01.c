#include<stdio.h>
//Confeccionar una función que reciba dos enteros e imprima el mayor de ellos. Llamar a la función desde la main cargando previamente dos valores por teclado.

void mostrar_mayor(int num1,int num2)
{
    if (num1>num2)
    {
        printf("El mayor de los números ingresados fue: %i", num1);
    } else if (num2>num1)
    {
        printf("El mayor de los números ingresados fue: %i", num2);
    } else {
        printf("Ambos numeros son iguales.");
    }
}

int main()
{
    int num1, num2;
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
    printf("\n");
    mostrar_mayor(num1, num2);

    return 0;
}