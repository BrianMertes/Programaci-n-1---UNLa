#include<stdio.h>

int main(){
    //Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las personas.
    float altura, promedio=0;
    int n, x=1;

    printf("Ingrese la cantidad de alturas que vas a ingresar: ");
    scanf("%i", &n);

    while (x<=n)
    {
        printf("Ingrese la altura de la persona %i: ", x);
        scanf("%f", &altura);

        promedio = promedio + altura;
        x++;
    }

    promedio = promedio / n;

    printf("\n");
    printf("El promedio de las alturas ingresadas es de %f m.", promedio);

    return 0;
}