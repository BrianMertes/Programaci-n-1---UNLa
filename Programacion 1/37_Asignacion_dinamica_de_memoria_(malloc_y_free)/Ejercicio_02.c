#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Se tiene la siguiente declaración de registro: producto(codigo, descripcion, precio)
//Definir un puntero de tipo producto y luego mediante la función malloc crear un registro en la pila dinámica. Cargar el registro, imprimirlo y finalmente liberar el espacio reservado mediante la función free.

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; 

int main()
{
    struct producto *prod;
    prod = malloc(sizeof(struct producto));

    printf("Ingrese el codigo del producto: ");
    scanf("%i", &prod->codigo);
    getchar();
    printf("Ingrese la descripcion del producto: ");
    fgets(prod->descripcion,41,stdin);
    prod->descripcion[strlen(prod->descripcion)-1] = '\0';
    printf("Ingrese el valor del producto: ");
    scanf("%f", &prod->precio);

    printf("Producto %i, %s, $%f", prod->codigo, prod->descripcion, prod->precio);

    return 0;
}