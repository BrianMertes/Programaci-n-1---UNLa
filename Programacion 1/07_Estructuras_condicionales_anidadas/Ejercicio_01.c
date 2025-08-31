#include<stdio.h>

int main() {
    //Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
    //Si el promedio es >=7 mostrar "Promocionado".
    //Si el promedio es >=4 y <7 mostrar "Regular".
    //Si el promedio es <4 mostrar "Reprobado"
    int nota1, nota2, nota3, promedio;

    printf("Ingrese la primer nota: ");
    scanf("%i", &nota1);
    printf("Ingrese la segunda nota: ");
    scanf("%i", &nota2);
    printf("Ingrese la tercer nota: ");
    scanf("%i", &nota3);
    promedio = (nota1 + nota2 + nota3) / 3;

    if (promedio>10)
    {
        printf("La nota promedio ingresada no es valida.");
    } else if (promedio>=7)
    {
        printf("Promocionado.");
    } else if (promedio>=4)
    {
        printf("Regular.");
    } else if (promedio>0)
    {
        printf("Reprobado.");
    }
    
    return 0;
}