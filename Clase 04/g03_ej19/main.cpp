#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se
ingresan dos números positivos consecutivos, y luego informar la cantidad de ternas de números ceros ingresados consecutivamente.
Ejemplo A: 5, -10, 20, 0, 0, 0, -35, 0, 0, 0, -8, 15, 10. Se listará 2 ternas de números ceros
ingresadas consecutivamente.
*/

int main()
{
    /*int numero, numeroAnt;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    //numeroAnt=-numero;
    numeroAnt=numero*-1;

    while(numero<=0 || numeroAnt<=0)
    {
        numeroAnt = numero;


        cout<<"Ingrese un numero: ";
        cin>>numero;
    }*/
    int numero, contPos=0, contCerosConsecutivos=0, contTernasCeros=0;

    cout<<"Ingrese un numero: ";
    cin>>numero;

    if(numero>0)
    {
        contPos++;
    }

    while(contPos<2)
    {
        if(numero==0)
        {
            contCerosConsecutivos++;
            //if(contCerosConsecutivos==3)
            if(contCerosConsecutivos%3==0)
            {
                contTernasCeros++;
                //contCerosConsecutivos=0;
            }
        }
        else
        {
            contCerosConsecutivos=0;
        }

        cout<<"Ingrese un numero: ";
        cin>>numero;
        if(numero>0)
        {
            contPos++;
        }
        else
        {
            contPos=0;
        }
    }

    return 0;
}
