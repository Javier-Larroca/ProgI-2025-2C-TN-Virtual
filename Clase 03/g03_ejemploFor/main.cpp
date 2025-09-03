#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes
 obtenidas por un alumno y luego emitir un solo cartel de acuerdo a las
 siguientes condiciones:
 - “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
 - “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
 - “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los
 exámenes.
 - “Recursa la materia”, si no aprobó ningún examen parcial
 */

int main()
{
    //Declaracion de variables
    float n;
    int cantidadDe7 = 0;
    int cantidadDe4 = 0;

    //Ingreso de datos

    //for(int x=1; x<=4; x++)
    for(int x=0; x<4; x++)
    {
        cout<<"Ingrese la nota del parcial numero "<<x+1<<": ";
        cin>>n;
        if(n>=7)
        {
            cantidadDe7++;
            //cantidadDe4++;
        }
        if(n>=4)
        {
            cantidadDe4++;
        }
    }

    //cout<<"Cantidad de 7 o mas: "<<cantidadDe7<<endl;
    //cout<<"Cantidad de 4 o mas: "<<cantidadDe4<<endl;

    if(cantidadDe7==4)
    {
        cout<<"El alumno PROMOCIONA"<<endl;
    }
    else
    {
        if(cantidadDe4>= 3)
        {
            cout<<"El alumno RINDE EXAMEN FINAL"<<endl;
        }
        else
        {
            if(cantidadDe4>=1)
            {
                cout<<"El alumno RECUPERA PARCIALES"<<endl;
            }
            else
            {
                cout<<"El alumno RECURSA LA MATERIA"<<endl;
            }
        }
    }

    return 0;
}
