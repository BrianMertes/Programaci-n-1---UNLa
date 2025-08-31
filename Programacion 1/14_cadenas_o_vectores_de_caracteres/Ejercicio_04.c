#include<stdio.h>
#include<string.h>

int main(){
    //Ingresar una palabra por teclado. Mostrar por pantalla la palabra y la cantidad de caracteres que tiene dicha palabra.
    char palabra[31];
    int caracteres=0;

    printf("Ingrese una palabra: ");
    fgets(palabra, 31, stdin);

    while (palabra[caracteres]!='\0')
    {
        caracteres++;
    }
    
    printf("La cantidad de caracteres en la palabra ingresada es de: %i caracteres.", caracteres-1);

    return 0;
}