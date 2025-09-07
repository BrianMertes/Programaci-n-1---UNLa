#include<stdio.h>
//Elaborar una función que reciba un valor entero y nos muestre desde el 1 hasta dicho valor. Si la función recibe un valor negativo mostrar un mensaje de error.

void contador(int num)
{
    int i;
    if (num>0)
    {
        for (i=1; i<=num; i++)
        {
            if (i!=num)
            {
                printf("%i - ", i);
            } else {
                printf("%i", i);
            } 
        }
    } else {
        printf("Error.");
    }
}

int main()
{
    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    contador(num);

    return 0;
}