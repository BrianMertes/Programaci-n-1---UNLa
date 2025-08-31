#include<stdio.h>

int main() {
    //Se carga una fecha (día, mes y año) por teclado. Mostrar un mensaje si corresponde al primer trimestre del año (enero, febrero o marzo) Cargar por teclado el valor numérico del día, mes y año.
    //Ejemplo: dia:10 mes:2 año:2017.
    int dd, mm, yy;

    printf("Ingrese una fecha:\n");
    printf("Dia: ");
    scanf("%i", &dd);
    printf("mes: ");
    scanf("%i", &mm);
    printf("año: ");
    scanf("%i", &yy);

    if (mm==1 || mm==2 || mm==3)
    {
        printf("\n");
        printf("La fecha ingresada corresponde al primer trimestre del año.");
    }
    

    return 0;
}