#include<stdio.h>

int main(){
    //Se desea guardar los sueldos de 5 operarios.
    //Según lo conocido deberíamos definir 5 variables si queremos tener en un cierto momento los 5 sueldos almacenados en memoria.
    //Empleando un vector solo se requiere definir un único nombre y accedemos a cada elemento por medio del subíndice.
    int sueldos[5], i;

    for (i=0; i<5; i++)
    {
        printf("Ingrese el sueldo del operario %i: ", i+1);
        scanf("%i", &sueldos[i]);
    }

    printf("\n");

    for (i=0; i<5; i++)
    {
        printf("sueldo del operario %i: $%i.", i+1, sueldos[i]);
        printf("\n");
    }

    return 0;
}