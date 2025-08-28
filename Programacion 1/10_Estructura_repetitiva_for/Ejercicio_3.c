#include<stdio.h>

int main(){
    //Escribir un programa que lea 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
    int nota, aprobados=0, reprobados=0, i;

    for (i=1; i<=10; i++)
    {
        printf("Ingrese la nota del alumno %i: ", i);
        scanf("%i", &nota);

        if (nota>=7)
        {
            aprobados++;
        } else {
            reprobados++;
        }   
    }

    printf("\n");
    printf("La cantidad de alumnos aprobados fue de %i.", aprobados);
    printf("\n");
    printf("La cantidad de alumnos reprobados fue de %i.", reprobados);

    return 0;
}