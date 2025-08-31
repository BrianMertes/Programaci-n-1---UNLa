#include<stdio.h>
#include<string.h>
//Desarrollar una función que solicite la carga de tres valores y muestre el menor. Desde la función main llamar 3 veces a dicha función.

void carga_menor()
{
    int num1, num2, num3;
    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer número: ");
    scanf("%i", &num3);

    if (num1<num2 && num1<num3)
    {
        printf("El menor número ingresado fue: %i", num1);
    } else if (num2<num1 && num2<num3)
    {
        printf("El menor número ingresado fue: %i", num2);
    } else if (num3<num1 && num3<num2)
    {
        printf("El menor número ingresado fue: %i", num3);
    } else {
        printf("mas de un número es igual.");
    }
    
}
void separacion()
{
    printf("\n");
    printf("*********************************");
    printf("\n");
}

int main()
{
    carga_menor();
    separacion();
    carga_menor();
    separacion();
    carga_menor();
    separacion();

    return 0;
}