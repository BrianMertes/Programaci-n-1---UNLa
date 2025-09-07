#include<stdio.h>
//Cargar un vector de 5 elementos enteros. Imprimir el menor y un mensaje si se repite dentro del vector.

void cargar(int vector[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &vector[i]);
    } 
}
void menorRepetido(int vector[5])
{
    int i, menor=vector[0], repeticion=0;
    for (i = 1; i < 5; i++)
    {
        if (vector[i]<menor)
        {
            menor=vector[i];
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        if (vector[i]==menor)
        {
            repeticion++;
        }
    }

    if (repeticion>1)
    {
        printf("El menor numero ingresado fue el: %i y se repitió %i veces", menor, repeticion);
    } else {
        printf("El menor numero ingresado fue el: %i y no se repitió.", menor);
    }
}

int main()
{
    int valores[5];
    cargar(valores);
    printf("\n");
    menorRepetido(valores);

    return 0;
}