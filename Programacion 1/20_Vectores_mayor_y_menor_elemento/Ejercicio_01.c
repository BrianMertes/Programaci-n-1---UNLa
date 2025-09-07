#include<stdio.h>
//Confeccionar un programa que defina en la main un vector de 5 elementos de tipo entero. Cargar e imprimir el mayor elemento y su posción.

void cargar(int vector[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &vector[i]);
    }
}
void mayorElemento(int vector[5])
{
    int i, mayor=vector[0], posicion=0;
    for (i = 1; i < 5; i++)
    {
        if (vector[i]>mayor)
        {
            mayor = vector[i];
            posicion = i;
        }   
    }
    
    printf("El numero mayor ingresado fue el %i en el indice %i", mayor, posicion);
}

int main()
{
    int valores[5];
    cargar(valores);
    printf("\n");
    mayorElemento(valores);

    return 0;
}