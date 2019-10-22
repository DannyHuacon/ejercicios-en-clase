/******************************************************************************

realizar un programa que permita generar n numeros enteros.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,tabla,lim,mult=0;
    printf("ingrese la tabla:");
    scanf("%d",&tabla);
    printf("ingrese el limite:");
    scanf("%d",&lim);
   
    do
    {
        mult=tabla*cont;
        printf("%dx%d=%d\n",tabla,cont,mult);
        cont++;
    } while(cont<=lim);
        



}

