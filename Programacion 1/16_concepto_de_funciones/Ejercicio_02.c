#include<stdio.h>
#include<string.h>

//Confeccionar una aplicación que solicite la carga de dos valores enteros y muestre su suma.
//Repetir la carga de otros dos valores, sumarlos y mostrar.
//Mostrar una línea separadora después de cada vez que cargamos dos valores y mostramos su suma.

void carga_suma(){
    int num1, num2, suma=0;
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el primer número: ");
    scanf("%i", &num2);
    suma = num1 + num2;
    printf("\n");
    printf("%i + %i = %i", num1, num2, suma);
}
void separacion()
{
    printf("\n");
    printf("*******************************");
    printf("\n");
}

int main(){
    carga_suma();
    separacion();
    carga_suma();
    separacion();

    return 0;
}