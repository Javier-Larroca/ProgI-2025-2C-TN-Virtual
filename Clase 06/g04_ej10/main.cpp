#include <iostream>
using namespace std;

/*
10 Dada una lista de números compuesta por grupos donde cada grupo está
separado del siguiente por un cero, y la lista de números finaliza cuando se
ingresan dos ceros consecutivos, se pide determinar e informar:
a) La cantidad de grupos en los que se detecten un total de 4 o más números
pares consecutivos.. Se informa 1 resultado al final.
b) Para cada uno de los grupos en los que se haya detectado números
negativos, el mayor y el segundo mayor de los mismos y en qué posición
estaban dentro del subgrupo. En los grupos sin negativos, informar “Grupo sin
negativos”. Se informan 4 resultados por cada grupo.
c) El mayor número primo de todos los grupos, informando además en cual
grupo y en qué posición del mismo fue detectado.  Se informan 3 resultados al
f
 inal.
Ejemplo de una posible lista: 5, 4, 3, 0, 18, -5, 20, 0, 7, 11, 25, 4, 0, 0. */

int main()
{
    int numero;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    while(numero!=0)
    {

        while(numero!=0)
        {


            cout<<"Ingrese un numero: ";
            cin>>numero;
        }



        cout<<"-----------------------------"<<endl;
        cout<<"Ingrese un numero: ";
        cin>>numero;
    }



    return 0;
}
