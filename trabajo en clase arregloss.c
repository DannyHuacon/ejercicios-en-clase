#include<stdio.h>
#include<stdlib.h>
#define tam 10
void inicializaArreglo(int[]);
void datosArreglo(int);
void numBuscar(int);
void posNegCeros(int);
void main()
{
	int arreglo[tam]={3,-1,5,9},cantNum,op,cant;
	while(op<=2)
	{
		printf("1.Inicializacion Arreglo\n2.Datos Arreglo\n3.Numero Buscar\n4.Salir\n");
		printf("Ingrese la opcion:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				inicializaArreglo(arreglo);
				getch();
				system("cls");
			break;
			case 2:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				datosArreglo(cantNum);
				getch();
				system("cls");
			break;
			case 3:
				printf("Ingrese la cantidad de elementos del vector:");
				scanf("%d",&cantNum);
				numBuscar(cantNum);
				getch();
				system("cls");
			break;
			case 4:
				printf("Ingrese la cantidad de numeros:");
			    scanf("%d",&cant);
		    	posNegCeros(cant);
			    getch();
		    	system("cls");
		    break;
			default:
				printf("Opcion Invalida\n");
			break;
		}
	}
		
}
void inicializaArreglo(int arreg[tam])
{
	int cont=0;
	while(cont<4)
	{
		printf("Elemento[%d]=%d\n",cont,arreg[cont]);
		cont++;
	}
}

void datosArreglo(int cant)
{
	int cont=0,arreglo[tam];
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Elementos del vector\n");
	cont=0;
	while(cont<cant)
	{
		printf("Elemento[%d]=%d\n",cont,arreglo[cont]);
		cont++;
	}
}

void numBuscar(int cant)
{
	int cont=0,arreglo[tam],buscar,cuenta=0;
	while(cont<cant)
	{
		printf("Ingrese el elemento[%d]:",cont);
		scanf("%d",&arreglo[cont]);
		cont++;
	}
	printf("Ingrese el elemento a buscar\n");
	scanf("%d",&buscar);
	cont=0;
	while(cont<cant)
	{
		if(buscar==arreglo[cont])
			cuenta++;
		cont++;
	}
	printf("El numero %d se repite %d",buscar,cuenta);
}
void posNegCeros(int cant)
{
    int cont=1,arreglo[tam],num,pos=0,neg=0,ceros=0;
    while(cont<cant)
    {
        printf("ingrese un numero[%d]:",cont);
        scanf("%d",&arreglo[cont]);
        if(num>0)
		  	pos++;
		else if(num<0)
			neg++;
		else
		    ceros++;
	cont++;
	}
	printf("Positivos %d\n",pos);	
	printf("Negativos %d\n",neg);	
	printf("ceros %d\n",ceros);	
}

