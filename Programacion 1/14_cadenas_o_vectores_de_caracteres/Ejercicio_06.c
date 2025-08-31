#include<stdio.h>

int main(){
    //Confeccionar un programa que permita ingresar una palabra y luego muestre un mensaje si la misma comienza con la vocal 'A' o 'a'.
    char palabra[31];

    printf("Ingrese una palabra: ");
    fgets(palabra,31,stdin);

    if (palabra[0]=='a' || palabra[0]=='A')
    {
        printf("\n");
        printf("La palabra ingresada comienza con a o A.");
    }
    
    

    return 0;
}