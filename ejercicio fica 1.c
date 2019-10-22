/******************************************************************************
ejercico en clase #1
realizar un programa que ingrese n numeros y realizarla suma de sus positivos 


*******************************************************************************/
#include <stdio.h>

void main()
{
    int cant,s,cont=0,num;
    printf("ingrese cantidad de numeros:");
    scanf("%d",&cant);
    while(cont<cant)
    {
        printf("ingrese numero:");
        scanf("%d",&num);
        if(num>0)
            s=s+num;
        cont++;
            
    }
    printf("la suma de los positivos es %d",s);

}
