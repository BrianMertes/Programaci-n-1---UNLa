#include<stdio.h>
#include<string.h>

int main(){
    //Ingresar por teclado dos nombres de personas y luego mostrarlas primero el que tiene más caracteres y luego el que tiene menos.
    char nombre1[31];
    char nombre2[31];
    
    printf("Ingrese el primer nombre: ");
    fgets(nombre1,31,stdin);
    printf("Ingrese el segundo nombre: ");
    fgets(nombre2,31,stdin);

    if (strlen(nombre1)>strlen(nombre2))
    {
        printf("%s",nombre1);
        printf("%s",nombre2);
    } else {
        printf("%s",nombre2);
        printf("%s",nombre1);
    }
    

    return 0;
}