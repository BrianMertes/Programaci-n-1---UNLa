#include<stdio.h>

int main(){
    //En un banco se procesan datos de las cuentas corrientes de sus clientes. De cada cuenta corriente se conoce: número de cuenta y saldo actual. El ingreso de datos debe finalizar al ingresar un valor negativo en el número de cuenta.
    //Se pide confeccionar un programa que lea los datos de las cuentas corrientes e informe:
    //a)De cada cuenta: número de cuenta y estado de la cuenta según su saldo, sabiendo que:
    //Estado de la cuenta 'Acreedor' si el saldo es >0.
    //                    'Deudor' si el saldo es <0.
    //                    'Nulo' si el saldo es =0.
    //b) La suma total de los saldos acreedores.
    int numero_de_cuenta;
    float saldo_actual, acreedores=0;

    printf("Ingrese el numero de cuenta (Ingrese un valor negativo para finalizar el programa): ");
    scanf("%i", &numero_de_cuenta);

    do
    {
        printf("Ingrese su saldo actual: ");
        scanf("%f", &saldo_actual);
        if (saldo_actual>0)
        {
            printf("El estado de la cuenta es: Acreedor.");
            printf("\n");
            acreedores += saldo_actual;
        } else if (saldo_actual<0)
        {
            printf("El estado de la cuenta es: Deudor.");
            printf("\n");
        } else {
            printf("El estado de la cuenta es: Nulo.");
            printf("\n");
        }
        
        printf("Ingrese el numero de cuenta (Ingrese un valor negativo para finalizar el programa): ");
        scanf("%i", &numero_de_cuenta);

    } while (numero_de_cuenta>=0);
    
    printf("\n");
    printf("La suma de los saldos de todos los acreedores es de $%f.", acreedores);

    return 0;
}