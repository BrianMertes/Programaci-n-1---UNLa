#include<stdio.h>

int main(){
    //Realizar un programa que permita ingresar el peso (en kilogramos) de piezas. El proceso termina cuando ingresamos el valor 0. Se debe informar:
    //a) ¿Cuántas piezas tienen un peso entre 9.8 Kg. y 10.2 Kg.?, ¿Cuántas con más de 10.2 Kg.? y ¿Cuántas con menos de 9.8 Kg.?
    //b) La cantidad total de piezas procesadas.
    float peso;
    int entre=0, mayor=0, menor=0;

    printf("Ingrese el peso de la pieza (ingresá 0 para terminar el programa): ");
    scanf("%f", &peso);

    do
    {
        if (peso>=9.8 && peso<=10.2)
        {
            entre++;
        } else if (peso<9.8)
        {
            menor++;
        } else {
            mayor++;
        }
        
        printf("Ingrese el peso de la pieza (ingresá 0 para terminar el programa): ");
        scanf("%f", &peso);
        
    } while (peso!=0);
    
    printf("\n");
    printf("La cantidad de piezas con un peso menor a 9.8kg es de %i piezas.", menor);
    printf("\n");
    printf("La cantidad de piezas con un peso entre 9.8kg y 10.2kg es de %i piezas.", entre);
    printf("\n");
    printf("La cantidad de piezas con un peso mayor a 10.2kg es de %i piezas.", mayor);

    return 0;
}