#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Se debe desarrollar un programa que tenga las siguientes responsabilidades :
//- Ingresar una fórmula que contenga paréntesis, corchetes y llaves.
//- Validar que los ( ) [] y {} estén correctamente balanceados. 

struct nodo{
    char dato;
    struct nodo *sig;
};
struct nodo *raiz=NULL; //Primer nodo de la pila

void insertar(char simbolo) //Insertar nodo al comienzo de la pila
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->dato = simbolo;

    if (raiz==NULL) // No hay nodos en la pila
    {
        raiz = nuevo; //comienza con el nodo ingresado
        nuevo->sig = NULL; //El siguiente nodo es nulo
    } else // Hay nodos en la pila
    { 
        nuevo->sig = raiz; //El siguiente nudo pasa a ser el ingresado previamente
        raiz = nuevo; // El primer nodo pasa a ser el recien ingresado
    }
}
int extraer() //Se extrae el primer nodo de la pila
{
    if (raiz!=NULL)
    {
        char informacion = raiz->dato;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    } else
    {
        return -1;
    }
}
void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;

    while (reco!=NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}
int vacia()
{
    if (raiz==NULL)
    {
        return 1;
    } else {
        return 0;
    }
}
void cargarFormula(char *formula) // Ingresamos la formula
{
    printf("Ingrese la formula: ");
    fgets(formula,100,stdin); 
}
int verificarBalanceada(char *formula)
{
    int i;
    int largoFormula = strlen(formula);
    for (i = 0; i < largoFormula; i++)
    {
        if (formula[i]=='(' || formula[i]=='[' || formula[i]=='{')
        {
            insertar(formula[i]);
        } else{
            if (formula[i]==')')
            {
                if (extraer()!='(')
                {
                    return 0;
                }
            } else if (formula[i]==']')
            {
                if (extraer()!='[')
                {
                    return 0;
                }
            } else if (formula[i]=='}')
            {
                if (extraer()!='{')
                {
                    return 0;
                }
            }
        }
        
    }
    if (vacia())
    {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    char formula[100];
    cargarFormula(formula);
    if (verificarBalanceada(formula))
    {
        printf("La formula esta correctamente balanceada");
    } else {
        printf("La formula no esta correctamente balanceada");
    }

    liberar();

    return 0;
}