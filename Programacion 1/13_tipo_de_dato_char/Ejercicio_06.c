#include<stdio.h>

int main(){
    //Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que se carga un valor pedir al operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S' (minúscula o mayúscula)
    int num, suma=0;
    char eleccion='s';

    do
    {
        printf("Ingrese un número: ");
        scanf("%i", &num);

        suma += num;

        printf("¿Quiere continuar? [s/n] ");
        scanf(" %c", &eleccion);
    } while (eleccion=='s' || eleccion=='S');
    
    printf("\n");
    printf("La suma de los numeros ingresados es igual a %i", suma);

    return 0;
}