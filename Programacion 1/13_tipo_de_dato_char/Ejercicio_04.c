#include<stdio.h>

int main(){
    //Confeccionar un programa que solicite la carga de dos valores enteros por teclado. Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.
    //Según el caracter ingresado proceder a mostrar la sumar, resta, multiplicación o división de los valores ingresados.
    int num1, num2, operacion;
    char eleccion;

    printf("Ingrese el primer valor: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor: ");
    scanf("%i", &num2);

    printf("Ingrese la operacion que se realizara [+ - * /]: ");
    scanf(" %c", &eleccion);

    printf("\n");
    if (eleccion=='+')
    {
        operacion = num1 + num2;
        printf("La suma de los valores da como resultado: %i", operacion);
    } else if (eleccion=='-')
    {
        operacion = num1 - num2;
        printf("La resta de los valores da como resultado: %i", operacion);
    } else if (eleccion=='*')
    {
        operacion = num1 * num2;
        printf("La multiplicación de los valores da como resultado: %i", operacion);
    } else if (eleccion=='/')
    {
        operacion = num1 / num2;
        printf("La división de los valores da como resultado: %i", operacion);
    }

    return 0;
}