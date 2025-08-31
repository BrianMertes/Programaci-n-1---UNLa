#include<stdio.h>
//Confeccionar un programa que solicite el pago por hora de un empleado y la cantidad de horas trabajadas dentro de una estructura repetitiva en la función main. Elaborar una función que reciba como parámetro el valor de la hora y la cantidad de horas trabajadas y nos muestre el total a pagar.

void total_a_pagar(float pago_hora, int horas_trabajadas)
{
    int total = pago_hora * horas_trabajadas;

    printf("El total a pagar a el empleado es de: %i", total);
}

int main()
{
    float pago_hora;
    int horas_trabajadas;
    char eleccion;

    do
    {
        printf("Ingrese el pago recibido por hora: ");
        scanf("%f", &pago_hora);
        printf("Ingrese las horas trabajadas: ");
        scanf("%i", &horas_trabajadas);
        total_a_pagar(pago_hora, horas_trabajadas);

        printf("\n");
        printf("¿Quiere continuar? [s/n]: ");
        scanf(" %c", &eleccion);
        printf("\n");
    } while (eleccion=='s' || eleccion=='S');
    
    return 0;
}