#include<stdio.h>
//Definir un vector de 5 componentes de tipo float en la función main que representen las alturas de 5 personas.
//Desarrollar las siguientes funciones:
//1-Carga del vector.
//2-Retornar el promedio del vector.
//float calcularPromedio(float alturas[5])
//3-Contar y luego imprimir cuántas personas son más altas que el promedio y cuántas más bajas.
//void altasBajas(float alturas[5],float pro)

void CargaVector(float alturas[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Ingrese la altura de la persona %i: ", i);
        scanf("%f", &alturas[i]);
    }
}
float RetornarPromedio(float vector[5])
{
    int i;
    float promedio=0;
    for (i = 0; i < 5; i++)
    {
        promedio += vector[i];
    }
    promedio = promedio / 5;

    return promedio;
}
void altasBajas(float vector[5], float promedio)
{
    int i, altas=0, bajas=0;
    for (i = 0; i < 5; i++)
    {
        if (vector[i]>promedio)
        {
            altas++;
        } else{
            bajas++;
        }
    }
}

int main()
{
    float alturas[5];
    CargaVector(alturas);
    printf("\n");
    printf("El promedio de las alturas ingresadas es de %f.", RetornarPromedio(alturas));
    printf("\n");
    altasBajas(alturas,RetornarPromedio(alturas));

    return 0;
}