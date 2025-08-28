#include<stdio.h>

int main(){
    //En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500, realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá informar el importe que gasta la empresa en sueldos al personal.
    int cant_empleados, sueldo, total=0, entre=0, mayor=0, x=1;

    printf("Ingrese la cantidad de empleados: ");
    scanf("%i", &cant_empleados);

    while (x<=cant_empleados)
    {
        printf("Ingrese el sueldo del empleado %i: ", x);
        scanf("%i", &sueldo);
        if (sueldo>=100 && sueldo<=300)
        {
            entre++;
        } else if (sueldo>300)
        {
            mayor++;
        }
        total = total + sueldo;
        
        x++;
    }
    
    printf("\n");
    printf("La cantidad de empleados que tienen un sueldo entre $100 y $300 es de %i.", entre);
    printf("\n");
    printf("La cantidad de empleados que tienen un sueldo mayor a $300 es de %i.", mayor);
    printf("\n");
    printf("El valor total a pagarle a los empleados es de: $%i", total);

    return 0;
}