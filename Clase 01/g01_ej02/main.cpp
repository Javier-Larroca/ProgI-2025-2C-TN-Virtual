#include <iostream>
using namespace std;

/*
 Hacer un programa que solicite por teclado que se ingresen dos números y
 luego guardarlos en dos variables distintas. A continuación se deben
 intercambiar mutuamente los valores en ambas variables y mostrarlos por
 pantalla.
 Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables
 usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/

int main()
{
    //Declarar las variables
    int a,b;
    int aux;

    //Solicitamos los datos de ingreso
    cout<<"Ingrese el primer numero (A): ";
    cin>>a;
    cout<<"Ingrese el segundo numero (B): ";
    cin>>b;

    //Realizamos el proceso
    aux=a; //Uso de la variables auxiliar
    a=b;
    b=aux;

    //Mostramos los resultado
    cout<<"Valor A: "<<a<<endl;
    cout<<"Valor B: "<<b<<endl;

    return 0;
}
