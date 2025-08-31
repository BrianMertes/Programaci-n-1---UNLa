#include<stdio.h>
#include<string.h>

int main(){
    //Cargar por teclado dos nombres de personas que tengan distinta cantidad de caracteres. Almacenar en un tercer vector de caracteres el nombre que tenga más caracteres. Luego imprimir dicho vector.
    char nombre1[31];
    char nombre2[31];
    char nombre3[31];

    printf("Ingrese el primer nombre: ");
    fgets(nombre1,31,stdin);
    printf("Ingrese el segundo nombre: ");
    fgets(nombre2,31,stdin);
    
    if (strlen(nombre1)>strlen(nombre2))
    {
        strcpy(nombre3,nombre1);
    } else {
        strcpy(nombre3,nombre2);
    }
    printf("\n");
    printf("El nombre con mas cantidad de caracteres fue: %s", nombre3);

    return 0;
}