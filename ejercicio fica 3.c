/******************************************************************************

realice un programa que permita sacar el promedio de un est con n notas 

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=0,cant,prom,promt=0;
    
    
    printf("ingrese la cantidad de notas:");
    scanf("%d",&cant);
    while(cont<cant)
    {
         printf("ingrese nota:");
         scanf("%d",&prom);
         promt=prom+promt;
         cont++;
    }
    printf("el promedio de las notas es:\t %f",(float)promt/(float)cont);

}
