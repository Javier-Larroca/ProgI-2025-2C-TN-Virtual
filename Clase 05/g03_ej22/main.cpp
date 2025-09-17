#include <iostream>
using namespace std;

/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10.
Calcular e informar: La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 - Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 - Cantidad de números: 7
*/

int main()
{
    int num, cant=0, maximo, minimo, diferencia = 0;

    cout<<"Ingrese un numero: ";
    cin>>num;
    cant++;
    maximo=num;
    minimo=num;

    //while(!(maximo-minimo>10))
    //while(maximo-minimo<=10)
    while(diferencia<=10)
    {
        cout<<"Ingrese un numero: ";
        cin>>num;
        cant++;
        if(num>maximo)
        {
            maximo=num;
        }
        else
        {
            if(num<minimo)
            {
                minimo=num;
            }
        }
        diferencia=maximo-minimo;
    }

    cout<<"La cantidad de numeros ingresados fue: "<<cant<<endl;

    return 0;
}
