#include<stdio.h>
//Se desea guardar los sueldos de 5 operarios.
//Desarrollar dos funciones una donde se los ingrese por teclado y otra función donde se los imprima.
//Definir una macro para indicar el tamaño del vector.

#define tamano 5
#define finprograma "Gracias por utilizar el programa"

void CargarSueldos(int sueldos[tamano])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i+1);
        scanf("%i", &sueldos[i]);
    }
}
void ImprimirSueldos(int sueldos[tamano])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Sueldo del empleado %i: %i\n",i+1,sueldos[i]);
    }
}

int main()
{
    int sueldos[tamano];
    CargarSueldos(sueldos);
    printf("\n");
    ImprimirSueldos(sueldos);

    return 0;
}