#include<stdio.h>
//Se debe crear un vector donde almacenar 5 sueldos. Ordenar el vector sueldos de menor a mayor.

void cargar(float vector[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el sueldo del empleado %i: ", i+1);
        scanf("%f", &vector[i]);
    }
}
void ordenamiento(float vector[5])
{
    int i, j, aux;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (vector[i]<vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("sueldo %i: $%f\n", i, vector[i]);
    } 
}

int main()
{
    float sueldos[5];
    cargar(sueldos);
    printf("\n");
    printf("Orden de menor a mayor.");
    printf("\n");
    ordenamiento(sueldos);

    return 0;
}