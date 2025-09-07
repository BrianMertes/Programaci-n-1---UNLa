#include<stdio.h>
#include<string.h>
//Desarrollar un programa que permita cargar 5 nombres de personas y sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas mayores de edad (mayores o iguales a 18 años)

void CargarDatos(char nombres[5][31], int edades[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Persona %i\n", i);
        printf("Ingrese el nombre: ");
        fgets(nombres[i],31,stdin);
        printf("Ingrese la edad: ");
        scanf("%i", &edades[i]);
        getchar();
    }
}
void ImprimirMayoresDeEdad(char nombres[5][31], int edades[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        if (edades[i]>=18)
        {
            printf("%s",nombres[i]);
        }
    }
}

int main()
{
    char nombres[5][31];
    int edades[5];

    CargarDatos(nombres,edades);
    printf("\n");
    printf("Nombres de los mayores de edad ingresados:");
    printf("\n");
    ImprimirMayoresDeEdad(nombres,edades);

    return 0;
}