#include<stdio.h>

int main(){
    //Escribir un programa que solicite la carga de un número entre 0 y 999, y nos muestre un mensaje de cuántos dígitos tiene el mismo. Finalizar el programa cuando se cargue el valor 0.
    int num;

    printf("Ingrese un número: ");
    scanf("%i", &num);

    do
    {
        if (num>=0)
        {
            if (num<=9)
            {
                printf("El número ingresado tiene un digito.");
            } else if (num<=99)
            {
                printf("El número ingresado tiene dos digitos.");
            } else if (num<=999)
            {
                printf("El número ingresado tiene tres digitos.");
            } else {
                printf("El número ingresado excede los tres digitos.");
            }
        } else{ 
            if (num>=-9)
            {
                printf("El número ingresado tiene un digito.");
            } else if (num>=-99)
            {
                printf("El número ingresado tiene dos digitos.");
            } else if (num>=-999)
            {
                printf("El número ingresado tiene tres digitos.");
            } else {
                printf("El número ingresado excede los tres digitos.");
            }
        }

        printf("\n");
        printf("\n");
        printf("Ingrese un número: ");
        scanf("%i", &num);

    } while (num!=0);
    
    return 0;
}