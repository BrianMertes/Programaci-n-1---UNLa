#include<stdio.h>
#include<string.h>

int main(){
    //Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string. Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123".
    char usuario[31];
    char clave[31];

    printf("Ingrese el usuario: ");
    fgets(usuario,31,stdin);
    printf("Ingrese la clave: ");
    fgets(clave,31,stdin);
    clave[strlen(clave)-1]='\0';

    if (strcmp(clave,"abc123") == 0)
    {
        printf("\n");
        printf("Correcto.");
    } else {
        printf("\n");
        printf("Incorrecto.");
    }
    
    return 0;
}