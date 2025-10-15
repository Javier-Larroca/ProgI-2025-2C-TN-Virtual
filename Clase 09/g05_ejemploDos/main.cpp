#include <iostream>
using namespace std;

/*
Se necesita registrar los 5 días del mes que haya habido ventas y cual fue su recaucacion.

Luego informar el día de mayor recaudacion.
*/

int main()
{
    //bool huboVentas[31] = {};
    int dia;
    float recaudaciones[31] = {};

    for(int x=0; x<5; x++)
    {
        cout<<"Ingrese un dia: ";
        cin>>dia;
        cout<<"Ingrese la recaudacion: ";
        cin>>recaudaciones[dia-1];
    }

    for(int x=0; x<31; x++)
    {
        cout<<"Recaudación dia "<<x+1<<" : "<<recaudaciones[x]<<endl;
    }


    return 0;
}
