#include <iostream>
using namespace std;
/*
 Hacer una función llamada EsPrimoSophieGermain que reciba un número
 entero y determine si el mismo es un número primo de Sophie Germain. Debe
 devolver verdadero si lo es y falso si no lo es.
 NOTA: En teoría de números, se dice que un número natural es un número
 primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
 Ejemplo:
 El número 2 es número primo de Sophie Germain porque:
     2 es primo
     2*2+1 → 5 es primo
*/

//Función que devuelve true en caso de que un numero sea primo o false en caso de que no.
bool esPrimo(int );
//Función que solo devuelve la cantidad de divisores de un numero.
int cantDivisores(int );
//Funcion que devuelve true en caso de que el numero sea primo de Sofia
bool esPrimoSophieGermain(int);

int main()
{
    int num;
    //bool primoSofi;

    cout<<"Ingrese un numero, para saber si el mismo es un numero primo de Sofia: ";
    cin>>num;

    //primoSofi = esPrimoSophieGermain(num);

    //if(primoSofi)
    if(esPrimoSophieGermain(num))
    {
        cout<<"El numero es primo de Sofia."<<endl;
    }
    else
    {
        cout<<"El numero no es primo de Sofia."<<endl;
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

bool esPrimoSophieGermain(int s)
{
    //bool primo, primoSofi;
    //primo = esPrimo(s);

    //if(primo)
    //if(esPrimo(s))
    //if(esPrimo(s) && esPrimo(s*2+1))
    //{
        //primoSofi=esPrimo(s*2+1);
        //if(primoSofi)
        //if(esPrimo(s*2+1))
        //{
            //return true;
        //}
    //}

    //return false;

    return esPrimo(s) && esPrimo(s*2+1);
}

