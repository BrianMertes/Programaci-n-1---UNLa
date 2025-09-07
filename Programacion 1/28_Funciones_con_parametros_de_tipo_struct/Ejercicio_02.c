#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro:
//struct pais {
//    char nombre[40];
//    int cantidadhab;
//};
//Definir tres variables de tipo país e iniciarlas por asignación con la sintaxis:
//struct pais pais1={"Argentina",40000000};
//Elaborar una función que reciba un parámetro de tipo pais y muestre por pantalla sus dos campos. Llamar a dicha función desde la main pasando en forma sucesiva las tres variables definidas.

struct pais {
    char nombre[40];
    int cantidadhab;
};

void ImprimirPais(struct pais p)
{
    printf("Nombre del país: %s\n", p.nombre);
    printf("Cantidad de habitantes del país: %i\n", p.cantidadhab);
}

int main()
{
    struct pais pais1={"Argentina",45000000}, pais2={"Brasil",220000000}, pais3={"Perú",32000000};
    
    ImprimirPais(pais1);
    printf("\n");
    ImprimirPais(pais2);
    printf("\n");
    ImprimirPais(pais3);

    return 0;
}