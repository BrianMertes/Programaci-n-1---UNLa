#include<stdio.h>
#include<string.h>
//Se tiene la siguiente información:
//Nombres de 4 empleados (matriz de tipo char)
//Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses (matriz de tipo float)
//Confeccionar el programa para:
//a) Realizar la carga de la información mencionada.
//b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
//c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
//d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
//Utilizar macros para definir la cantidad de filas y columnas de las estructuras de datos.

#define CantidadEmpleados 4
#define meses 3

void cargarDatos(char empleados[CantidadEmpleados][31], float sueldos[CantidadEmpleados][meses])
{
    int i, j;
    for (i = 0; i < CantidadEmpleados; i++)
    {
        printf("Ingrese el nombre del empleado: ");
        fgets(empleados[i],31,stdin);
        for (j = 0; j < meses; j++)
        {
            printf("Ingrese el sueldo del mes %i: ", j+1);
            scanf("%f", &sueldos[i][j]);
        }
        getchar();
    }
}
void SumarSueldosPorEmpleado(float sueldos[CantidadEmpleados][meses], float sueldosTotales[CantidadEmpleados])
{
    int i, j;
    for (i = 0; i < CantidadEmpleados; i++)
    {
        for (j = 0; j < meses; j++)
        {
            sueldosTotales[i] += sueldos[i][j];
        }
    }
}
void ImprimirSueldosTotalesPorEmpleado(char empleados[CantidadEmpleados][31], float sueldosTotales[CantidadEmpleados])
{
    int i;
    for (i = 0; i < CantidadEmpleados; i++)
    {
        printf("Empleado: %s Sueldo: %f\n\n", empleados[i], sueldosTotales[i]);
    }
}
float RetornarGastoTotalEnSueldos(float sueldosTotales[CantidadEmpleados])
{
    float GastoTotal=0;
    int i;

    for (i = 0; i < CantidadEmpleados; i++)
    {
        GastoTotal+=sueldosTotales[i];
    }
    return GastoTotal;
}
void MayorSueldo(char empleados[CantidadEmpleados][31], float sueldosTotales[CantidadEmpleados])
{
    int i;
    float sueldomayor=sueldosTotales[0];
    char empleadoMayorSueldo[31];
    strcpy(empleadoMayorSueldo,empleados[0]);

    for (i = 1; i < CantidadEmpleados; i++)
    {
        if (sueldomayor<sueldosTotales[i])
        {
            sueldomayor = sueldosTotales[i];
            strcpy(empleadoMayorSueldo,empleados[i]);
        }
    }

    printf("El mayor sueldo es de: $%f, el empleado que lo cobra es %s", sueldomayor, empleadoMayorSueldo);

}

int main(){
    char empleados[CantidadEmpleados][31];
    float sueldos[CantidadEmpleados][meses];
    float sueldosTotales[CantidadEmpleados] = {0};

    cargarDatos(empleados,sueldos);
    SumarSueldosPorEmpleado(sueldos, sueldosTotales);
    printf("\n");
    ImprimirSueldosTotalesPorEmpleado(empleados, sueldosTotales);
    printf("\n");
    printf("El gasto total en sueldos de todos los empleados es de: $%f", RetornarGastoTotalEnSueldos(sueldosTotales));
    printf("\n");
    MayorSueldo(empleados,sueldosTotales);

    return 0;
}