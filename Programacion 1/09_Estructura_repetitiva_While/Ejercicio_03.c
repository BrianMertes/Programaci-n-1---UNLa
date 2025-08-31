#include<stdio.h>

int main(){
    //Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre posteriormente la suma de los valores ingresados y su promedio.
    int num, suma=0, x=1;

    while (x<=10)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);
        suma = suma + num;
        x++;
    }

    printf("\n");
    printf("La suma de todos los numeros ingresados da como resultado: %i", suma);

    return 0;
}