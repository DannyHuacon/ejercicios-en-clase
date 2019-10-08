/******************************************************************************

Realizar un programa que permita convertir de grados centigrados a fahrenheit y viceversa 

*******************************************************************************/
#include <stdio.h>

void main()
{
    float cent,fahr,gradoscent=0,gradosfahr=0;
    int op;
    printf("menu principal\n1.grados centigrados a fahrenheit\n2.grados fahrenheit a centigrados\n");
    printf("escoja una opcion:");
    scanf("%d",&op);
    if(op==1)
    {
        printf("ingrese los grados centigrados:");
        scanf("%f",&cent);
        gradosfahr=((cent*9)/5)+32;
        printf("Grados fahrenheit:%.2f",gradosfahr);
    }
    else
    {
        printf("ingrese los grados fahrenheit:");
        scanf("%f",&fahr);
        gradoscent=((fahr-32)*5)/9;
        printf("Grados centigrados:%.2f\n",gradoscent);
         
    
    }
   
    


    
}

