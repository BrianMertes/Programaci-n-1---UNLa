#include<stdio.h>
#include<string.h>

int main(){
    //Ingresar por teclado una oración de hasta 200 caracteres. Se sabe que el operador ingresa solo un caracter en blanco entre palabras. Imprimir por pantalla la cantidad de palabras que tiene la oración.
    char oracion[201];
    int palabras=1, i=0;

    printf("Ingrese una oracion de hasta 200 caracteres: ");
    fgets(oracion,201,stdin);

    while (oracion[i]!='\0')
    {
        if (oracion[i]==' ')
        {
            palabras++;
        }
        i++;
    }
    
    printf("\n");
    printf("La cantidad de palabras ingresadas es de %i.", palabras);

    return 0;
}