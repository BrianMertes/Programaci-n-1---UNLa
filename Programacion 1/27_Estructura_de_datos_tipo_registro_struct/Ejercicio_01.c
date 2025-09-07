#include<stdio.h>
#include<string.h>
//Declarar un registro que permita almacenar el codigo, descripcion y precio de un producto. Luego definir dos variables de dicho tipo, cargarlas e imprimir el nombre del producto que tiene mayor precio.

struct producto
{
    int codigo;
    char descripcion[41];
    float precio;
};

int main()
{
    struct producto pro1, pro2;
    printf("Ingrese el codigo del producto: ");
    scanf("%i",&pro1.codigo);
    getchar();
    printf("Ingrese la descripción del producto: ");
    fgets(pro1.descripcion,41,stdin);
    printf("ingrese el precio del producto: ");
    scanf("%f", &pro1.precio);
    getchar();

    printf("\n");

    printf("Ingrese el codigo del producto: ");
    scanf("%i",&pro2.codigo);
    getchar();
    printf("Ingrese la descripción del producto: ");
    fgets(pro2.descripcion,41,stdin);
    printf("ingrese el precio del producto: ");
    scanf("%f", &pro2.precio);
    getchar();

    pro1.descripcion[strlen(pro1.descripcion)-1] = '\0';
    pro2.descripcion[strlen(pro2.descripcion)-1] = '\0';

    if (pro1.precio>pro2.precio)
    {
        printf("el producto con mayor precio fue %s, con un precio de $%f", pro1.descripcion, pro1.precio);
    } else if (pro2.precio>pro1.precio){
        printf("el producto con mayor precio fue %s, con un precio de $%f", pro2.descripcion, pro2.precio);
    } else {
        printf("Ambos productos tienen el mismo precio.");
    }
    

    return 0;
}