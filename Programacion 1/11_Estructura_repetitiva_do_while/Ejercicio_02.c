#include<stdio.h>

int main(){
    //Escribir un programa que solicite la carga de números por teclado, obtener su promedio. Finalizar la carga de valores cuando se ingrese el valor 0.
    int num, promedio=0, contador=0;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    do
    {
        contador++;
        promedio += num;
        printf("Ingrese un numero: ");
        scanf("%i", &num);
    } while (num!=0);
    
    promedio = promedio / contador;

    printf("\n");
    printf("\n");
    printf("El promedio de los numeros ingresados es: %i.", promedio);

    return 0;
}