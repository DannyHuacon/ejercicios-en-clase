/******************************************************************************

Se desea calcular el salario neto semanal de un trabajador en función del número de horas trabajadas y la tasa de impuestos:
Las primeras 35 horas de pagan a tarifa normal.
Las horas que pasen de 35 se pagan a 1.5 veces la tarifa normal
Las tasas de impuestos son:
1. Los primeros 1000 dólares son libres de impuestos.
2. Los siguientes 500 dólares tienen un 25% de impuestos.
3. Los restantes, un 45% de impuestos.
La tarifa horaria es de 40 dólares
Se desea escribir el SALARIO BRUTO(salario antes de impuesto), TASAS DE IMPUESTOS , Y SALARIO NETO(salario después de impuestos).

*******************************************************************************/
#include <stdio.h>

void main()
{
int horas;    
float t1=0,t2=0,t=0,sb=0,sn=0;
printf("ingrese lass horas de trabajo:");
scanf("%i",&horas);
if(horas<=35){
    sb=horas*40;}
    else{
    sb=(35*40)+((horas-35)*40*1.5);}
if(sb>=1000){
t1=(sb-1000)*0.25;}
if(sb>=1500){
    t2=(sb-1500)*.45;}
t=t1+t2;
sb=sn-t;

printf("horas trabajadas:%i\n",horas);
printf("salario bruto:%.2f\n",sb);
printf("impuestos:%i\n",t);
printf("salario neto:%i\n",sn);




}


