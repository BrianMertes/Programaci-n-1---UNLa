//Indicar que valor se imprime en cada llamada a printf.Se tienen el siguiente programa:
//Indicar que valor se imprime en cada llamada a printf.
#include<stdio.h>
#include<string.h>

int main()
{
    int f;
    int *pe;
    pe=&f;
    for(*pe=1;*pe<=10;*pe=*pe+1)
    {
        printf("%i\n",f); //se imprime: 1-10
    }

    return 0;
}

