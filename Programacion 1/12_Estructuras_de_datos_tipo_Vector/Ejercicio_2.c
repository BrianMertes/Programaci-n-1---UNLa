#include<stdio.h>

int main(){
    //Definir un vector de 5 componentes de tipo float que representen las alturas de 5 personas.
    //Obtener el promedio de las mismas. Contar cuántas personas son más altas que el promedio y cuántas más bajas.
    float alturas[5];
    float promedio=0;
    int altas=0, bajas=0, i;

    for (i=0; i<5; i++)
    {
        printf("Ingrese al altura de la persona %i: ", i+1);
        scanf("%f", &alturas[i]);
        promedio+=alturas[i];
    }

    promedio = promedio / 5;
    printf("\n");
    printf("El promedio de estatura ingresada es de %f cm.", promedio);

    for (i = 0; i<5; i++)
    {
        if (alturas[i]>promedio)
        {
            altas++;
        } else {
            bajas++;
        }
    }
    
    printf("\n");
    printf("La cantidad de personas con una estatura menor al promedio es de: %i", bajas);
    printf("\n");
    printf("La cantidad de personas con una estatura mayor al promedio es de: %i", altas);

    return 0;
}