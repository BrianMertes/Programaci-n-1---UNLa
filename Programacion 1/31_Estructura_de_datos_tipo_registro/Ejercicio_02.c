#include<stdio.h>
#include<string.h>
//Se tienen las siguientes declaraciones de registros: punto(int x,y) y triangulo(struct punto punto1, punto2, punto3)
//Definir en la main un registro de tipo triangulo.
//Codificar las funciones:
//1-Una función que retorne un registro de tipo triangulo.
//2-Impresión del registro.

struct punto {
    int x;
    int y;
};

struct triangulo {
    struct punto punto1;
    struct punto punto2;
    struct punto punto3;
};

struct triangulo cargar()
{
    struct triangulo triangulo1;
    printf("Ingrese la coordenada 'x' del triangulo 1: ");
    scanf("%i", &triangulo1.punto1.x);
    printf("Ingrese la coordenada 'y' del triangulo 1: ");
    scanf("%i", &triangulo1.punto1.y);
    printf("Ingrese la coordenada 'x' del triangulo 2: ");
    scanf("%i", &triangulo1.punto2.x);
    printf("Ingrese la coordenada 'y' del triangulo 2: ");
    scanf("%i", &triangulo1.punto2.y);
    printf("Ingrese la coordenada 'x' del triangulo 3: ");
    scanf("%i", &triangulo1.punto3.x);
    printf("Ingrese la coordenada 'y' del triangulo 3: ");
    scanf("%i", &triangulo1.punto3.y);

    return triangulo1;
}
void Imprimir(struct triangulo triangulo1)
{
    printf("Coordenadas de los vertices de un triangulo.\n");
    printf("Punto 1, coordenadas (%i, %i).\n", triangulo1.punto1.x, triangulo1.punto1.y);
    printf("Punto 2, coordenadas (%i, %i).\n", triangulo1.punto2.x, triangulo1.punto2.y);
    printf("Punto 3, coordenadas (%i, %i).\n", triangulo1.punto3.x, triangulo1.punto3.y);
}

int main()
{
    struct triangulo triangulo1;
    triangulo1 = cargar();
    getchar();
    printf("\n");
    Imprimir(triangulo1);

    return 0;
}