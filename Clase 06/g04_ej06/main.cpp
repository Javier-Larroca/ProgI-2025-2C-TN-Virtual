#include <iostream>
using namespace std;

/*
Dada una lista de números compuesta por grupos donde cada grupo está
separado del siguiente por un cero, y la lista de números finaliza cuando se
ingresan dos ceros consecutivos, se pide determinar e informar la cantidad de
grupos que cuentan con una lista de números impares que se encuentran
ordenados de mayor a menor. Los números impares pueden no ser
consecutivos, pero sí deben estar ordenados.
*/

int main()
{
    int numero, cantGrupos=0, numeroAnt=0;
    bool ordenada;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while(numero!=0)
    {
        ordenada = true;
        while(numero!=0)
        {
            if(numero%2!=0)
            {
                if(numeroAnt!=0)
                {
                    if(numero>numeroAnt)
                    {
                        ordenada=false;
                    }
                }

                numeroAnt=numero;
            }

            cout<<"Ingrese un numero: ";
            cin>>numero;
        }

        if(ordenada==true)
        {
            cantGrupos++;
        }

        cout<<"-----------------------------"<<endl;
        numeroAnt=numero;
        cout<<"Ingrese un numero: ";
        cin>>numero;
    }

    cout<<endl<<"La cantidad de grupos con numeros impares ordenados fue: "<<cantGrupos<<endl<<endl;

    return 0;
}
