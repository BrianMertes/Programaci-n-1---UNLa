#include<stdio.h>

int main(){
    //Confeccionar un programa que permita la carga de valores enteros por teclado. Luego de ingresar el valor mostrar un mensaje por pantalla que pida confirmar al usuario si desea cargar otro valor ingresando los caracteres 's' o 'n'. Mostrar al final la suma de los valores ingresados.
    int num, suma=0;
    char verificar='s';

    while (verificar!='n')
    {
        printf("Ingrese un número: ");
        scanf("%i", &num);
        suma += num;

        printf("¿Quiere continuar? [s/n] ");
        scanf(" %c", &verificar);
    }
    
    printf("\n");
    printf("La suma de los numeros ingresados es igual a %i", suma);

    return 0;
}