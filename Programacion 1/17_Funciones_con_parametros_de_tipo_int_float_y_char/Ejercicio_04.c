#include<stdio.h>
//Desarrollar una función que reciba como parámetro un caracter. Si llega una 'h' mostrar por pantalla el mensaje "hombre", si llega una 'm' mostrar el mensaje "mujer".
//Llamar desde la función main pasando una vez una 'h' y otra vez una 'm'.

void genero(char sexo)
{
    if (sexo=='h')
    {
        printf("\n");
        printf("Hombre.");
    } else if (sexo=='m')
    {
        printf("\n");
        printf("Mujer.");
    }
}
void separacion()
{
    printf("\n");
    printf("**********************************************");
    printf("\n");
}

int main()
{
    char sexo;
    printf("Ingrese un caracter segun su género [h/m]: ");
    scanf(" %c", &sexo);
    genero(sexo);
    separacion();
    printf("Ingrese un caracter segun su género [h/m]: ");
    scanf(" %c", &sexo);
    genero(sexo);

    return 0;
}