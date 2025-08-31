#include<stdio.h>

int main() {
    //Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo (es decir cero)
    int num;
    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if (num>0)
    {
        printf("El numero ingresado es positivo.");
    } else if (num<0)
    {
        printf("El numero ingresado es negativo.");
    } else {
        printf("EL numero ingresado es nulo.");
    }
    
    

    return 0;
}