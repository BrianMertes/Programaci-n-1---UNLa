#include<stdio.h>
#include<string.h>

int main(){
    //Ingresar por teclado una palabra. Mostrar luego por pantalla la cantidad de letras que tiene.
    char palabra[31];
    int letras;

    printf("Ingrese una palabra: ");
    fgets(palabra, 31, stdin);

    letras=strlen(palabra)-1; //Se resta 1 para no contar el '\0'

    printf("\n");
    printf("La cantidad de letras ingresadas fue de: %i.", letras);

    return 0;
}