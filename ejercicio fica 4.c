/******************************************************************************

realice un programa que permita sacar el promedio de n est con n notas 

*******************************************************************************/
#include <stdio.h>

void main()
{
    int n=1,s=0,ce=0,e=1; 
    
    while(e>0){
        while(n>0){
          printf("ingrese nota:");
          scanf("%d",&n);
          s=s+n;
          ce++;
         
        }
    printf("el promedio de las notas es:\t %f\n",(float)s/((float)ce-1));
    do{
        printf("desea promediar otro estudiante: \n 0.no \n 1.si\n");
        scanf("%d",&e);
        }while(e!=1&&e!=0);
        if (e==1){
            n=1;
            ce=0;
            s=0;
            }
    }
        
    
    
    

}
