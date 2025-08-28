#include<stdio.h>

int main(){
    //Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".
    int nota1, nota2, nota3, promedio;

    printf("Ingrese la primera nota: ");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%i", &nota2);
    printf("Ingrese la tercera nota: ");
    scanf("%i", &nota3);

    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio>=7)
    {
        printf("El promedio del alumno es de %i", promedio);
        printf("\n");
        printf("El estado de la materia del alumno es: promocionado");
    }
    

    return 0;
}