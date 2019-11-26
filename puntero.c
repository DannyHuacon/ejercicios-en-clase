/******************************************************************************

realice um progreama que permita leer 2 numeros usando funciones .

*******************************************************************************/
#include <stdio.h>
float sumavalor(float,float);
float sumareferencia(float*,float*);
void main()
{
    float num1,num2;
    printf("ingrese el numero 1:");
    scanf("%f",&num1);
    printf("ingrese el numero 2:");
    scanf("%f",&num2);
    printf("la suma paso x valor es %.2f\n",sumavalor(num1,num2));
    printf("el valor de num1 es %.2f y valor de num2 es %.2f\n",num1,num2);
    printf("la suma refencia x valor es %.2f\n",sumareferencia(&num1,&num2));
    printf("el valor de num1 es %.2f y valor de num2 es %.2f\n",num1,num2);
}

float sumavalor(float a,float b)
{
    return a+b;}

float sumareferencia(float *a,float *b)
{
    *a=7;
    *b=10;
    return *a+*b;
}

