#include<stdio.h>
#include<string.h>

int main(){
    //Cargar tres nombres por teclado. Generar un cuarto string que almacene los tres nombres ingresados por teclado en orden alfabético separados por una coma.
    char nombre1[31];
    char nombre2[31];
    char nombre3[31];
    char nombres_ordenados[93];

    printf("Ingrese el primer nombre: ");
    fgets(nombre1,31,stdin);
    printf("Ingrese el segundo nombre: ");
    fgets(nombre2,31,stdin);
    printf("Ingrese el tercer nombre: ");
    fgets(nombre3,31,stdin);

    nombre1[strlen(nombre1)-1]='\0';
    nombre2[strlen(nombre2)-1]='\0';
    nombre3[strlen(nombre3)-1]='\0';

    if (strcmp(nombre1,nombre2)<0 && strcmp(nombre1,nombre3)<0)
    {
        strcpy(nombres_ordenados, nombre1);
        strcat(nombres_ordenados,",");
        
        if (strcmp(nombre2,nombre3)<0)
        {
            strcat(nombres_ordenados,nombre2);
            strcat(nombres_ordenados,",");
            strcat(nombres_ordenados,nombre3);
        } else {
            strcat(nombres_ordenados,nombre3);
            strcat(nombres_ordenados,",");
            strcat(nombres_ordenados,nombre2);
        }
        
    } else if (strcmp(nombre2,nombre1)<0 && strcmp(nombre2,nombre3)<0)
    {
        strcpy(nombres_ordenados, nombre2);
        strcat(nombres_ordenados,",");

        if (strcmp(nombre1,nombre3)<0)
        {
            strcat(nombres_ordenados,nombre1);
            strcat(nombres_ordenados,",");
            strcat(nombres_ordenados,nombre3);
        } else {
            strcat(nombres_ordenados,nombre3);
            strcat(nombres_ordenados,",");
            strcat(nombres_ordenados,nombre1);
        }
    } else if (strcmp(nombre3,nombre1)<0 && strcmp(nombre3,nombre2)<0)
    {
        strcpy(nombres_ordenados, nombre3);
        strcat(nombres_ordenados,",");

        if (strcmp(nombre1,nombre2)<0)
        {
            strcat(nombres_ordenados,nombre1);
            strcat(nombres_ordenados,",");
            strcat(nombres_ordenados,nombre2);
        } else {
            strcat(nombres_ordenados,nombre2);
            strcat(nombres_ordenados,",");
            strcat(nombres_ordenados,nombre1);
        }
    }
    
    printf("%s", nombres_ordenados);

    return 0;
}