#include<stdio.h>
#include<string.h>
//En un curso de 4 alumnos se registraron las notas de sus exámenes y se deben procesar de acuerdo a lo siguiente:
//a) Ingresar Nombre y Nota de cada alumno (almacenar los datos en estructuras paralelas)
//b) Realizar un listado que muestre los nombres, notas y condición del alumno. En la condición, colocar "Muy Bueno" si la nota es mayor o igual a 8, "Bueno" si la nota está entre 4 y 7, y colocar "Insuficiente" si la nota es inferior a 4.
//c) Imprimir cuantos alumnos tienen la leyenda “Muy Bueno”.

void CargarDatos(char nombres[4][31], int notas[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("Ingrese el nombre del alumno %i: ", i+1);
        fgets(nombres[i],31,stdin);
        printf("Ingrese la nota del alumno %i: ", i+1);
        scanf("%i", &notas[i]);
        getchar();
    }
}
void Condicion(char nombres[4][31], int notas[4])
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("\n");
        if (notas[i]>=8 && notas[i]<=10)
        {
            printf("\n");
            printf("nombre: %s", nombres[i]);
            printf("nota: %i", notas[i]);
            printf("\n");
            printf("condición: Muy bueno");
        } else if (notas[i]>=4 && notas[i]<=7)
        {
            printf("\n");
            printf("nombre: %s", nombres[i]);
            printf("nota: %i", notas[i]);
            printf("\n");
            printf("condición: Bueno");
        } else if (notas[i]>=1 && notas[i]<=3)
        {
            printf("\n");
            printf("nombre: %s", nombres[i]);
            printf("nota: %i", notas[i]);
            printf("\n");
            printf("condición: insuficiente");
        }
    }
}
int cantidadMuyBueno(int notas[4])
{
    int i, muybueno=0;
    for (i = 0; i < 4; i++)
    {
        if (notas[i]>=8 && notas[i]<=10)
        {
            muybueno++;
        }
    }
    return muybueno;
}

int main(){
    char nombres[4][31];
    int notas[4];
    CargarDatos(nombres, notas);
    printf("\n");
    Condicion(nombres, notas);
    printf("\n");
    printf("\nLa cantidad de alumnos con la condicion de 'Muy Bueno' fue de %i alumnos.", cantidadMuyBueno(notas));

    return 0;
}