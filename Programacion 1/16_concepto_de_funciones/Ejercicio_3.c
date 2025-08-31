#include<stdio.h>
#include<string.h>

//Desarrollar un programa con dos funciones aparte de la main. La primer solicite el ingreso de un entero y muestre el cuadrado de dicho valor. La segunda que solicite la carga de dos valores y muestre el producto de los mismos.
//Llamar desde la main a ambas funciones.

void carga_cuadrado()
{
    int num, cuadrado;
    printf("CALCULADORA DE CUADRADOS");
    printf("\n");
    printf("Ingrese un número: ");
    scanf("%i", &num);

    cuadrado = num * num;
    printf("\n");
    printf("%i^2 = %i", num, cuadrado);
}
void carga_producto()
{
    int num1, num2, producto;
    printf("CALCULADORA DE PRODUCTOS");
    printf("\n");
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);

    producto = num1 * num2;
    printf("\n");
    printf("%i * %i = %i", num1, num2, producto);
}
void separacion()
{
    printf("\n");
    printf("****************************");
    printf("\n");
}

int main(){
    carga_cuadrado();
    separacion();
    carga_producto();

    return 0;
}