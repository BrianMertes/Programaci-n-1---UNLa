#include<stdio.h>

int main(){
    //Una planta que fabrica perfiles de hierro posee un lote de n piezas.
    //Confeccionar un programa que pida ingresar por teclado la cantidad de piezas a procesar y luego ingrese la longitud de cada perfil; sabiendo que la pieza cuya longitud esté comprendida en el rango de 1.20 y 1.30 son aptas. Imprimir por pantalla la cantidad de piezas aptas que hay en el lote.
    int piezas, x=1, aptas=0;
    float longitud;

    printf("Ingrese la cantidad de piezas que posee el lote: ");
    scanf("%i", &piezas);

    while (x<=piezas)
    {
        printf("Ingrese la longitud de la pieza %i: ", x);
        scanf("%f", &longitud);
        if (longitud>=1.20 && longitud<=1.30)
        {
            aptas++;
        }

        x++;
    }
    
    printf("\n");
    printf("La cantidad de piezas con una longitd apta es de %i piezas.", aptas);

    return 0;
}