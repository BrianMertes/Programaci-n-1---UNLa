#include<stdio.h>

int main(){
    //Escribir un programa que pida ingresar la coordenada de un punto en el plano, es decir dos valores enteros x e y (distintos a cero).
    //Posteriormente imprimir en pantalla en que cuadrante se ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)
    int x, y;
    
    printf("Ingrese la coordenada de un punto en el plano: \n");
    printf("X: ");
    scanf("%i", &x);
    printf("Y: ");
    scanf("%i", &y);

    if (x>0 && y>0)
    {
        printf("El punto esta en el primer cuadrante.");
    } else if (x<0 && y>0)
    {
        printf("El punto esta en el segundo cuadrante.");
    } else if (x<0 && y<0)
    {
        printf("El punto esta en el tercer cuadrante.");
    } else if (x>0 && y<0)
    {
        printf("El punto esta en el cuarto cuadrante.");
    }
    
    
    
    

    return 0;
}