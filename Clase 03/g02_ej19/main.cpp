#include <iostream>
using namespace std;
/*
El costo de un desarrollo de un proyecto de software se calcula en base al
 lenguaje que se necesita:
        TABLA DE PDF
 Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más
 al costo del proyecto.
 Le solicitan un programa que permita calcular el costo total de un proyecto
 basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o
 no (bool)
 */

int main()
{
    const float VALOR_HORA_C = 7500;
    int cantHoras;
    float total;
    char tipoLenguaje;
    //bool urgente;
    char urgente;

    cout<<"Ingrese la cantidad de horas: ";
    cin>>cantHoras;
    cout<<"Ingrese el lenguajes de programacion (C, #, P, G): ";
    cin>>tipoLenguaje;
    cout<<"Ingrese si el desarrollo es urgente o no (S o N): ";
    cin>>urgente;

    switch(toupper(tipoLenguaje))
    {
    case 'C':
        total = cantHoras * VALOR_HORA_C;
        break;
    case '#':
        total = cantHoras * 6100;
        break;
    case 'P':
        total = cantHoras * 5400;
        break;
    case 'G':
        total = cantHoras * 5000;
        break;
    default:
        cout<<"Se ingreso un lenguaje incorrecto"<<endl;
        total = 0;
        break;
    }

    //if(urgente==true)
    //if(urgente)
    //if(urgente=='S' || urgente=='s')
    if(toupper(urgente)=='S' || urgente=='s')
    {
        total = total * 2.2;
    }

    cout<<"El valor del desarrollo es de: $"<<total<<endl;

    return 0;
}
