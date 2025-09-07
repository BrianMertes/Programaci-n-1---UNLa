#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro:
//struct libro{
//    int codigo;
//    char titulo[40];
//    char autor[40];
//};
//Definir un vector de cuatro elementos de tipo libro.
//Codificar las funciones:
//1-Carga del vector.
//2-Listado completo.
//3-Ingresar por teclado un nombre de autor y luego mostrar todos los títulos de libros que ha escrito o un mensaje si no tiene.

#define tamano 4
struct libro{
    int codigo;
    char titulo[40];
    char autor[40];
};
void Carga(struct libro vec[tamano])
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Libro %i:\n", i+1);
        printf("Ingrese el codigo del libro: ");
        scanf("%i", &vec[i].codigo);
        getchar();
        printf("Ingrese el título del libro: ");
        fgets(vec[i].titulo,40,stdin);
        printf("Ingrese el autor del libro: ");
        fgets(vec[i].autor,40,stdin);
        printf("\n");
        vec[i].autor[strlen(vec[i].autor)-1] = '\0';
        vec[i].titulo[strlen(vec[i].titulo)-1] = '\0';
    }
}
void ImprimirListado(struct libro vec[tamano])
{
    int i;
    for (i = 0; i < tamano; i++)
    {
        printf("Codigo: %i\n", vec[i].codigo);
        printf("Titulo: %s\n", vec[i].titulo);
        printf("Autor: %s\n", vec[i].autor);
        printf("\n");
    }
}
void BusquedaPorAutor(struct libro vec[tamano])
{
    int i, coincidencias=0;
    char BuscarAutor[40];

    printf("Ingrese el autor a Buscar: ");
    fgets(BuscarAutor,40,stdin);
    BuscarAutor[strlen(BuscarAutor)-1] = '\0';

    for (i = 0; i < tamano; i++)
    {
        if (strcmp(BuscarAutor,vec[i].autor)==0)
        {
            printf("Título: %s\n", vec[i].titulo);
            coincidencias++;
        }
    }
    if (coincidencias == 0)
    {
        printf("No hubo coincidencias, no tenemos libros del autor %s", BuscarAutor);
    }
}

int main()
{
    struct libro vec[tamano];
    Carga(vec);
    printf("\n");
    ImprimirListado(vec);
    printf("\n");
    BusquedaPorAutor(vec);

    return 0;
}