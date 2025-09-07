#include<stdio.h>
#include<string.h>
//Se tiene la siguiente declaración de registro:
//struct punto {
//    int x;
//    int y;
//};
//Definir tres variables de tipo punto y cargarlas llamando a una función que retorne valores de tipo punto.
//Finalmente crear otra función que imprima en que cuadrante se encuentra cada punto (tener en cuenta que si x>0 e y>0 se encuentra en el primer cuadrante, si x<0 e y>0 se encuentra en el segundo cuadrante y así sucesivamente)

struct punto {
    int x;
    int y;
};

struct punto CargaDeValores()
{
    struct punto p;
    printf("Ingrese un valor x: ");
    scanf("%i", &p.x);
    printf("Ingrese un valor y: ");
    scanf("%i", &p.y);
    return p;
};
void ImprimirCuadrante(struct punto p)
{
    if (p.x>0 && p.y>0)
    {
        printf("Primer cuadrante.");
    } else if (p.x<0 && p.y>0)
    {
        printf("Segundo cuadrante.");
    } else if (p.x<0 && p.y<0)
    {
        printf("Tercer cuadrante.");
    } else if (p.x>0 && p.y<0)
    {
        printf("Cuarto cuadrante.");
    }
}

int main()
{
    struct punto p1, p2, p3;
    printf("Primer punto.\n");
    p1 = CargaDeValores();
    ImprimirCuadrante(p1);
    printf("\n");
    printf("\n");
    printf("Segundo punto.\n");
    p2 = CargaDeValores();
    ImprimirCuadrante(p2);
    printf("\n");
    printf("\n");
    printf("Tercer punto.\n");
    p3 = CargaDeValores();
    ImprimirCuadrante(p3);

    return 0;
}