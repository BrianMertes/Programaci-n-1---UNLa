#include<stdio.h>
//Elaborar una función que reciba tres enteros y nos retorne el valor promedio de los mismos.


int CalcularPromedio(int num1,int num2,int num3)
{
    int promedio;
    promedio = (num1 + num2 + num3) / 3;
    return promedio;
}

int main()
{
    int num1, num2, num3;

    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%i", &num3);

    printf("El promedio entre los números ingresados es: %i.", CalcularPromedio(num1, num2, num3));
}