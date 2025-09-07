#include<stdio.h>
#include<string.h>
//Confeccionar un programa que permita :
//1-Almacenar en una matriz los datos de 5 personas.
//2-Imprimir los nombres.
//3-Ordenar alfabéticamente los nombres.

void CargarDatos(char matriz[5][31])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un nombre: ");
        fgets(matriz[i],31,stdin);
    }
}
void ImprimirDatos(char matriz[5][31])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s", matriz[i]);
    }
}
void OrdenarAlfabeticamente(char matriz[5][31])
{
    int i,j;
    char aux[31];

    for (i = 0; i < 4; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (strcmp(matriz[j],matriz[i])<0)
            {
                strcpy(aux, matriz[i]);
                strcpy(matriz[i], matriz[j]);
                strcpy(matriz[j], aux);
            }
        }
    }
}

int main()
{
    char nombres[5][31];
    
    CargarDatos(nombres);
    printf("\n");
    printf("Datos ingresados");
    printf("\n");
    ImprimirDatos(nombres);
    OrdenarAlfabeticamente(nombres);
    printf("\n");
    printf("Datos ordenados alfabeticamente");
    printf("\n");
    ImprimirDatos(nombres);


    return 0;
}