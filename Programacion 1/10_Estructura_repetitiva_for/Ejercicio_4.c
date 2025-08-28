#include<stdio.h>

int main(){
    //Escribir un programa que lea 10 números enteros y luego muestre cuántos valores ingresados fueron múltiplos de 3 y cuántos de 5. Debemos tener en cuenta que hay números que son múltiplos de 3 y de 5 a la vez.
    int num, mult_3=0, mult_5=0, i;

    for (i=1; i<=10; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);
        if (num%3==0)
        {
            mult_3++;
        }
        if (num%5==0)
        {
            mult_5++;
        }
    }
    
    printf("\n");
    printf("La cantidad de numeros ingresados que son multiplos de 3, fue de %i numeros.", mult_3);
    printf("\n");
    printf("La cantidad de numeros ingresados que son multiplos de 5, fue de %i numeros.", mult_5);

    return 0;
}