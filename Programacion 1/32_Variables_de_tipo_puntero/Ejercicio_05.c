//Se tienen el siguiente programa:
//Indicar que valor se imprime en la llamada a printf.
#include <stdio.h>
#include<string.h>

int main()
{
  float z1,z2;
  float *pf;
  pf=&z1;
  *pf=10.2;
  pf=&z2;
  *pf=20.90;
  printf("%0.2f %0.2f",z1,z2); // Se imprime 10.2 20.90

  return 0;
}

