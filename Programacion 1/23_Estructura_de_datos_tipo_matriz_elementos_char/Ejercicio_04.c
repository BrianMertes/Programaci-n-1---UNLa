#include<stdio.h>
#include<string.h>
//Confeccionar un programa que permita :
//1-Almacenar en una matriz los datos de 5 personas.
//2-Imprimir el nombre alfabéticamente menor.

void CargarDatos(char matriz[5][31])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese un nombre: ");
        fgets(matriz[i],31,stdin);
    }
}
void BuscarElMenor(char matriz[5][31])
{
    int i;
    char menor[31];

    strcpy(menor,matriz[0]);

    for (i = 1; i < 5; i++)
    {
        if (strcmp(menor,matriz[i])>0)
        {
            strcpy(menor,matriz[i]);
        }
    }

    printf("El nombre alfabeticamente menor es: %s",menor);
}
int main()
{
    char nombres[5][31];
    CargarDatos(nombres);
    printf("\n");
    BuscarElMenor(nombres);

    return 0;
}