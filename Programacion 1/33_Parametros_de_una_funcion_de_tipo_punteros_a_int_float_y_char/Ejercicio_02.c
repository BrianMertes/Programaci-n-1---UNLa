#include<stdio.h>
//Elaborar una función que se le pase la dirección de una variable entera e incremente en 1 lo apuntado por dicha variable.

void Incrementar(int *pe)
{
    *pe=*pe+1;
}

int main()
{
    int valor=0;

    printf("%i\n",valor);
    Incrementar(&valor);
    printf("%i\n",valor);
    Incrementar(&valor);
    printf("%i\n",valor);
    Incrementar(&valor);

    return 0;
}