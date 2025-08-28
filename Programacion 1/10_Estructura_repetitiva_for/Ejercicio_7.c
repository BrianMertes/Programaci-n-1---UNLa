#include<stdio.h>

int main(){
    //Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados.
    int num, i, suma=0;

    for (i=1; i<=10; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);

        if (i>5)
        {
            suma = suma + num;
        }
    }
    
    printf("\n");
    printf("La suma de los ultimos 5 valores ingresados fue de: %i", suma);

    return 0;
}