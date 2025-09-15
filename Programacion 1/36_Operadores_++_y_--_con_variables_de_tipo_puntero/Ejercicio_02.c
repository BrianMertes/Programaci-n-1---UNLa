#include<stdio.h>
#include<string.h>
//Implementar la función: int largo(char *cadena)
//Debe retornar el largo de la cadena utilizando la sintaxis de punteros para acceder a sus componentes. Recordar que el caracter '\0' indica el fin de la parte de información de la cadena.
//No podemos utilizar la función strlen, ya que en realidad estamos pidiendo implementar el algoritmo de dicha función.

int largo(char *cadena)
{
    int cantChar=0;
    while (*cadena!='\0')
    {
        cantChar++;
        cadena++;
    }
    return cantChar;
}

int main()
{
    char cadena[40];
    printf("Ingrese una palabra: ");
    fgets(cadena,40,stdin);
    cadena[strlen(cadena)-1] = '\0';
    printf("\nEl largo de la palabra ingresada es %i caracteres.", largo(cadena));

    return 0;
}