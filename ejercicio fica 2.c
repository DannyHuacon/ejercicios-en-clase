/******************************************************************************
ejercico en clase #2
realizar un programa que ingrese un grupo n numeros y realizarla suma de sus positivos 


*******************************************************************************/
#include <stdio.h>

void main()
{
    int s=0,num=1;
    
        while(num!=0)
        {
        printf("ingrese numero:");
        scanf("%d",&num);
        if(num>0)
            s=s+num;
        
            
        }
        
    printf("la suma de los positivos es %d",s);

}
