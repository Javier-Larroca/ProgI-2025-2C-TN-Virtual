#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar el
máximo de los negativos y el mínimo de los positivos.
*/

int main()
{
    //Declaracion de variables
    int numero, maxNeg=0, minPos=0;

    for(int x=0; x<10; x++)
    {
        cout<<"Ingrese un numero: ";
        cin>>numero;

        if (numero<0)
        {
            if(maxNeg==0 || numero>maxNeg)
            {
                maxNeg=numero;
            }

            /*if(maxNeg==0)
            {
                maxNeg=numero;
            }
            else
            {
                if(numero>maxNeg)
                {
                    maxNeg=numero;
                }
            }*/
        }
        else
        {
            if((numero>0) && (minPos==0 || numero<minPos))
            {
                minPos=numero;
            }
        }
    }

    if(maxNeg!=0)
    {
        cout<<"El maximo de los negativos fue: "<<maxNeg<<endl;
    }
    else
    {
        cout<<"No se ingresaron numeros negativos"<<endl;
    }

    if(minPos!=0)
    {
        cout<<"El minimo de los positivos fue: "<<minPos<<endl;
    }
    else
    {
        cout<<"No se ingresaron numero positivos"<<endl;
    }

    return 0;
}
