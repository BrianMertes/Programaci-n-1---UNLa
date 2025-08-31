#include<stdio.h>

int main(){
    //Una empresa tiene dos turnos (mañana y tarde) en los que trabajan 8 empleados (4 por la mañana y 4 por la tarde)
    //Confeccionar un programa que permita almacenar los sueldos de los empleados agrupados por turno (definir los dos vectores con componentes de tipo float)
    //Imprimir los gastos en sueldos de cada turno.
    float sueldos_tm[4];
    float sueldos_tt[4];
    float total_tm=0, total_tt=0;
    int i;

    printf("TURNO MAÑANA");
    printf("\n");
    for (i=0; i<4; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i);
        scanf("%f", &sueldos_tm[i]);
        total_tm += sueldos_tm[i];
    }

    printf("\n");
    printf("TURNO TARDE");
    printf("\n");
    for (i=0; i<4; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i);
        scanf("%f", &sueldos_tt[i]);
        total_tt += sueldos_tt[i];
    }
    
    printf("\n");
    printf("Gastos total en sueldos del turno mañana: $%f", total_tm);
    printf("\n");
    printf("Gasto total en sueldos del turno tarde: $%f", total_tt);
    


    return 0;
}