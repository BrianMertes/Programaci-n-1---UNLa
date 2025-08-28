#include<stdio.h>

int main(){
    //Confeccionar un programa que lea n pares de datos, cada par de datos corresponde a la medida de la base y la altura de un triángulo. El programa deberá informar:
    //a) De cada triángulo la medida de su base, su altura y su superficie.
    //b) La cantidad de triángulos cuya superficie es mayor a 12.
    int n, base, altura, superficie,superficie_mayor_a_12=0, i;

    printf("¿Cuantos pares de valores se van a ingresar? ");
    scanf("%i", &n);

    for (i=1; i<=n; i++)
    {
        printf("Ingrese la base y la superficie del triangulo %i: ", i);
        printf("\n");
        printf("Base: ");
        scanf("%i", &base);
        printf("altura: ");
        scanf("%i", &altura);

        superficie = (base * altura) / 2;

        printf("La superficie del triangulo ingresado es de: %i.", superficie);
        printf("\n");
        printf("\n");

        if (superficie>12)
        {
            superficie_mayor_a_12++;
        }
    }
    
    printf("La cantidad de triangulos con superficie mayor a 12 fue de %i", superficie_mayor_a_12);

    return 0;
}