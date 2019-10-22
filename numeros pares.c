/******************************************************************************
de n numeros positivos  verificar si es par o impar
*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1,cantnum,num;
    printf("ingrese la cantidad de numeros");
    scanf("%d",&cantnum);
    while(cont<=cantnum)
    {
        printf("ingrese el numero");
        scanf("%d",&num);
        while(num<0)
        {
             printf("ingrese el numero positivo");
             scanf("%d",&num);
        }
        if(num%2==0)
            printf("par\n");
        else
            printf("impar\n");
        cont++;
          
            
        }
       
    }



    