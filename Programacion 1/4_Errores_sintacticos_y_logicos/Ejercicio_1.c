#include<stdio.h>
#include<stdlib.h>

int main(){
    //Hallar la superficie de un cuadrado conociendo el valor de un lado.
    int lado, superficie;

    printf("Ingrese el valor de un lado de un cuadrado: ");
    scanf("%i", &lado);

    superficie = lado * lado;

    printf("\nLa superficie del cuadrado es de: %icm", superficie);

    return 0;
}