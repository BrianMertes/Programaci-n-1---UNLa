#include<stdio.h>

int main(){
    //Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor", "Lista 2 mayor", "Listas iguales")
    //Tener en cuenta que puede haber dos o más estructuras repetitivas en un algoritmo.
    int num, lista1=0, lista2=0, x=1, j=1;

    while (x<=2)
    {
        while (j<=15)
        {
            if (x==1)
            {
                printf("Ingrese un numero para la lista 1: ");
                scanf("%i", &num);

                lista1 = lista1 + num;
            } else {
                printf("Ingrese un numero para la lista 2: ");
                scanf("%i", &num);

                lista2 = lista2 + num;
            }
            j++;
        }
        x++;
        j = 1;
    }

    printf("\n");

    if (lista1>lista2)
    {
        printf("Lista 1 mayor.");
    } else if (lista2>lista1)
    {
        printf("Lista 2 mayor.");
    } else {
        printf("Listas iguales.");
    }
    
    

    return 0;
}