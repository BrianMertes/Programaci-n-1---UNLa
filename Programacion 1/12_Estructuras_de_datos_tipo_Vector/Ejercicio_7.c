#include<stdio.h>

int main(){
    //Cargar un vector de 10 elementos y verificar posteriormente si el mismo está ordenado de menor a mayor.
    int vector[10];
    int i, verificar=0;

    for (i=0; i<10; i++)
    {
        printf("Ingrese un valor en el indice %i: ", i);
        scanf("%i", &vector[i]);
    }

    for ( i=0; i<9; i++)
    {
        if (verificar==0)
        {
            if (vector[i]<vector[i+1])
            {
                verificar = 0;
            } else {
                verificar = 1;
            }
        } 
    }
    
    if (verificar==0)
    {
        printf("El vector esta ordenado de menor a mayor.");
    } else {
        printf("El vector no esta ordenado de menor a mayor.");
    }

    return 0;
}