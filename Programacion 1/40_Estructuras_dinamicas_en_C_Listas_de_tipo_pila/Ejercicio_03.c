#include<stdio.h>
#include<stdlib.h>
//Agregar otra función al programa desarrollado para administrar una pila que retorne la información del primer nodo de la Pila sin borrarlo.

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
        printf("%i | ", reco->dato);
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

int contarNodos() //vemos la cantidad de nodos en la lista
{
    struct nodo *reco = raiz;
    int cantidad=0;

    while (reco!=NULL)
    {
        cantidad++;
        reco = reco->sig;
    }
    return cantidad;
}

int vacia() //revisamos si la lista esta vacia
{
    if (raiz==NULL)
    {
        return 1; // Se retorna 1 si es verdadero (esta vacía)
    } else {
        return 0; // Se retorna 0 si es falso (no esta vacía)
    }
}

int retornarNodo() //nos muestra el primer nodo sin borrar ninguno
{   
    if (raiz!=NULL)
    {
        return raiz->dato; 
    } else {
        return -1;
    }
}

int main()
{
    insertar(10);
    insertar(15);
    insertar(40);
    printf("La cantidad de nodos en la lista es de %i nodos\n", contarNodos());
    imprimir();
    printf("El primer nodo de la lista es: %i\n", retornarNodo());
    while (vacia()==0) //Mientras la lista no este vacía se extraen los elementos dentro
    {
        printf("\nExtraemos el primer elemento de la lista: %i\n", extraer());
        imprimir();
    }
    liberar();

    return 0;
}