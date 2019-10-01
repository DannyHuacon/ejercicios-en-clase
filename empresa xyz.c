/******************************************************************************
ingrese nombre, cedula, n.de productos repetitivo(descripcipn cantidad precio)
salida empresa xyz cliente cedula descripcion cantidad preciounitario precio total 
*******************************************************************************/
#include <stdio.h>


void main()
{
    char nombre[10],desP1[10],desP2[10];
    int cedula;
    float cantP1,cantP2,precioP1,precioP2,subtotal1=0,iva,total=0,pventa1,pventa2;
    printf("ingrese el nombre del cliente:");
    scanf("%s",&nombre);
    printf("ingrese la cedula");
    scanf("%d",&cedula);
    printf("datos del Producto1\n");
    printf("ingrese la descripcion:");
    scanf("%s",&desP1);
    printf("ingrese la cantidad:");
    scanf("%f",&cantP1);
    printf("ingrese el precio:");
    scanf("%f",&precioP1);
    
    printf("datos del Producto2\n");
    printf("ingrese la descripcion:");
    scanf("%s",&desP2);
    printf("ingrese la cantidad:");
    scanf("%f",&cantP2);
    printf("ingrese el precio:");
    scanf("%f",&precioP2);
    
    pventa1=cantP1*precioP1;
    pventa2=cantP2*precioP2;
    
    subtotal1=pventa1+pventa2;
    
    iva=subtotal1*0.12;
    
    total=subtotal1+iva;
    
    printf("************empresa xyz***********\n");
    printf("cliente: %s\n",nombre);
    printf("cedula: %d\n",cedula);
    printf("descripcio \t cantidad \t precio \t precio de venta \n");
    printf("%s\t\t %.2f \t\t %.2f \t\t %.2f \n",desP1,cantP1,precioP1,pventa1);
    printf("%s\t\t %.2f \t\t %.2f \t\t %.2f \n\n\n",desP2,cantP2,precioP2,pventa2);
    
    printf("\t \t subtotal1: %.2f \n", subtotal1);
    printf("\t \t subtotal1: %.2f \n",iva);
    printf("\t \t subtotal1: %.2f \n", total);
    
    

}
