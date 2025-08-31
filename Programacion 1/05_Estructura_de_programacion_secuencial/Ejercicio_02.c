#include<stdio.h>

int main(){
    //Realizar la carga del lado de un cuadrado, mostrar por pantalla el perímetro del mismo (El perímetro de un cuadrado se calcula multiplicando el valor del lado por cuatro)
    int lado, perimetro;

    printf("Ingrese el valor de un lado de un cuadrado: ");
    scanf("%i", &lado);

    perimetro = lado * 4;

    printf("\nEl perimetro del cuadrado es igual a: %icm", perimetro);

    return 0;
}