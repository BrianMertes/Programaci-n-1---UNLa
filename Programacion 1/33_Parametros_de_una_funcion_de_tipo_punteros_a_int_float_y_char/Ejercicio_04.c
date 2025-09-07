#include<stdio.h>
//Confeccionar un programa que permita cargar un vector de 5 enteros y obtenga el mayor y el menor.
//Implementar dos funciones:
//1-Carga del vector
//2-Otra función que reciba el vector y retorne el mayor y menor elemento del vector por medio de dos parámetros de tipo puntero:
#define tamano 5

void Cargar(int vec[tamano])
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Ingrese un valor: ");
        scanf("%i", &vec[i]);
    }
}

void mayorMenor(int vec[tamano],int *pmayor,int *pmenor)
{
    int i;
    *pmayor=vec[0];
    *pmenor=vec[0];

    for (i = 0; i < tamano; i++)
    {
        if (vec[i]>*pmayor)
        {
            *pmayor=vec[i];
        }
        if (vec[i]<*pmenor)
        {
            *pmenor=vec[i];
        }
    }
}

int main()
{
    int vec[tamano]={0};
    int valorMayor,valorMenor;

    Cargar(vec);
    mayorMenor(vec,&valorMayor, &valorMenor);

    printf("\n");
    printf("El numero mayor ingresado fue: %i, y el menor fue: %i", valorMayor, valorMenor);

    return 0;
}