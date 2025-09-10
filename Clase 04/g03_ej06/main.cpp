#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar un N valor que indica la cantidad de números
que componen una lista y luego solicitar se ingresen esos N números.
Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se
listará:  Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4.
Se listará: Cantidad de Positivos: 0
*/

int main()
{
    //Declaracion de variables
    int cantNumeros, num, cantPositivos = 0, cont=0;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de numeros a ingresar: ";
    cin>>cantNumeros;

    /*
    if(cantNumeros<0)
    {
        for(int x=0; x>cantNumeros; x--)
        {
            cout<<"X esta en: "<<x<<endl;
            cout<<"Ingrese numero: ";
            cin>>num;
            if (num>0)
            {
                cantPositivos++;
            }
        }
    }
    else
    {
        for(int x=0; x<cantNumeros; x++)
        {
            cout<<"X esta en: "<<x<<endl;
            cout<<"Ingrese numero: ";
            cin>>num;
            if (num>0)
            {
                cantPositivos++;
            }
        }
    }*/

    if(cantNumeros<0)
    {
        //cantNumeros=cantNumeros*-1;
        cantNumeros=-cantNumeros;
    }

    for(int x=0; x<cantNumeros; x++)
    {
        cout<<"Ingrese numero: ";
        cin>>num;
        if (num>0)
        {
            cantPositivos++;
        }
    }

    /*
    while(cont<cantNumeros)
    {
        cout<<"Ingrese numero: ";
        cin>>num;
        if (num>0)
        {
            cantPositivos++;
        }

        cont++;
    }*/

    cout<<"La cantidad de positivos fue: "<<cantPositivos<<endl;

    return 0;
}
