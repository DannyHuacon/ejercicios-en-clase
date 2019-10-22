/******************************************************************************
ejercicio 3 del deber 
Dada un numero entero menor o igual a 9 mostrar el siguiente diagrama: Ejemplo N = 5

1

12

123

1234

12345



*******************************************************************************/
#include <stdio.h>

void main()
{
    int n,c,var=0;
    
    printf("ingrese cuantos numeros a imprimir:\t");
    scanf("%d",&n);
    for(c=1;c<=n;c++){
        var=(var*10)+c;
        printf("%d\n",var);
    }
}

