#include<stdio.h>
#include<string.h>

int main(){
    //Ingresar dos nombres por teclado. Mostrar un mensaje si son iguales y sino mostrar el que es mayor alfabéticamente.
    char nombre_1[31];
    char nombre_2[31];

    printf("Ingrese el primer nombre: ");
    fgets(nombre_1,31,stdin);
    printf("Ingrese el segundo nombre: ");
    fgets(nombre_2,31,stdin);

    if (strcmp(nombre_1,nombre_2)==0)
    {
        printf("Ambos nombres son iguales.");
    } else if (strcmp(nombre_1,nombre_2)>0)
    {
        printf("El primer nombre ingresado es mayor alfabeticamente que el segundo.");
    } else {
        printf("El segundo nombre ingresado es mayor alfabeticamente que el primero.");
    }
    
    

    return 0;
}