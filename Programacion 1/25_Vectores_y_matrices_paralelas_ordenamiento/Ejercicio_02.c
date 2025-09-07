#include<stdio.h>
#include<string.h>
//Cargar en una matriz los nombres de 5 países y en un vector paralelo la cantidad de habitantes del mismo. Ordenar alfabéticamente e imprimir los resultados. Por último ordenar con respecto a la cantidad de habitantes (de mayor a menor) e imprimir nuevamente.

void CargarDatos(char paises[5][31], int habitantes[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre del país: ");
        fgets(paises[i],31,stdin);
        printf("Ingrese la cantidad de habitantes que tiene: ");
        scanf("%i", &habitantes[i]);
        getchar();
    }
}
void OrdenAlfabetico(char paises[5][31], int habitantes[5])
{
    int i,j,aux;
    char aux2[31];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (strcmp(paises[i],paises[j])<0)
            {
                aux = habitantes[i];
                habitantes[i] = habitantes[j];
                habitantes[j] = aux;

                strcpy(aux2, paises[i]);
                strcpy(paises[i],paises[j]);
                strcpy(paises[j],aux2);
            }
        }
    }
}
void ordenPorHabitantes(char paises[5][31], int habitantes[5])
{
    int i,j,aux;
    char aux2[31];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (habitantes[i]>habitantes[j])
            {
                aux = habitantes[i];
                habitantes[i] = habitantes[j];
                habitantes[j] = aux;

                strcpy(aux2, paises[i]);
                strcpy(paises[i],paises[j]);
                strcpy(paises[j],aux2);
            }
        }
    }
}
void Imprimir(char paises[5][31], int habitantes[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Pais: %s", paises[i]);
        printf("Habitantes: %i\n", habitantes[i]);
    }
    
}
int main()
{
    char paises[5][31];
    int habitantes[5];
    CargarDatos(paises,habitantes);
    printf("\nPaises ordenados alfabeticamente:\n");
    OrdenAlfabetico(paises,habitantes);
    Imprimir(paises,habitantes);
    printf("\nPaises ordenados por cantidad de habitantes:\n");
    ordenPorHabitantes(paises,habitantes);
    Imprimir(paises,habitantes);

    return 0;
}