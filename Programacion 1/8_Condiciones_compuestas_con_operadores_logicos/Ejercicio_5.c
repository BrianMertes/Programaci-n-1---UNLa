#include<stdio.h>

int main(){
    //Se ingresan por teclado tres números, si todos los valores ingresados son menores a 10, imprimir en pantalla la leyenda "Todos los números son menores a diez".
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1<10 && num2<10 && num3<10)
    {
        printf("\n");
        printf("Todos los numeros ingresados son menores a 10.");
    }
    

    return 0;
}