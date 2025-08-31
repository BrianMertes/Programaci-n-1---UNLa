#include<stdio.h>

int main(){
    //Se ingresan por teclado tres números, si al menos uno de los valores ingresados es menor a 10, imprimir en pantalla la leyenda "Alguno de los números es menor a diez".
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1<10 || num2<10 || num3<10)
    {
        printf("Alguno de los numeros es menor a diez.");
    }
    

    return 0;
}