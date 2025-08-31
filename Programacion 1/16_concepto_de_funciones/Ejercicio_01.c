#include<stdio.h>
#include<string.h>

void presentacion()
    {
        printf("Programa que permite solicitar valores y mostrar la suma de los mismos.\n");
        printf("-----------------------------------------------------------------------\n");
    }

void carga_y_suma_de_valores()
{
    int num1, num2, suma=0;
    printf("Ingrese el primer valor numerico: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo valor numerico: ");
    scanf("%i", &num2);
    suma = num1 + num2;

    printf("\n");
    printf("La suma de los valores ingresados da como resultado: %i\n", suma);
}

void despedida()
{
    printf("-----------------------------------------------------------------------\n");
    printf("Gracias por utilizar el programa");
}

int main(){
    //Confeccionar un programa que muestre una presentación en pantalla del programa. Solicite la carga de dos valores y nos muestre la suma. Mostrar finalmente un mensaje de despedida del programa.
    //Implementar estas actividades en tres funciones.

    presentacion();
    carga_y_suma_de_valores();  
    despedida();

    return 0;
}