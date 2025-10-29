#include <iostream>
using namespace std;

/**Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el
 vector hay elementos repetidos y generar otro vector con los elementos
 repetidos reemplazados por ceros.
 Ejemplo Vector 1: [8, 20, 20,-7, 15, 12, 15,-5, 11, 18]
 Ejemplo Vector 2: [8, 0, 0,-7, 0, 12, 0,-5, 11, 18]*/

void cargarVector(int tamanio, int vec[]);
int cantRepetidos(int tamanio,int numeroABuscar, int vec[]);

int main()
{
    int const TAMANIO=5;
    int vecOriginal[TAMANIO], vecSinRepetidos[TAMANIO] = {}, cant;

    cargarVector(TAMANIO, vecOriginal);

    for(int x=0; x<TAMANIO; x++)
    {
        cant = cantRepetidos(TAMANIO, vecOriginal[x], vecOriginal);
        if(cant<2)
        {
            vecSinRepetidos[x]=vecOriginal[x];
        }
//        if(cant>1)
//        {
//            vecSinRepetidos[x]=0;
//        }
//        else
//        {
//            vecSinRepetidos[x]=vecOriginal[x];
//        }
    }

    for(int x=0; x<TAMANIO; x++)
    {
        cout<<vecSinRepetidos[x]<<endl;
    }

    return 0;
}

void cargarVector(int tamanio, int vec[])
{
    for(int x=0;x<tamanio;x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>vec[x];
    }
}

int cantRepetidos(int tamanio, int numeroABuscar, int vec[])
{
    int cant=0;
    for(int x=0;x<tamanio;x++)
    {
        if(vec[x]==numeroABuscar)
        {
            cant++;
        }
    }

    return cant;
}
