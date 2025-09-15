#include<stdio.h>
#include<stdlib.h>
//Confeccionar una programa que administre una lista tipo pila (se debe poder insertar, extraer e imprimir los datos de la pila)

struct nodo{
    int dato;
    struct nodo *sig;
};

struct nodo *raiz = NULL; //Apunta al primer nodo de la lista

void insertar(int x)
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = x;

    if (raiz == NULL) //En caso de que el primer nodo de la lista este vacio, el primer nodo (raiz) pasa a ser el nuevo dato ingresado y el nodo siguiente pasa a ser NULL
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    } else //En caso de que el primer nodo de la lista tenga un elemento, ese elemento se convierte en el siguiente en la lista y el nuevo elemento ingresado pasa a estar al comienzo
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void imprimir()
{
    struct nodo *reco = raiz; //comienza siendo el primer valor de la lista (raiz)

    printf("Lista completa: \n");
    while(reco!=NULL)
    {
        printf("%i - ", reco->dato);
        reco = reco->sig;
    }
    printf("\n");
}

int extraer() // Se extrae el primer elemento de la lista
{
    if (raiz!=NULL)
    {
        int informacion = raiz->dato; //Informacion pasa a ser el primer elemento ingresado.
        struct nodo *bor = raiz; // el puntero 'bor' apunta al primer elemento (raiz)
        raiz = raiz->sig; //El primer elemento pasa a ser el segundo elemento ingresado
        free(bor); //Se extrae el primer elemento.
        return informacion; //Se muestra el valor extraido
    } else {
        return -1;
    }
}

void liberar() //Liberamos todos los elemento ingresados en la lista
{
    struct nodo *reco = raiz;
    struct nodo *bor;

    while (reco!=NULL)
    {
        bor = reco; //bor pasa a ser el primer elemento
        reco = reco->sig; //Reco va al siguiente elemento
        free(bor); //Se libera el primer elemento 
    }
}

int main()
{
    insertar(10);
    insertar(15);
    insertar(40);
    imprimir();
    printf("\nExtraemos el primer elemento de la lista: %i\n", extraer());
    imprimir();
    liberar();

    return 0;
}