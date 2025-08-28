#include<stdio.h>

int main(){
    //Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe cuántos tienen notas mayores o iguales a 7 y cuántos menores.
    int nota, mayor=0, menor=0, x=1;

    while (x<=10)
    {
        printf("Ingrese la nota del alumno %i: ", x);
        scanf("%i", &nota);

        if (nota>=7)
        {
            mayor++;
        } else {
            menor++;
        }
        
        x++;
    }

    printf("\n");
    printf("La cantidad de alumnos con nota mayor o igual a 7 es de %i alumnos.", mayor);
    printf("\n");
    printf("La cantidad de alumnos con nota menor a 7 es de %i alumnos.", menor);
    
    return 0;
}