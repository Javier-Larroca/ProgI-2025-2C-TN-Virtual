#include <iostream>
using namespace std;

/** 12 Dada una lista de 10 números, cargarlos en un vector. Luego ingresar un
 número e informar la cantidad de veces que ese número aparece en el vector.*/

int cantRepetidos(int tamanio,int numeroABuscar, int vec[]);
void cargarVector(int tamanio, int vec[]);

int main()
{
    int vec[10], num;

    cargarVector(10, vec);

    cout<<"Ingrese un numero para saber la cantidad de veces que se repite: ";
    cin>>num;

    //system("cls");

    cout<<"El numero se repitio "<<cantRepetidos(10, num, vec)<<" veces."<<endl;

    return 0;
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

void cargarVector(int tamanio, int vec[])
{
    for(int x=0;x<tamanio;x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>vec[x];
    }
}
