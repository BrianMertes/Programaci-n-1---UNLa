#include<stdio.h>

int main(){
    //Escribir un programa que pida ingresar coordenadas (x,y) que representan puntos en el plano.
    //Informar cuántos puntos se han ingresado en el primer, segundo, tercer y cuarto cuadrante. Al comenzar el programa se pide que se ingrese la cantidad de puntos a procesar.
    int x, y, n, i, cuadrante1=0, cuadrante2=0, cuadrante3=0, cuadrante4=0;

    printf("Ingrese la cantidad de puntos que vamos a ingresar: ");
    scanf("%i", &n);

    for (i=1; i<=n; i++)
    {
        printf("Ingrese las coordenadas de un punto: ");
        printf("\n");
        printf("X: ");
        scanf("%i", &x);
        printf("Y: ");
        scanf("%i", &y);

        if (x>0 && y>0)
        {
            printf("El punto esta en el primer cuadrante.");
            cuadrante1++;
        } else if (x<0 && y>0)
        {
            printf("El punto esta en el segundo cuadrante.");
            cuadrante2++;
        } else if (x<0 && y<0)
        {
            printf("El punto esta en el tercer cuadrante.");
            cuadrante3++;
        } else if (x>0 && y<0)
        {
            printf("El punto esta en el cuarto cuadrante.");
            cuadrante4++;
        }
        printf("\n");
    }
    
    printf("\n");
    printf("La cantidad de puntos en el primer cuadrante fue de %i puntos.", cuadrante1);
    printf("\n");
    printf("La cantidad de puntos en el segundo cuadrante fue de %i puntos.", cuadrante2);
    printf("\n");
    printf("La cantidad de puntos en el tercer cuadrante fue de %i puntos.", cuadrante3);
    printf("\n");
    printf("La cantidad de puntos en el cuarto cuadrante fue de %i puntos.", cuadrante4);

    return 0;
}