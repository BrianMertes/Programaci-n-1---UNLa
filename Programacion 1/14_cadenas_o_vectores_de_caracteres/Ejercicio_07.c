#include<stdio.h>

int main(){
    //Permitir el ingreso de una palabra en minúsculas por teclado. Cambiar todas las vocales por un caracter de guión: '-'.
    char palabra[31];
    int i=0;

    printf("Ingrese una palabra: ");
    fgets(palabra, 31, stdin);

    while (palabra[i]!='\0')
    {
        if (palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u')
        {
            palabra[i] = '-';
        }
        i++;
    }
    
    printf("%s", palabra);

    return 0;
}