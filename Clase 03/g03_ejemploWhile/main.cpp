#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado las  notas de los exámenes
 obtenidas por muchos alumnos y luego emitir un solo cartel indicando, cuantos alumnos  promocionaron, cuantos aprobaron y cuantos desaprobaron.
 El fin de los alumnos, sera indicado con una nota 0.
 */

int main()
{
    //Declaracion de variables
    float n;
    int cantidadDe7 = 0;
    int cantidadDe4 = 0;
    int cantidadDeDesaprobados=0;

    //Ingreso de datos
    cout<<"Ingrese la nota del parcial: " ;
    cin>>n;

    while(n!=0)
    {
        if(n>=7)
        {
            cantidadDe7++;
        }
        else
        {
            if(n>=4)
            {
                cantidadDe4++;
            }
            else
            {
                cantidadDeDesaprobados++;
            }
        }

        cout<<"Ingrese la nota del parcial: " ;
        cin>>n;
    }

    cout<<"Cantidad de 7 o mas: "<<cantidadDe7<<endl;
    cout<<"Cantidad de 4 o mas: "<<cantidadDe4<<endl;
    cout<<"Cantidad de desaprobados: "<<cantidadDeDesaprobados<<endl;



    return 0;
}
