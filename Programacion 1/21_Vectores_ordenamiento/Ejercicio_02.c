#include<stdio.h>
//Cargar un vector de 5 elementos enteros. Ordenarlo de mayor a menor y mostrarlo por pantalla, luego ordenar de menor a mayor e imprimir nuevamente.

void cargar(int vector[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un valor entero: ");
        scanf("%i", &vector[i]);
    }
}
void ordenamientoMayorMenor(int vector[5])
{
    int i, j, aux;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (vector[i]>vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
void ImprimirVector(int vector[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%i\n", vector[i]);
    }
}

int main()
{
    int valores[5];
    cargar(valores);
    ordenamientoMayorMenor(valores);
    printf("\n");
    printf("Ordenamiento de mayor a menor.");
    printf("\n");
    ImprimirVector(valores);

    return 0;
}