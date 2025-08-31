#include<stdio.h>

int main(){
    //Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
    //Realizar un programa que muestre el curso que obtuvo el mayor promedio general.
    int curso_a[5];
    int curso_b[5];
    int promedio_a=0, promedio_b=0, i;

    printf("CURSO A");
    printf("\n");
    for (i=0; i<5; i++)
    {
        printf("Ingrese la nota del alumno %i: ", i);
        scanf("%i", &curso_a[i]);
        promedio_a += curso_a[i];
    }

    printf("\n");
    printf("CURSO B");
    printf("\n");
    for (i=0; i<5; i++)
    {
        printf("Ingrese la nota del alumno %i: ", i);
        scanf("%i", &curso_b[i]);
        promedio_b += curso_b[i];
    }

    promedio_a = promedio_a / 5;
    promedio_b = promedio_b / 5;

    printf("\n");
    if (promedio_a>promedio_b)
    {
       printf("El curso A tuvo mejor promedio, con un promedio de %i", promedio_a);
    } else if (promedio_b>promedio_a)
    {
        printf("El curso B tuvo mejor promedio, con un promedio de %i", promedio_b);
    } else{
        printf("Ambos cursos tuvieron un promedio igual, con un promedio de %i", promedio_a);
    }

    return 0;
}