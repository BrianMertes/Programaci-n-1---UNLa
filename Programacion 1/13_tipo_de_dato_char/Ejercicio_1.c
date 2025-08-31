#include<stdio.h>

int main(){
    //Definir tres variables de tipo char y cargar dos por asignación y la tercera por teclado. Imprimir los valores de las mismas.
    char a='a', b='b', c;

    printf("Ingrese una letra: ");
    scanf("%c", &c);

    printf("%c, %c, %c", a, b, c);

    return 0;
}