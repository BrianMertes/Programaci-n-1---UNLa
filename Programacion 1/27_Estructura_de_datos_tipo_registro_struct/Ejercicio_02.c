#include<stdio.h>
//Se tiene la siguiente declaración de registro:
//struct pais {
//    char nombre[40];
//    int cantidadhab;
//};
//Definir tres variables de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.
//Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los tres países tienen cantidades distintas)

struct pais {
    char nombre[40];
    int cantidadHabitantes;
};

int main()
{
    struct pais pais1, pais2, pais3;
    
    printf("primer pais\n");
    printf("Ingrese el nombre: ");
    fgets(pais1.nombre,40,stdin);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &pais1.cantidadHabitantes);
    getchar();

    printf("segundo pais\n");
    printf("Ingrese el nombre: ");
    fgets(pais2.nombre,40,stdin);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &pais2.cantidadHabitantes);
    getchar();

    printf("tercer pais\n");
    printf("Ingrese el nombre: ");
    fgets(pais3.nombre,40,stdin);
    printf("Ingrese la cantidad de habitantes: ");
    scanf("%i", &pais3.cantidadHabitantes);
    getchar();

    printf("\n");
    if (pais1.cantidadHabitantes>pais2.cantidadHabitantes && pais1.cantidadHabitantes>pais3.cantidadHabitantes)
    {
        printf("El pais con mas habitantes es %s", pais1.nombre);
    } else if (pais2.cantidadHabitantes>pais1.cantidadHabitantes && pais2.cantidadHabitantes>pais3.cantidadHabitantes)
    {
        printf("El pais con mas habitantes es %s", pais2.nombre);
    } else if (pais3.cantidadHabitantes>pais1.cantidadHabitantes && pais3.cantidadHabitantes>pais2.cantidadHabitantes)
    {
        printf("El pais con mas habitantes es %s", pais3.nombre);
    } else {
        printf("Mas de un pais tiene la misma cantidad de habitantes.");
    }

    return 0;
}