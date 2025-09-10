#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el
máximo de los negativos y el mínimo de los positivos.
*/

int main()
{
    //Declaracion de variables
    int numero, maxNeg, minPos;
    bool ingresoNeg=false, ingresoPos=false;

    for(int x=0; x<10; x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if (numero<0)
        {
            //if(ingresoNeg==false)
            if(!ingresoNeg)
            {
                maxNeg=numero;
                ingresoNeg=true;
            }
            else
            {
                if(numero>maxNeg)
                {
                    maxNeg=numero;
                }
            }
        }
        else
        {
            if(numero>0)
            {
                if(!ingresoPos)
                {
                    minPos=numero;
                    ingresoPos=true;
                }
                else
                {
                    if(numero<minPos)
                    {
                        minPos=numero;
                    }
                }
            }
        }
    }

    if(ingresoNeg)
    {
        cout<<"El maximo de los negativos fue: "<<maxNeg<<endl;
    }
    else
    {
        cout<<"No se ingresaron numeros negativos"<<endl;
    }

    if(ingresoPos)
    {
        cout<<"El minimo de los positivos fue: "<<minPos<<endl;
    }
    else
    {
        cout<<"No se ingresaron numero positivos"<<endl;
    }

    return 0;
}
