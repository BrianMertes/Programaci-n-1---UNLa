#include<stdio.h>
//Guardar los datos de 6 sueldos de empleados en un vector de tipo float. Confeccionar las siguientes funciones:
//1-Carga de sueldos.
//2-Impresión de los sueldos.
//3-Gasto total de la empresa en sueldos.

void CargarSueldos(float sueldos[6])
{
    int i;
    for (i=0; i<6; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i+1);
        scanf("%f", &sueldos[i]);
    }
}
void ImprimirSueldos(float sueldos[6])
{
    int i;
    printf("SUELDOS:");
    printf("\n");
    for (i=0; i<6; i++)
    {
        printf("empleado %i: $%f", i+1, sueldos[i]);
        printf("\n");
    }
}
void GastoTotal(float sueldos[6])
{
    int i;
    float gastototal=0;
    for (i=0; i<6; i++)
    {
        gastototal+=sueldos[i];
    }
    printf("El gasto total es de: $%f", gastototal);
}

int main()
{
    float sueldos[6];

    CargarSueldos(sueldos);
    printf("\n");
    ImprimirSueldos(sueldos);
    printf("\n");
    GastoTotal(sueldos);

    return 0;
}