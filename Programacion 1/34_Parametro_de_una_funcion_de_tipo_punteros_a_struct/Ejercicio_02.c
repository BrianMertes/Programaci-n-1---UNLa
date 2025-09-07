#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro: pais(nombre, cantidadHab)
//Definir tres variables de tipo país en la función main.
//Crear una función que reciba un puntero de tipo pais y cargue por teclado el nombre del país y la cantidad de habitantes.
//Mostrar en otra función los datos cargados de cada país.

struct pais {
    char nombre[40];
    int cantidadhab;
};

void Cargar(struct pais *ppais)
{
    printf("Ingrese el nombre del país: ");
    fgets((*ppais).nombre,40,stdin);
    (*ppais).nombre[strlen((*ppais).nombre)-1] = '\0';
    printf("Ingrese la cantidad de habitantes del país: ");
    scanf("%i", &(*ppais).cantidadhab);
    getchar();
}
void Imprimir(struct pais p)
{
    printf("Nombre del país: %s\n",p.nombre);
    printf("Cantidad de habitantes del país: %i\n",p.cantidadhab);
}

int main()
{
    struct pais p1, p2, p3;

    printf("Primer país:\n");
    Cargar(&p1);
    printf("\n");
    printf("Segundo país:\n");
    Cargar(&p2);
    printf("\n");
    printf("Tercer país:\n");
    Cargar(&p3);
    printf("\n");

    Imprimir(p1);
    Imprimir(p2);
    Imprimir(p3);

    return 0;
}