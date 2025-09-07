#include<stdio.h>
//Se tienen las notas del primer parcial de los alumnos de dos cursos, el curso A y el curso B, cada curso cuenta con 5 alumnos.
//1-Realizar la carga de las notas.
//2-Mostrar el nombre del curso que obtuvo el mayor promedio general.

void cargarNotas(int Vector[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese la nota del alumno %i: ", i+1);
        scanf("%i", &Vector[i]);
    }
}
float MayorPromedio(int Vector[5])
{
    int i;
    float promedio=0;
    for (i=0; i<5; i++)
    {
        promedio+=Vector[i];
    }
    promedio = promedio / 5;
    return promedio;
}

int main()
{
    int notasA[5];
    int notasB[5];
    printf("NOTAS DEL CURSO A. \n");
    cargarNotas(notasA);
    printf("\n");
    printf("NOTAS DEL CURSO B. \n");
    cargarNotas(notasB);
    printf("\n");
    if (MayorPromedio(notasA)>MayorPromedio(notasB))
    {
        printf("El curso A tiene un mayor promedio, siendo el mismo de: %f", MayorPromedio(notasA));
    } else {
        printf("El curso B tiene un mayor promedio, siendo el mismo de: %f", MayorPromedio(notasB));
    }

    return 0;
}