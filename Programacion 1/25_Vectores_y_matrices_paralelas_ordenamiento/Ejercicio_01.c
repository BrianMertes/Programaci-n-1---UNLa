#include<stdio.h>
#include<string.h>
//Confeccionar un programa que permita cargar los nombres de 5 alumnos y sus notas respectivas. Luego ordenar las notas de mayor a menor. Imprimir las notas y los nombres de los alumnos.

void CargarDatos(char nombres[5][31], int notas[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Alumno %i:\n", i+1);
        printf("Nombre: ");
        fgets(nombres[i],31,stdin);
        printf("Nota: ");
        scanf("%i", &notas[i]);
        printf("\n");
        getchar();
    }
    
}
void ordenamiento(char nombres[5][31], int notas[5])
{
    int i, j, aux1;
    char aux2[31];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (notas[i]>notas[j])
            {
                aux1 = notas[j];
                notas[j] = notas[i];
                notas[i] = aux1;

                strcpy(aux2,nombres[j]);
                strcpy(nombres[j], nombres[i]);
                strcpy(nombres[i], aux2);
            }
        }
    }
}
void Imprimir(char nombres[5][31], int notas[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Alumno %i:\n", i+1);
        printf("Nombre: %s",nombres[i]);
        printf("Nota: %i\n", notas[i]);
        printf("\n");
    }
    
}
int main()
{
    char nombres[5][31];
    int notas[5];
    CargarDatos(nombres,notas);
    ordenamiento(nombres,notas);
    printf("\n");
    Imprimir(nombres,notas);

    return 0;
}