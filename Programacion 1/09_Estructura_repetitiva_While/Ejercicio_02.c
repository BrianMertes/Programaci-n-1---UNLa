#include<stdio.h>

int main(){
    //Escribir un programa que solicite la carga de un valor positivo y nos muestre desde 1 hasta el valor ingresado de uno en uno.
    //Ejemplo: Si ingresamos 30 se debe mostrar en pantalla los números del 1 al 30.
    int num, x=1;

    printf("Ingrese un valor: ");
    scanf("%i", &num);

    while (x<=num)
    {
        printf("%i - ", x);
        x++;
    }
    

    return 0;
}