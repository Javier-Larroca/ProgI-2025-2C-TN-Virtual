#include <iostream>
using namespace std;
/*
Hacer un programa para ingresar tres números distintos y listarlos ordenados
 de menor amayor.
 Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
 Si N1=8, N2=6, N3=10 ó N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
 Si N1=6, N2=8, N3=10 ó N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
 Si N1=6, N2=10, N3=8 ó N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
 */

int main()
{
    int a, b, c;

    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese un numero: ";
    cin>>b;
    cout<<"Ingrese un numero: ";
    cin>>c;

    if(a<b && a<c)
    {
        if(b<c)
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else
        {
            cout<<a<<" "<<c<<" "<<b<<endl;
        }
    }
    else
    {
        if(b<c)
        {
            if(a<c)
            {
                cout<<b<<" "<<a<<" "<<c<<endl;
            }
            else
            {
                cout<<b<<" "<<c<<" "<<a<<endl;
            }
        }
        else
        {
            if(a<b)
            {
                cout<<c<<" "<<a<<" "<<b<<endl;
            }
            else
            {
                cout<<c<<" "<<b<<" "<<a<<endl;
            }
        }
    }


    return 0;
}
