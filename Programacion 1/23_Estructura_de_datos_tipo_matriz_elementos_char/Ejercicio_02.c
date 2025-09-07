#include<stdio.h>
#include<string.h>
//Confeccionar un programa que permita :
//1-Almacenar en una matriz los datos de 5 personas.
//2-Imprimir los nombres.
//3-Ingresar otro nombre y verificar si se encuentra almacenado en la matriz.

void CargarMatriz(char matriz[5][31])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un nombre: ");
        fgets(matriz[i],31,stdin);
    }
}
void ImprimirMatriz(char matriz[5][31])
{
    int i;
    printf("Listado de nombres:");
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s", matriz[i]);  
    }
}
void BuscarIguales(char matriz[5][31])
{
    int i, iguales=0;
    char nombre[31];
    printf("Ingrese un nombre para buscar iguales en la lista ingresada: ");
    fgets(nombre,31,stdin);
    nombre[strlen(nombre)-1] = '\0';

    for ( i = 0; i < 5; i++)
    {
        matriz[i][strlen(matriz[i])-1]='\0';
        if (strcmp(nombre,matriz[i])==0)
        {
            iguales++;
        }   
    }
    printf("La cantidad de nombres iguales encontrados fue de %i", iguales);
}

int main()
{
    char nombres[5][31];
    CargarMatriz(nombres);
    printf("\n");
    ImprimirMatriz(nombres);
    printf("\n");
    BuscarIguales(nombres);

    return 0;
}