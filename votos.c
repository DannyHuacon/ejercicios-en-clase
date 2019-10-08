/******************************************************************************

 Los organizadores de un acto electoral solicitaron realizar un programa para manejar
 el conteo de votos. En la elección hay cinco candidatos, los cuales se representan 
 con los valores comprendidos entre 1 y 5. El programa debe obtener el número de votos
 de cada candidato y el porcentaje que obtuvo respecto al total de los votantes. 
 Se ingresa los votos  de manera desordenada, el final de ingreso de los votos se 
 representa por un cero.

Ejemplo

 INGRESO DE VOTOS:

2 5 5 4 3 5 1 2 4 3 1 2 4 5 0

2 representa un voto para el candidato2

5 representa un voto para el candidato5

4 representa un voto para el candidato4
*******************************************************************************/
#include <stdio.h>

void main()
{
    int voto1=0,voto2=0,voto3=0,voto4=0,voto5=0,voto=0,totalvotos=0;
    float porcentaje,porcv1=0,porcv2=0,porcv3=0,porcv4=0,porcv5=0;
    printf("ingrese su voto:");
    scanf("%d",&voto);
    if(voto==1)
        voto1++;
    else if(voto==2)
        voto2++;
    else if(voto==3)
        voto3++;
    else if(voto==4)
        voto4++;
    else if(voto==5)
        voto5++;
    totalvotos=voto1+voto2+voto3+voto4+voto5;
    porcv1=(voto1/totalvotos)*100;
    porcv2=(voto2/totalvotos)*100;
    porcv3=(voto3/totalvotos)*100;
    porcv4=(voto4/totalvotos)*100;
    porcv5=(voto5/totalvotos)*100;
    printf("votos candidato1 %d tiene un porcentaje %.2f\n",voto1,porcv1);
    printf("votos candidato2 %d tiene un porcentaje %.2f\n",voto2,porcv2);
    printf("votos candidato3 %d tiene un porcentaje %.2f\n",voto3,porcv3);
    printf("votos candidato4 %d tiene un porcentaje %.2f\n",voto4,porcv4);
    printf("votos candidato5 %d tiene un porcentaje %.2f\n",voto5,porcv5);
    
        
    

}
