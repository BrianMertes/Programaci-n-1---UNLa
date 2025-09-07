//Se tienen el siguiente programa:
//Indicar que valor se imprime en cada llamada a printf.

#include<stdio.h>
#include<string.h>

int main()
{
    char c1='A';
    char c2='B';
    char *pc;
    pc=&c1;
    printf("%c\n",c1); //se imprime: 'A'
    *pc='a';
    printf("%c\n",c1); //se imprime: 'a'
    c1='Z';
    printf("%c\n",*pc); //se imprime: 'Z'
    pc=&c2;
    printf("%c\n",*pc); //se imprime: 'B'
    getchar();
    return 0;
}

