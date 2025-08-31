#include<stdio.h>
#include<string.h>

int main(){
    //Ingresar por teclado una palabra en minúsculas. Mostrar por pantalla la cantidad de vocales que tienen dicha palabra.
    char palabra[31];
    int i, vocales=0;

    printf("Ingrese una palabra en minusculas: ");
    fgets(palabra,31,stdin);

    for (i=1; i<=31; i++)
    {
        if (palabra[i]=='a' || palabra[i]=='e' || palabra[i]=='i' || palabra[i]=='o' || palabra[i]=='u')
        {
            vocales++;
        }
    }
    
    printf("La palabra ingresada tiene %i vocales.", vocales);

    return 0;
}