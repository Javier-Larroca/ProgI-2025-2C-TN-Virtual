#include <iostream>
using namespace std;

/*
Una empresa registró las  ventas que efectuó durante un día y para cada venta
registró los siguientes datos:
    Número de Artículo Vendido (1 a 3)
    Cantidad de Unidades Vendidas
    Importe de la Venta
El lote finaliza cuando se ingresa un registro con Número de Artículo igual a 0.
Se pide determinar e informar:
a) La recaudación total para cada uno de los 3 artículos. Se informan 3
resultados al final.
b) El número de artículo con mayor cantidad TOTAL de unidades vendidas. Se
informa 1 resultado al final. */

int main()
{
    int nroArticulo, cantVend, contUno=0, contDos=0, contTres=0;
    float importeVenta, recaudacionUno=0, recaudacionDos=0, recaudacionTres=0;

    cout<<"Ingrese nro de articulo: ";
    cin>>nroArticulo;

    while(nroArticulo!=0)
    {
        cout<<"Ingrese cantidad de unidades vendidas: ";
        cin>>cantVend;
        cout<<"Ingrese importe de la venta: $";
        cin>>importeVenta;

        switch(nroArticulo)
        {
        case 1:
        {
            recaudacionUno+=importeVenta;
            contUno+=cantVend;
            break;
        }
        case 2:
        {
            recaudacionDos+=importeVenta;
            contDos+=cantVend;
            break;
        }
        case 3:
        {
            recaudacionTres+=importeVenta;
            contTres+=cantVend;
            break;
        }
        default:
        {
            cout<<"Se ingreso nro de articulo incorrecto"<<endl;
            break;
        }
        }

        cout<<"---------------------------------"<<endl;
        cout<<"Ingrese nro de articulo: ";
        cin>>nroArticulo;
    }

    cout<<endl<<endl;
    cout<<"Recaudacion articulo uno: $"<<recaudacionUno<<endl;
    cout<<"Recaudacion articulo dos: $"<<recaudacionDos<<endl;
    cout<<"Recaudacion articulo tres: $"<<recaudacionTres<<endl;
    cout<<endl<<endl;
    if(contUno>contDos && contUno>contTres)
    {
        cout<<"El articulo con mas venta fue: 1"<<endl;
    }
    else
    {
        if(contDos>contTres)
        {
            cout<<"El articulo con mas venta fue: 2"<<endl;
        }
        else
        {
            cout<<"El articulo con mas venta fue: 3"<<endl;
        }
    }
    cout<<endl<<endl;
    return 0;
}
