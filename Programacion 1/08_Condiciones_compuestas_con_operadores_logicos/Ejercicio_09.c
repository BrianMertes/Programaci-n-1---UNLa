#include<stdio.h>

int main(){
    //Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule e informe su rango de variación (debe mostrar el mayor y el menor de ellos)
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1>num2 && num1>num3)
    {
        printf("El numero mayor fue %i.\n", num1);
        if (num2>num3)
        {
            printf("El numero menor fue %i.", num3);
        } else {
            printf("El numero menor fue %i.", num2);
        }
    } else if (num2>num1 && num2>num3)
    {
        printf("El numero mayor fue %i.\n", num2);
        if (num1>num3)
        {
            printf("El numero menor fue %i.", num3);
        } else {
            printf("El numero menor fue %i.", num1);
        }
    } else {
        printf("El numero mayor fue %i.\n", num3);
        if (num2>num1)
        {
            printf("El numero menor fue %i.", num1);
        } else {
            printf("El numero menor fue %i.", num2);
        }
    }
    
    return 0;
}