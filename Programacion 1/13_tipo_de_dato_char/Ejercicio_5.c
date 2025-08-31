#include<stdio.h>

int main(){
    //Realizar un programa que solicite la carga de la edad y sexo de dos personas. Luego mostrar la edad y sexo de la persona mayor. Para almacenar el sexo definir variables de tipo char donde se almacenará el caracter 'm' o 'f' indicando si es del sexo masculino o femenino.
    int edad[2];
    char sexo[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Ingrese la edad de la persona %i: ", i+1);
        scanf("%i", &edad[i]);

        printf("Ingrese el sexo de la persona %i [f/m]: ", i+1);
        scanf(" %c", &sexo[i]);
    }

    printf("\n");
    if (edad[0]>edad[1])
    {
        printf("datos de la persona mayor:");
        printf("\n");
        printf("Edad: %i", edad[0]);
        printf("\n");
        if (sexo[0]=='m')
        {
            printf("Sexo: Masculino");
        } else if (sexo[0]=='f')
        {
            printf("Sexo: Femenino");
        } else {
            printf("Sexo: Desconocido, dato ingresado por el usuario: %c", sexo[0]);
        }
    } else if (edad[1]>edad[0])
    {
        printf("datos de la persona mayor:");
        printf("\n");
        printf("Edad: %i", edad[1]);
        printf("\n");
        if (sexo[1]=='m')
        {
            printf("Sexo: Masculino");
        } else if (sexo[1]=='f')
        {
            printf("Sexo: Femenino");
        } else {
            printf("Sexo: Desconocido, dato ingresado por el usuario: %c", sexo[1]);
        }
    } else {
        printf("Ambas personas tienen la misma edad. Datos de ambas personas:");
        printf("\n");
        printf("Edad de la primer persona: %i", edad[0]);
        printf("\n");
        if (sexo[0]=='m')
        {
            printf("Sexo: Masculino");
        } else if (sexo[0]=='f')
        {
            printf("Sexo: Femenino");
        } else {
            printf("Sexo: Desconocido, dato ingresado por el usuario: %c", sexo[0]);
        }
        printf("\n");
        printf("\n");
        printf("Edad de la segunda persona: %i", edad[1]);
        printf("\n");
        if (sexo[1]=='m')
        {
            printf("Sexo: Masculino");
        } else if (sexo[1]=='f')
        {
            printf("Sexo: Femenino");
        } else {
            printf("Sexo: Desconocido, dato ingresado por el usuario: %c", sexo[1]);
        }
    }

    return 0;
}