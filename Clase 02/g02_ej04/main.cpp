#include <iostream>
using namespace std;

/*Hacerun programa para ingresar por teclado dos números y luego informar por
 pantalla la diferencia entre ambos.
 Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5.
 Ejemplo B: Si se ingresan-3 y 9 se emite 12. Si se ingresan-12 y-1 se emite 11.
 Ejemplo C: Si se ingresan-3 y-9 se emite 6. Si se ingresan-12 y-9 se emite 3.
 Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO
 porque la diferencia absoluta siempre es un valor positivo.*/

int main()
{
    //Declaracion de variables
    int numUno, numDos, diferencia;

    cout<<"Ingrese el primer numero: ";
    cin>>numUno;
    cout<<"Ingrese el segundo numero: ";
    cin>>numDos;
    /*if(numUno<numDos)
    {
        diferencia = numDos - numUno;
    }
    else
    {
        diferencia = numUno - numDos;
    }*/

    diferencia = numUno - numDos;

    if(diferencia<0)
    {
        diferencia = diferencia * -1;
    }

    cout<<"La diferencia entre ambos es: "<<diferencia<<endl;

    return 0;
}
