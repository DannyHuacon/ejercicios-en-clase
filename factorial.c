/******************************************************************************

realizar un programa que calcule el area de um circulo

*******************************************************************************/
#include <stdio.h>
#include <math.h>

float areaCirculo (float);
int factorial(int);
//float areaCirculo(float);
void main()
{
  float radio;
  int num;
  printf ("ingrese el area de circulo\n");
  printf ("ingrese el radio\n");
  scanf ("%f", &radio);
  printf ("el area del circulo es: %.2f", areaCirculo (radio));
  printf ("factorial de un numero");
  printf ("ingrese el numero:");
  scanf ("%d", &num);
    printf("el factorial de un numero es: %d\n",factorial(num));
}

float
areaCirculo (float radio)
{
  float area = 0, pi = 3.1416;
  area = pi * pow (radio, 2);
  return area;
}

int
factorial (int num)
{
  int fact = 1, cont = 1; 
  while(cont<=num)
  {
      fact=fact*cont;
      cont++;
  }
  return fact;
    

}

