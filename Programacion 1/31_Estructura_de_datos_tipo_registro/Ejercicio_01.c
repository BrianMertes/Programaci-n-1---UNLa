#include<stdio.h>
#include<string.h>
//Se tienen las siguientes declaraciones de registros: fecha(dia, mes ,año) y producto(codigo, descripcion, precio, struct fecha fechaVencimiento)
//Definir un vector de 3 elementos de tipo producto, realizar su carga e impresión.

#define tamanoVector 3

struct fecha {
    int dd;
    int mm;
    int aa;
};

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
    struct fecha fechavencimiento;
}; 

void cargarDatos(struct producto prod[tamanoVector])
{
    int i;
    for (i = 0; i < tamanoVector; i++)
    {
        printf("Producto %i: \n", i+1);
        printf("Ingrese el código del producto: ");
        scanf("%i", &prod[i].codigo);
        getchar();
        printf("Ingrese la descripción del producto: ");
        fgets(prod[i].descripcion,41,stdin);
        prod[i].descripcion[strlen(prod[i].descripcion)-1] = '\0';
        printf("Ingrese el precio del producto: ");
        scanf("%f", &prod[i].precio);
        getchar();
        printf("Fecha de vencimiento\n");
        printf("Día: ");
        scanf("%i", &prod[i].fechavencimiento.dd);
        getchar();
        printf("Mes: ");
        scanf("%i", &prod[i].fechavencimiento.mm);
        getchar();
        printf("Año: ");
        scanf("%i", &prod[i].fechavencimiento.aa);
        getchar();
        printf("\n");
    }
}
void Imprimir(struct producto prod[tamanoVector])
{
    int i;
    for (i = 0; i < tamanoVector; i++)
    {
        printf("Producto %i\n", i+1);
        printf("Codigo: %i\n", prod[i].codigo);
        printf("Descripción: %s\n", prod[i].descripcion);
        printf("Precio: $%f\n", prod[i].precio);
        printf("Fecha de vencimiento: %i/%i/%i\n", prod[i].fechavencimiento.dd,prod[i].fechavencimiento.mm, prod[i].fechavencimiento.aa);
        printf("\n");
    }
}

int main()
{
    struct producto prod[tamanoVector];

    cargarDatos(prod);
    printf("\n");
    Imprimir(prod);

    return 0;
}