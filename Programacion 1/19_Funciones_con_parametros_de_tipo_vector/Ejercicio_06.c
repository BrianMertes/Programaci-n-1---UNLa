#include<stdio.h>
//Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
//Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno.
//Imprimir los gastos en sueldos de cada turno.
//Se deben implementar las siguientes funciones:
//void cargar(float sueldos[4])
//float gastosTurno(float sueldos[4])

void cargar(float sueldos[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ",i+1);
        scanf("%f", &sueldos[i]);
    }
    
}
float gastos(float sueldos[4])
{
    int i;
    float gastoTurno=0;

    for ( i = 0; i < 4; i++)
    {
        gastoTurno += sueldos[i];
    }
    return gastoTurno;
}
int main()
{
    float sueldosTM[4];
    float sueldosTT[4];
    printf("Carga de sueldos del turno manana\n");
    cargar(sueldosTM);
    printf("\n");
    printf("Carga de sueldos del turno tarde\n");
    cargar(sueldosTT);
    printf("\n");
    printf("Gastos del turno de la manana: %0.2f\n", gastos(sueldosTM));
    printf("Gastos del turno de la tarde: %0.2f", gastos(sueldosTT));
    return 0;
}
