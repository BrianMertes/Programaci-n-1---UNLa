#include<stdio.h>

int main(){
    //De un operario se conoce su sueldo y los años de antigüedad. Se pide confeccionar un programa que lea los datos de entrada e informe:
    //a) Si el sueldo es inferior a 500 y su antigüedad es igual o superior a 10 años, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
    //b)Si el sueldo es inferior a 500 pero su antigüedad es menor a 10 años, otorgarle un aumento de 5 %.
    //c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
    int sueldo, antiguedad;

    printf("Ingrese su sueldo: ");
    scanf("%i", &sueldo);
    printf("Ingrese sus años de antigüedad: ");
    scanf("%i", &antiguedad);

    if (sueldo<500 && antiguedad>=10)
    {
        sueldo = sueldo * 1.2;
        printf("Su nuevo sueldo es $%i", sueldo);
    } else if (sueldo<500 && antiguedad<10)
    {
        sueldo = sueldo * 1.05;
        printf("Su nuevo sueldo es $%i", sueldo);
    } else {
        printf("Su sueldo no tendrá cambios: $%i", sueldo);
    }

    return 0;
}