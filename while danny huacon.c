/******************************************************************************

determinar el factorial de un numero
*******************************************************************************/
#include <stdio.h>

void main()
{
  int cont=1,numero,resul=1;
  printf("ingrese un numero:");
  scanf("%d",&numero);
  while(cont<=numero)
  {
     resul=resul*cont;
     cont++;
  }
  printf("el factorial del numero es %d\n",resul);
  
}
