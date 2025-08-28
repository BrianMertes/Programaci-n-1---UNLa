#include<stdio.h>

int main(){
    //Se ingresan tres valores por teclado, si todos son iguales se imprime la suma del primero con el segundo y a este resultado se lo multiplica por el tercero.
    int num1, num2, num3, operacion;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);

    if (num1==num2 && num1==num3)
    {
        operacion = (num1 + num2) * num3;
        printf("\n");
        printf("(%i + %i) * %i = %i", num1, num2, num3, operacion);
    }
    

    return 0;
}