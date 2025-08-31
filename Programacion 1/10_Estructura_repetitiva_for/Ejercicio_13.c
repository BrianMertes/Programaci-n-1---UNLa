#include<stdio.h>

int main(){
    //Se cuenta con la siguiente información:
    //Las edades de 5 estudiantes del turno mañana.
    //Las edades de 6 estudiantes del turno tarde.
    //Las edades de 11 estudiantes del turno noche.
    //Las edades de cada estudiante deben ingresarse por teclado.
    //a) Obtener el promedio de las edades de cada turno (tres promedios)
    //b) Imprimir dichos promedios (promedio de cada turno)
    //c) Mostrar por pantalla un mensaje que indique cual de los tres turnos tiene un promedio de edades menor.
    int edad, suma_tm=0, suma_tt=0, suma_tn=0, promedio_tm=0, promedio_tt=0, promedio_tn=0, i;

    printf("EDADES DEL TURNO MAÑANA.");
    printf("\n");
    for (i=1; i<=5; i++)
    {
        printf("Ingresa la edad del alumno %i: ", i);
        scanf("%i", &edad);
        suma_tm = suma_tm + edad;
    }
    printf("\n");

    printf("EDADES DEL TURNO TARDE.");
    printf("\n");
    for (i=1; i<=6; i++)
    {
        printf("Ingresa la edad del alumno %i: ", i);
        scanf("%i", &edad);
        suma_tt = suma_tt + edad;
    }
    printf("\n");

    printf("EDADES DEL TURNO NOCHE.");
    printf("\n");
    for (i=1; i<=11; i++)
    {
        printf("Ingresa la edad del alumno %i: ", i);
        scanf("%i", &edad);
        suma_tn = suma_tn + edad;
    }
    printf("\n");

    promedio_tm = suma_tm / 5;
    promedio_tt = suma_tt / 6;
    promedio_tn = suma_tn / 11;

    printf("El promedio de edad en el turno mañana es de: %i.", promedio_tm);
    printf("\n");
    printf("El promedio de edad en el turno tarde es de: %i.", promedio_tt);
    printf("\n");
    printf("El promedio de edad en el turno noche es de: %i.", promedio_tn);
    printf("\n");

    if (promedio_tm<promedio_tt && promedio_tm<promedio_tn)
    {
        printf("El promedio de edad mas bajo es el del turno mañana.");
    } else if (promedio_tt<promedio_tm && promedio_tt<promedio_tn)
    {
        printf("El promedio de edad mas bajo es el del turno tarde.");
    } else if (promedio_tn<promedio_tm && promedio_tn<promedio_tt)
    {
        printf("El promedio de edad mas bajo es el del turno noche.");
    } else {
        printf("Mas de un turno tiene el mismo promedio.");
    }

    return 0;
}