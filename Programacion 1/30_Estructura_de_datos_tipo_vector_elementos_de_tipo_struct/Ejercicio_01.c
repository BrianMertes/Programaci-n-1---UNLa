#include<stdio.h>
#include<string.h>
// tiene la siguiente declaración de registro:
//struct producto {
//    int codigo;
//    char descripcion[41];
//    float precio;
//}; 
//Definir un vector de 4 elementos de tipo producto.
//Implementar las funciones:
//Carga del vector.
//Impresión del vector.
//Mostrar el nombre del articulo con precio mayor.

#define tamano 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; 
void cargarDatos(struct producto p[tamano])
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Ingrese el codigo del producto: ");
        scanf("%i", &p[i].codigo);
        getchar();
        printf("Ingrese la descripción del producto: ");
        fgets(p[i].descripcion,41,stdin);
        printf("Ingrese el precio del producto: ");
        scanf("%f", &p[i].precio);
        getchar();
        printf("\n");
    }
}
void Imprimir(struct producto p[tamano])
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Producto %i:\n", i+1);
        printf("Codigo: %i\n", p[i].codigo);
        printf("Descripción: %s", p[i].descripcion);
        printf("Precio: %f\n", p[i].precio);
        printf("\n");
    }
}
void MostrarMayor(struct producto p[tamano])
{
    int i;
    float mayor = p[0].precio;
    char DescripcionMayor[41];
    strcpy(DescripcionMayor,p[0].descripcion);

    for (i = 1; i < tamano; i++)
    {
        if (p[i].precio > mayor)
        {
            mayor = p[i].precio;
            strcpy(DescripcionMayor,p[i].descripcion);
        }
    }

    printf("El producto con el mayor precio ingresado es %s", DescripcionMayor);
}

int main()
{
    struct producto p[tamano];
    cargarDatos(p);
    printf("\n");
    Imprimir(p);
    printf("\n");
    MostrarMayor(p);

    return 0;
}