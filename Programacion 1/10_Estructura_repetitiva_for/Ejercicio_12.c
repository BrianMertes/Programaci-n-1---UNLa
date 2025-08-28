#include<stdio.h>

int main(){
    //Se realiza la carga de 10 valores enteros por teclado. Se desea conocer:
    //a) La cantidad de valores ingresados negativos.
    //b) La cantidad de valores ingresados positivos.
    //c) La cantidad de múltiplos de 15.
    //d) El valor acumulado de los números ingresados que son pares.
    int num, negativos=0, positivos=0, mult_15=0, acum_pares=0, i;

    for (i=1; i<=10; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &num);

        if (num>0)
        {
            positivos++;
        } else if (num<0)
        {
            negativos++;
        }
        
        if (num%15==0)
        {
            mult_15++;
        }
        
        if (num%2==0)
        {
            acum_pares = acum_pares + num;
        }
    }
    
    printf("\n");
    printf("La cantidad de numeros positivos fue de: %i.", positivos);
    printf("\n");
    printf("La cantidad de numeros negativos fue de: %i.", negativos);
    printf("\n");
    printf("La cantidad de numeros multiplos de 15 fue de: %i.", mult_15);
    printf("\n");
    printf("La aucmulacion de los numeros pares fue de: %i.", acum_pares);

    return 0;
}