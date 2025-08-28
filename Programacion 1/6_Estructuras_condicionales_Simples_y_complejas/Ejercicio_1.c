#include<stdio.h>

int main(){
    //Ingresar el sueldo de una persona, si supera los 3000 pesos mostrar un mensaje en pantalla indicando que debe abonar impuestos
    float sueldo;

    printf("Ingrese su sueldo: ");
    scanf("%f", &sueldo);

    if (sueldo>3000)
    {
        printf("\nSu sueldo supera los $3000, por lo tanto debe abonar impuestos.");
    }
    

    return 0;
}