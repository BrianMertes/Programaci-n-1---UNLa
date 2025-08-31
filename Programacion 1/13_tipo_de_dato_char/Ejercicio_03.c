#include<stdio.h>

int main(){
    //Mostrar el abecedario de la 'A' a la 'Z' primero en mayúsculas y luego en minúsculas. Utilizar una variable de tipo char dentro de un for.
    char letra;

    for (letra='A'; letra<='Z'; letra++)
    {
        printf("%c - ", letra);
    }
    
    return 0;
}