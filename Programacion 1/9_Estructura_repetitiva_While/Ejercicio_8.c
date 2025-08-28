#include<stdio.h>

int main() {
    //Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)
    int x=1, serie=11;

    while (x<=25)
    {
        printf("%i - ", serie);
        serie=serie+11;
        x++;
    }
    

    return 0;
}