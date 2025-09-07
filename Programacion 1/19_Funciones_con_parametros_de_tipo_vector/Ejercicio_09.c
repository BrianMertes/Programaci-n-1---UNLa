#include<stdio.h>
//Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor. Hacer las dos actividades en funciones distintas.
void cargar(int vector[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &vector[i]);
    }
}
void ordenado(int vector[10])
{
    int i, orden=0;
    for ( i = 0; i < 9; i++)
    {
        if (orden==0)
        {
            if (vector[i]<vector[i+1])
            {
                orden=0;
            } else {
                orden=1;
            }
        }
    }
    if (orden==0)
    {
        printf("El vector ingresado esta ordenado de menor a mayor.");
    } else if (orden==1)
    {
        printf("El vector no ingresado esta ordenado de menor a mayor.");
    }
}

int main()
{
    int valores[10];
    cargar(valores);
    printf("\n");
    ordenado(valores);

    return 0;
}