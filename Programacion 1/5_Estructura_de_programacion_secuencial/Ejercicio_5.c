#include<stdio.h>

int main(){
    //Se debe desarrollar un programa que pida el ingreso del precio de un artículo y la cantidad que lleva el cliente. Mostrar lo que debe abonar el comprador.
    //Definir una variable float para el precio del artículo.
    float precio, total;
    int cantidad;

    printf("Ingrese el precio del producto y la cantidad a llevar.\n");
    printf("Precio: ");
    scanf("%f", &precio);
    printf("Cantidad: ");
    scanf("%i", &cantidad);

    total = precio * cantidad;

    printf("\nEl valor total a abonar es de; %f", total);

    return 0;
}