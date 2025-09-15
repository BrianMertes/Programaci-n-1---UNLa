#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
//Desarrollar un programa para la simulación de un cajero automático.
//Se cuenta con la siguiente información:
//- Llegan clientes a la puerta del cajero cada 2 o 3 minutos.
//- Cada cliente tarda entre 2 y 4 minutos para ser atendido.

//Obtener la siguiente información:
//1 - Cantidad de clientes que se atienden en 10 horas.
//2 - Cantidad de clientes que hay en cola después de 10 horas.
//3 - Hora de llegada del primer cliente que no es atendido luego de 10 horas (es decir la persona que está primera en la cola cuando se cumplen 10 horas)

struct nodo
{
    int info;
    struct nodo *sig;
};

struct nodo *raiz=NULL;
struct nodo *fondo=NULL;

int vacia() //Revisamos que la lista este vacia
{
    if (raiz==NULL)
    {
        return 1;
    } else {
        return 0;
    }
}
void insertar(int x) //Insertamos un nodo de tipo entero a la lista
{
    struct nodo *nuevo;
    nuevo = malloc(sizeof(struct nodo));
    nuevo->info = x;
    nuevo->sig = NULL;

    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    } else {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}
int extraer() //Extraemos un elemento de la lista
{
    if (!vacia())
    {
        int informacion = raiz->info;
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
void liberar() // liberamos todos los elementos ingresados en la lista
{
    struct nodo *bor;
    struct nodo *reco = raiz;

    while (reco!=NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}
int cantidad() // Mostramos la cantidad de clientes atendidos
{
    struct nodo *reco = raiz;
    int cant=0;
    while (reco!=NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}
void simulacion() //Simulamos las 10 horas de atención
{
    srand(time(NULL)); // Genera una semilla con el tiempo actual, si no lo hacemos, la simulacion siempre dara iguales resultados
    int estado=0; //0 = Cajero libre | 1 = Cajero ocupado
    int llegada = rand() % 2 + 2; // Cliente llega en 2 o 3 minutos
    int salida = -1; // Tiempo de salida actual del cliente siendo atendido (inicia sin nadie)
    int cantAtendidas = 0; //Contador de clientes atendidos
    int minuto;

    for (minuto = 0; minuto < 600; minuto++) //Simulando 10 horas
    {
        if (llegada == minuto) 
        {
            if (estado == 0)
            {
                estado = 1;
                salida = minuto + 2 + rand() % 3; // Cliente sale dentro de 2 a 4 minutos
            }
            else
            {
                insertar(minuto);
            }
            llegada = minuto + 2 + rand() % 2; //Simulamos la llegada
        } 
        if (salida == minuto)
        {
            estado = 0;
            cantAtendidas++;
            if (!vacia())
            {
                extraer();
                estado = 1;
                salida = minuto + 2 + rand() % 3;
            }
        }
    }
    printf("Atendidos:%i\n" ,cantAtendidas);
    printf("En cola:%i\n",cantidad());
    printf("Minuto llegada:%i",extraer()); //Primer cliente no atendido pasadas las 10hs (Primer cliente en cola)
}

int main()
{
    simulacion();
    liberar();
    return 0;
}
