#include<stdio.h>
#include<string.h>

int main(){
    //Cargar los nombres de dos personas y sus edades. Mostrar el nombre de la persona que tiene mayor edad. Los nombres de las personan no superan los 20 caracteres.
    int edad1, edad2;
    char nombre_1[21];
    char nombre_2[21];

    printf("Ingrese los datos de la primer persona:");
    printf("\n");
    printf("Edad: ");
    scanf("%i", &edad1);
    getchar();
    printf("Nombre: ");
    fgets(nombre_1, 21, stdin);
    
    

    printf("\n");
    printf("Ingrese los datos de la segunda persona:");
    printf("\n");
    printf("Edad: ");
    scanf("%i", &edad2);
    getchar(); 
    printf("Nombre: ");
    fgets(nombre_2, 21, stdin);

    printf("\n");
    if (edad1>edad2)
    {
        printf("%s", nombre_1);
    } else if (edad2>edad1)
    {
        printf("%s", nombre_2);
    } else {
        printf("%s", nombre_1);
        printf("\n");
        printf("%s", nombre_2);
    }
    
    return 0;
}