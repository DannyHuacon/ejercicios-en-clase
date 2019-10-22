/******************************************************************************
de n numeros positivos  verificar si es par o impar
*******************************************************************************/
#include <stdio.h>

void main()
{
    int num=1;
    
    while(num>0)
    {
        printf("ingrese el numero");
        scanf("%d",&num);
        while(num<0)
        {
             printf("ingrese el numero positivo");
             scanf("%d",&num);
        }
        if(num%2==0&&num!=0)
            printf("par\n");
        else(num%2==1&&num!=0);
            printf("impar\n");
     
            
        }
       
    }
