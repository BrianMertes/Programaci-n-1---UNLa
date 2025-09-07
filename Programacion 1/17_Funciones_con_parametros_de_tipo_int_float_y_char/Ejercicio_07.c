#include<stdio.h>
//Desarrollar una función que reciba como parámetro un caracter. La función debe mostrar un mensaje si es una vocal o no es una vocal. Debe funcionar tanto con mayúsculas y minúsculas.

void vocales(char letra)
{
    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    {
        printf("La letra ingresada es vocal.");
    } else {
        printf("La letra no ingresada es vocal.");
    }
}

int main()
{
    char letra;
    printf("Ingrese una letra: ");
    scanf(" %c", &letra);
    vocales(letra);

    return 0;
}