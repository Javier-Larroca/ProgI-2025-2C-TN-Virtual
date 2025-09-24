#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado 5 grupos compuestos por
números ordenados de menor a mayor. El final de cada grupo se detecta al
ingresar un número menor a su anterior.
Se debe obtener y emitir:
a) Para cada uno de los grupos la cantidad de números pares que lo componen.
Se informa 1 resultado por cada grupo.
b) El menor número par de cada uno de los grupos. Se informa 1 resultado por
cada grupo.
c) El último número positivo de cada uno de los grupos y su ubicación dentro
del grupo. Se informan 2 resultados por cada grupo.

*/

int main()
{
    int numero, numeroAnt, cantNumPar, menorPar, ultimoPos, contNumeros, posUltimoPos;

    cout<<"Ingrese numero: ";
    cin>>numero;

    for(int x=0; x<5; x++)
    {
        numeroAnt=numero-1;
        cantNumPar=0;
        menorPar=0;
        ultimoPos=0;
        contNumeros=0;

        while(numero>numeroAnt)
        {
            contNumeros++;
            if(numero%2==0 && numero!=0)
            {
               cantNumPar++;
               if(menorPar==0 || numero<menorPar)
               {
                    menorPar=numero;
               }
            }
            if(numero>0)
            {
                ultimoPos=numero;
                posUltimoPos=contNumeros;
            }

            numeroAnt = numero;
            cout<<"Ingrese numero: ";
            cin>>numero;
        }
        cout<<"------------------"<<endl;

        cout<<"Cantidad de numero pares del grupo: "<<cantNumPar<<endl;
        if(menorPar!=0)
        {
            cout<<"El menor numero par fue: "<<menorPar<<endl;
        }
        else
        {
            cout<<"En el anterior grupo no hubo numeros pares."<<endl;
        }
        if(ultimoPos!=0)
        {
            cout<<"El ultimo numero positivo fue: "<<ultimoPos<<endl;
            cout<<" Y su posicion fue: "<<posUltimoPos<<endl;
        }
        else
        {
            cout<<"En el anterior grupo no hubo numeros positivos."<<endl;
        }
    }

    return 0;
}
