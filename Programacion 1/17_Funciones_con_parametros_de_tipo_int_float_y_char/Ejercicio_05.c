#include<stdio.h>
//Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos. La carga de los valores hacerlo por teclado en la función main.

void mayor(int num1, int num2, int num3)
{
    if (num1>num2 && num1>num3)
    {
        printf("El número mayor ingresado fue: %i",num1);
    } else if (num2>num1 && num2>num3)
    {
        printf("El número mayor ingresado fue: %i",num2);
    } else if (num3>num1 && num3>num2)
    {
        printf("El número mayor ingresado fue: %i",num3);
    } else {
        printf("Mas de un numero ingresado es igual.");
    }
}

int main(){
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    mayor(num1, num2, num3);

    return 0;
}