#include "funciones.h"

void mostrarMayores(int vec[], int cantGrupos)
{
    for(int x=0; x<cantGrupos; x++)
    {
        cout<<"El maximo del subgrupo nro "<<x+1<<" fue: "<<vec[x]<<endl;
    }
}

int maximoSubGrupo()
{
    int numero, maxSubGrupo;

    cout<<"Ingrese un numero: ";
    cin>>numero;
    maxSubGrupo = numero;

    while(numero!=0)
    {
        if(numero>maxSubGrupo)
        {
            maxSubGrupo = numero;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    return maxSubGrupo;
}
