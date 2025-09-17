#include <iostream>
using namespace std;


/*Hacer un programa para ingresar las notas de los alumnos de un curso.

Por cada alumno, se tiene nro de legajo y las 4 notas de los parciales.
El lote de alumnos finaliza cuando se ingrese un 0 como nro de legajo.

-Determinar e informar,el nro de legajo del alumno con mayor promedio en los parciales.
*/

int main()
{
    const int CANTIDAD_PARCIALES=4;
    int nroLegajo, nroLegajoMaximo;
    float parcial, sumaNotas, promedio, promedioMaximo=0;

    cout<<"Ingrese el legajo del alumno: ";
    cin>>nroLegajo;

    while(nroLegajo!=0)
    {
        sumaNotas=0;

        for(int x=0; x<CANTIDAD_PARCIALES; x++)
        {
            cout<<"Ingrese parcial nro "<<x+1<<": ";
            cin>>parcial;
            sumaNotas+=parcial;
        }

        promedio=sumaNotas/CANTIDAD_PARCIALES;

        if(promedio>promedioMaximo)
        {
            promedioMaximo = promedio;
            nroLegajoMaximo=nroLegajo;
        }

        cout<<"Ingrese el legajo del alumno: ";
        cin>>nroLegajo;
    }

    cout<<"El nro de legajo con mayor promedio fue: "<<nroLegajoMaximo<<endl;
    cout<<"Su promedio fue de: "<<promedioMaximo<<endl;

    return 0;
}
