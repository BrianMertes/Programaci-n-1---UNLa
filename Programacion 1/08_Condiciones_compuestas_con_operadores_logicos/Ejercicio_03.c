#include<stdio.h>

int main(){
    //Realizar un programa que pida cargar una fecha cualquiera, luego verificar si dicha fecha corresponde a Navidad.
    int dd, mm, yy;
    printf("Ingrese una fecha:\n");
    printf("Dia: ");
    scanf("%i", &dd);
    printf("mes: ");
    scanf("%i", &mm);
    printf("año: ");
    scanf("%i", &yy);

    if (mm==12 && dd==25)
    {
        printf("La fecha ingresada corresponde a la navidad del año %i", yy);
    }

    return 0;
}