#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro: producto(codigo, descripcion, precio)
//Plantear una función que reciba la dirección de un registro y mediante esta modificar los campos de la variable que le pasamos desde la main.
//Imprimir el registro definido en la main.

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};

void cargar(struct producto *pprod)
{
    printf("Ingrese el codigo del producto: ");
    scanf("%i", &(*pprod).codigo);
    getchar();
    printf("Ingrese la descripción del producto: ");
    fgets((*pprod).descripcion,41,stdin);
    (*pprod).descripcion[strlen((*pprod).descripcion)-1] = '\0'; //Quitamos el salto de linea que se ingresa automaticamente debido a la funcion 'fgets()'
    printf("Ingrese el precio: ");
    scanf("%f", &(*pprod).precio);
    getchar();
}
void Imprimir(struct producto prod)
{
    printf("Codigo del producto: %i\n", prod.codigo);
    printf("Descripción del producto: %s\n", prod.descripcion);
    printf("Precio del producto: $%f\n", prod.precio);
}

int main()
{
    struct producto prod;
    cargar(&prod);
    printf("\n");
    Imprimir(prod);

    return 0;
}