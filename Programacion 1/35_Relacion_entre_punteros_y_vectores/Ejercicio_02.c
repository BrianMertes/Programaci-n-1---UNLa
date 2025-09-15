#include<stdio.h>
#include<string.h>
//Se define en la main un vector de tipo char de 40 caracteres.
//Implementar las funciones de carga e impresión de dicho vector utilizando la sintaxis de punteros cuando definamos los parámetros de las funciones.

void cargar(char *pc)
{
    printf("Ingrese una palabra: ");
    fgets(pc,40,stdin);
}
void imprimir(char *pc)
{
    printf("Palabra ingresada: %s", pc);
}

int main()
{
    char palabra[40];
    cargar(palabra);
    printf("\n");
    imprimir(palabra);

    return 0;
}