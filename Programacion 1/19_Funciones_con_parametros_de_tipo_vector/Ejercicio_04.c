#include<stdio.h>
#include<string.h>
//Confeccionar dos funciones:
//1-Permita ingresar por teclado una palabra en un vector de caracteres que llega como parámetro.
//2-Retornar la cantidad de vocales que tiene la palabra.

void CargarPalabra(char palabra[31])
{
    printf("Ingrese una palabra: ");
    fgets(palabra,31,stdin);
    palabra[strlen(palabra)-1] = '\0';
}
int ContarVocales(char palabra[31])
{
    int vocales=0, letra=0;
    do
    {
        if (palabra[letra]=='a' || palabra[letra]=='e' || palabra[letra]=='i' || palabra[letra]=='o' || palabra[letra]=='u')
        {
            vocales++;
        }
        letra++;
    } while (palabra[letra]!='\0');

    return vocales;
}

int main()
{
    char palabra[31];

    CargarPalabra(palabra);
    printf("La cantidad de vocales en la palabra ingresada es de %i vocales.", ContarVocales(palabra));

    return 0;
}