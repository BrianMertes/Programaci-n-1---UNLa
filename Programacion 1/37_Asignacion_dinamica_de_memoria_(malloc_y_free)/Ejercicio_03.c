#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Pedir ingresar por teclado cuantas letras tiene una palabra. Seguidamente crear un vector en forma dinámica que reserve el espacio mínimo para ingresar dicha palabra.
//Cargar por teclado la palabra, mostrarla y finalmente liberar el espacio requerido.

int main()
{
    int tam;
    char *palabra;

    printf("Ingrese la cantidad de letras que tendrá la palabra que va a ingresar: ");
    scanf("%i", &tam);
    fflush(stdin);
    
    tam += 2; //se suma dos debido a que la funcion fgets agrega dos elementos

    palabra = malloc(tam*sizeof(char));
    getchar();
    printf("Ingrese la palabra: ");
    fgets(palabra, tam, stdin);
    

    printf("\nLa palabra ingresada fue %s", palabra);
    free(palabra);

    return 0;
}