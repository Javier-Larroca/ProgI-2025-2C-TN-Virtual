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
    float n1, n2, n3, n4;
    int cantidadDe4 = 0;

    //cantidadDe4 = 0;

    //Ingreso de datos
    cout<<"Ingrese la nota del parcia n 1: ";
    cin>>n1;
    cout<<"Ingrese la nota del parcia n 2: ";
    cin>>n2;
    cout<<"Ingrese la nota del parcia n 3: ";
    cin>>n3;
    cout<<"Ingrese la nota del parcia n 4: ";
    cin>>n4;

    //Procesos
    /*if(n1>=7)
    {
        if(n2>=7)
        {
            if(n3>=7)
            {
                if(n4>=7)
                {
                    cout<<"El alumno PROMOCIONA"<<endl;
                }
            }
        }
    }*/
    if(n1>=7 && n2>=7 && n3>=7 && n4>=7)
    {
        cout<<"El alumno PROMOCIONA"<<endl;
    }
    else
    {
        if(n1>=4)
        {
            cantidadDe4 = cantidadDe4 + 1;
        }
        if(n2>=4)
        {
            cantidadDe4++;
        }
        if(n3>=4)
        {
            cantidadDe4++;
        }
        if(n4>=4)
        {
            cantidadDe4++;
        }

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
