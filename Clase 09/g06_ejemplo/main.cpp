#include <iostream>
using namespace std;

/*
Ejemplo: Se requiere un programa que almacene la edad de 5 personas
 y luego muestre por pantalla las mayores al promedio y en que posición se ingreso su edad.
*/

int main()
{
    const int CANT_PERSONAS = 10;
    int edades[CANT_PERSONAS], sumaEdades=0;
    float promEdades;
    for(int x=0; x<CANT_PERSONAS; x++)
    {
        cout<<"Ingrese la edad nro "<<x<<": ";
        cin>>edades[x];
        sumaEdades+=edades[x];
    }

//    for(int x=0; x<5; x++)
//    {
//        sumaEdades+=edades[x];
//    }

    promEdades=sumaEdades/CANT_PERSONAS;
    cout<<"El promedio es: "<<promEdades<<endl;

    for(int x=0; x<CANT_PERSONAS; x++)
    {
        if(edades[x]>promEdades)
        {
            cout<<"Edad: "<<edades[x]<< " y su posicion fue: "<<x+1<<endl;
        }
    }

    return 0;
}

