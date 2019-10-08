/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void main()
{
  int edad;
  char nombre[10];
  printf("ingrese su nombre:");
  //scanf("%s",nombre);
  gets(nombre);
  printf("ingrese su edad:");
  scanf("%d",&edad);
  if(edad>=18)
    printf("%s es mayor de edad",nombre);
  else
    printf("s es menor de edad",nombre);
  
}

