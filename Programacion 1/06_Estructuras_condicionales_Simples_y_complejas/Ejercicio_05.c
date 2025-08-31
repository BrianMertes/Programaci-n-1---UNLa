#include<stdio.h>

int main(){
    //Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
    int num;

    printf("Ingrese un numero: ");
    scanf("%i", &num);

    if (num>0)
    {
        if (num<10)
        {
            printf("El numero tiene solo un digito.");
        } else if (num<100)
        {
            printf("El numero tiene dos digitos.");
        } else {
            printf("El numero ingresado supera los dos digitos.");
        }
    }
    
    if (num<0)
    {
        if (num>-10)
        {
            printf("El numero tiene solo un digito.");
        } else if (num>-100)
        {
            printf("El numero tiene dos digitos.");
        } else {
            printf("El numero ingresado supera los dos digitos.");
        }
    }
    
    

    return 0;
}