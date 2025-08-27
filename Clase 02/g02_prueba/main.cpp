#include <iostream>
using namespace std;

/*
Ejemplo: Hacer un programa para ingresar por teclado un número y emitir por pantalla un mensaje aclaratorio que indique si el mismo es positivo,  negativo o es cero.
*/

int main()
{
    //Declaramos las variables
    int numero;

    //Solicitamos los datos
    cout << "Ingrese un numero: ";
    cin>>numero;

    //Procesamos
    if(numero>0)
    {
        cout<<"El numero ingresado es POSITIVO."<<endl;
    }
    else
    {
        if(numero==0)
        {
            cout<<"El numero ingresado es CERO."<<endl;
        }
        else
        {
            cout<<"El numero ingresado es NEGATIVO."<<endl;
        }
    }
    /*if(numero>0)
    {
        cout<<"El numero ingresado es POSITIVO."<<endl;
    }
    else if(numero==0)
    {
        cout<<"El numero ingresado es CERO."<<endl;
    }
    else
    {
        cout<<"El numero ingresado es NEGATIVO."<<endl;
    }*/
    /*if(numero>0)
        cout<<"El numero ingresado es POSITIVO."<<endl;
    else if(numero==0)
        cout<<"El numero ingresado es CERO."<<endl;
    else
        cout<<"El numero ingresado es NEGATIVO."<<endl;*/
}
