#include<stdio.h>
#include<string.h>

int main(){
    //Cargar por teclado en dos variables de tipo string el nombre y el apellido de una persona. Definir un tercer string y guardar la concatenación del nombre y apellido.
    char nombre[31];
    char apellido[31];
    char nombre_completo[62];

    printf("Ingrese su nombre: ");
    fgets(nombre,31,stdin);
    printf("Ingrese su apellido: ");
    fgets(apellido,31,stdin);

    strcpy(nombre_completo,nombre);
    strcat(nombre_completo," ");
    strcat(nombre_completo,apellido);
    
    printf("El nombre completo ingresado fue: %s", nombre_completo);

    return 0;
}