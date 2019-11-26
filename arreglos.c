//******************************************************************************
//Inicializar Arreglos en funciones
//*******************************************************************************/
#include <stdio.h>
#define tam 10
void InicializarArreglo (int[]);
void DatosVector(int);
void numbuscar(int)
void main()
{
    int arreglo [tam]={2,4,5,-1},cantNum,opcion;
    while(opcion<=2)
    {
        printf("1.Inicializacion Arreglos\n2.Datos Vector\n3.buscar datos\n4.Salir\n");
        scanf("%i",&opcion);
        switch(opcion)
        {
        case 1:
            InicializarArreglo (arreglo);
        break;
        case 2:
            printf ("Ingrese la cantidad de elementos del vector: ");
            scanf ("%i",&cantNum);
            DatosVector(cantNum);
        break;
        case 3;
            printf ("Ingrese la cantidad de elementos del vector: ");
            scanf ("%i",&cantNum);
            numbuscar(cantNum);
        }
    }
}
void InicializarArreglo (int arreglo[10])
{
    int cont=0;
    while(cont<4)
    {
        printf ("arreglo[%d]=%d\n",cont,arreglo[cont]);
        cont++;
    }
}
void DatosVector (int cantNum)
{
    int cont=0, arreglo[tam];
    while (cont<cantNum)
    {
        printf ("Ingrese el elemento[%d]:",cont);
        scanf("%i",&arreglo[cont]);
        cont++;
    }
    printf("Elementos del vector\n");
    cont=1;
    while (cont<cantNum)
    {
        printf ("Elemento [%i]=%i\n",cont,arreglo[cont]);
        cont++;
    }
}
