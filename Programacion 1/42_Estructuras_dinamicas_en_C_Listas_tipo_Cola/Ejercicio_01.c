#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Confeccionaremos un programa que permita administrar una lista tipo cola. Desarrollaremos las funciones de insertar, extraer, vacia, imprimir y liberar.

struct nodo {
    int dato;
    struct nodo *sig;
};
struct nodo *raiz=NULL;
struct nodo *fondo=NULL;

int vacia() //Vemos si la lista esta vacia
{
    if (raiz==NULL)
    {
        return 1;
    } else {
        return 0;
    }
}
void insertar(int x) //Insertamos un nuevo nodo a la lista
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = x;
    nuevo->sig = NULL;
    
    if (vacia())
    {
        raiz = nuevo; //raíz solo sera el primer nodo
        fondo = nuevo; //fondo es el primer nodo ya que es el unico nodo que hay
    } else {
        fondo->sig = nuevo; //Ahora el fondo apunta al nuevo nodo
        fondo = nuevo; // fondo pasa a tener el valor de 'nuevo'
    }
}
int extraer() //Extraemos el primer elemento de la lista
{
    if (!vacia())
    {
        int informacion = raiz->dato;
        struct nodo *bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        } else {
            raiz = raiz->sig;
        }
        free(bor);
        return informacion;
    } else {
        return -1;
    }
}
void imprimir()
{
    struct nodo *reco = raiz;
    printf("Lista completa\n");
    while (reco!=NULL)
    {
        printf("%i - ", reco->dato);
        reco = reco->sig;
    }
    printf("\n");   
}
void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;

    if (raiz!=NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}

int main()
{
    insertar(10);
    insertar(20);
    insertar(10);

    imprimir();
    printf("Extraemos el primer elemento: %i\n", extraer());
    imprimir();

    liberar();
    return 0;
}