#include<stdio.h>

int main(){
    //Realizar un programa que lea los lados de n triángulos, e informar:
    //a) De cada uno de ellos, qué tipo de triángulo es: equilátero (tres lados iguales), isósceles (dos lados iguales), o escaleno (ningún lado igual)
    //b) Cantidad de triángulos de cada tipo.
    //c) Tipo de triángulo que posee menor cantidad.
    int n, lado1, lado2, lado3, i, equilatero=0, isosceles=0, escaleno=0;

    printf("¿De cuantos triangulos se van a ingresar los lados? ");
    scanf("%i", &n);

    for (i=1; i<=n; i++)
    {
        printf("Ingrese el primer lado del triangulo %i: ", i);
        scanf("%i", &lado1);
        printf("Ingrese el segundo lado del triangulo %i: ", i);
        scanf("%i", &lado2);
        printf("Ingrese el tercer lado del triangulo %i: ", i);
        scanf("%i", &lado3);

        if (lado1==lado2 && lado1==lado3)
        {
            equilatero++;
            printf("El triangulo ingresado es equilatero.");
            printf("\n");
            printf("\n");
        } else if (lado1==lado2 || lado1 ==lado3 || lado2==lado3)
        {
            isosceles++;
            printf("El triangulo ingresado es isósceles.");
            printf("\n");
            printf("\n");
        } else{
            escaleno++;
            printf("El triangulo ingresado es escaleno.");
            printf("\n");
            printf("\n");
        }
    }

    printf("\n");
    printf("La cantidad de triangulos equilateros fue de %i triangulos.", equilatero);
    printf("\n");
    printf("La cantidad de triangulos isósceles fue de %i triangulos.", isosceles);
    printf("\n");
    printf("La cantidad de triangulos escalenos fue de %i triangulos.", escaleno);
    printf("\n");
    printf("\n");

    if (equilatero<escaleno && equilatero<isosceles)
    {
        printf("El tipo de triangulo menos ingresado fue: equilatero.");
    } else if (isosceles<equilatero && isosceles<escaleno)
    {
        printf("El tipo de triangulo menos ingresado fue: isósceles.");
    } else {
        printf("El tipo de triangulo menos ingresado fue: escaleno.");
    }
    
    return 0;
}