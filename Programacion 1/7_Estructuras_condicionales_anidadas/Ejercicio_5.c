#include<stdio.h>

int main(){
    //Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente. Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas que ha obtenido, y sabiendo que:
	//Nivel máximo:	Porcentaje>=90%.
	//Nivel medio:	Porcentaje>=75% y <90%.
	//Nivel regular:	Porcentaje>=50% y <75%.
	//Fuera de nivel:	Porcentaje<50%.
    int cant_preguntas, cant_correctas, porcentaje;

    printf("Ingrese la cantidad de preguntas realizadas: ");
    scanf("%i", &cant_preguntas);
    printf("Ingrese la cantidad de preguntas respondidas correctamente: ");
    scanf("%i", &cant_correctas);
    porcentaje = (cant_correctas * 100) / cant_preguntas;

    printf("\nEl porcentaje de respuestas realizada sobre el total fue de %i. \n", porcentaje);

    if (porcentaje>=90)
    {
        printf("Nivel: maximo");
    } else if (porcentaje>=75)
    {
        printf("Nivel: medio");
    } else if (porcentaje>=50)
    {
        printf("Nivel: regular");
    } else if (porcentaje<50)
    {
        printf("Fuera de nivel");
    }
    
    
    
    

    return 0;
}