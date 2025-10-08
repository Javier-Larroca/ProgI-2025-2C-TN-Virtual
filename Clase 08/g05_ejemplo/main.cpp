#include <iostream>
using namespace std;

/*
Otro ejemplo: Se requiere una funci�n para ingresar un n�mero y que la misma nos indique si es primo.
*/

//Esta funci�n devuelve true en caso de que un numero sea primo o false en caso de que no.
bool esPrimo(int );
//Funci�n que solo devuelve la cantidad de divisores de un numero.
int cantDivisores(int );

int main()
{
    int num;
    //bool esONoPrimo;

    cout<<"  -ES O NO ES PRIMO-"<<endl<<endl;

    cout<<"Ingrese un numero: ";
    cin>>num;

    while(num!=0)
    {
        //esONoPrimo=esPrimo(num);
        //if(esONoPrimo==true)
        if(esPrimo(num))
        {
            cout<<"El numero que ingreso es primo."<<endl;
        }
        else
        {
            cout<<"El numero que ingreso no es primo."<<endl;
        }

        cout<<"Ingrese un numero: ";
        cin>>num;
    }

    return 0;
}

bool esPrimo(int n)
{
    //int divi;
    //divi = cantDivisores(n);

    if (cantDivisores(n)==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int cantDivisores(int n)
{
    int cont = 0;

    for (int x=1; x<=n; x++)
    {
        if (n%x==0)
        {
            cont++;
        }
    }

    return cont;
}




