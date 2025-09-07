#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro:
//struct producto {
//    int codigo;
//    char descripcion[41];
//    float precio;
//}; //obligatorio el punto y coma
//Definir una variable en la función main e inicializar por asignación los tres campos.
//Plantear una función que reciba el registro y lo imprima.

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void ImprimirDatos(struct producto p)
{
    printf("Codigo del producto: %i\n", p.codigo);
    printf("Descripción del producto: %s", p.descripcion);
    printf("Precio del producto: %f\n", p.precio);
}

int main()
{
    struct producto p;
    printf("Ingresa el codigo del producto: ");
    scanf("%i", &p.codigo);
    getchar();
    printf("Ingresa la descripción del producto: ");
    fgets(p.descripcion,40,stdin);
    printf("Ingresa el precio del producto: ");
    scanf("%f", &p.precio);
    getchar();

    printf("\n");
    ImprimirDatos(p);


    return 0;
}