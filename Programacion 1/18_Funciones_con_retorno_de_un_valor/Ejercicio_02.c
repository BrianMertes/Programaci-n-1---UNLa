#include<stdio.h>
//Confeccionar una función que defina dos parámetros enteros y nos retorne el mayor.

int NumeroMayor(int num1, int num2)
{
    int mayor;
    if (num1>num2)
    {
        mayor = num1;
    } else if(num2>num1){
         mayor = num2;
    }
    return mayor;
}

int main()
{
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo número: ");
    scanf("%i", &num2);

    printf("Entre los números ingresados, el mayor es %i.", NumeroMayor(num1,num2));

    return 0;
}