#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro:
//struct producto {
//    int codigo;
//    char descripcion[41];
//    float precio;
//}; //obligatorio el punto y coma
//Plantear dos funciones una que cargue un registro de tipo producto y otra que lo imprima.
//En la función main definir dos variables de tipo producto llamar a las funciones anteriores.

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

struct producto cargar()
{
    struct producto prod;
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &prod.codigo);
    getchar();
    printf("Ingrese el nombre del producto: ");
    fgets(prod.descripcion,41,stdin);
    printf("Ingrese el precio del producto: ");
    scanf("%f", &prod.precio);
    getchar();
    return prod;
}
void Imprimir(struct producto prod)
{
    printf("Datos del producto\n");
    printf("Codigo: %i\n", prod.codigo);
    printf("Descripción: %s", prod.descripcion);
    printf("Precio: $%f\n", prod.precio);
}

int main()
{
    struct producto prod1, prod2;
    prod1 = cargar();
    printf("\n");
    prod2 = cargar();

    printf("\n");
    Imprimir(prod1);
    printf("\n");
    Imprimir(prod2);

    return 0;
}