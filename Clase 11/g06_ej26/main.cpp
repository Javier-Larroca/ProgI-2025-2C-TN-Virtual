#include <iostream>
using namespace std;

/**
 Una empresa con varias sucursales, dispone de un primer lote de registros con
 la siguiente información:
 ● Númerodeartículo (1 a 25)
 ● Precio Unitario
 Este lote se encuentra desordenado.

 ----------------------- HASTA ACA ES LOTE DE CARGA ------------------------------

 ---------------------- ACA COMIENZA LOTE DE PROCESO -----------------------------

 Dispone de un segundo lote con la información de las ventas que se efectuaron
 en cada una de las sucursales, con la siguiente información:
 ● Númerodeartículo (1 a 25)
 ● Númerodesucursal (1 a 5)
 ● Cantidad vendida

 Puede haber más de un registro para el mismo artículo y para la misma
 sucursal.
 El último registro se indica con número de artículo igual a cero.
 Se pide determinar e informar:
 a) Cantidad total vendida por cada artículo.
 b) Monto total recaudado por la empresa.
 c) Número de sucursal que más artículos vendió en total. (sin discriminar por
 artículo)
 */

int main()
{
    int const CANTIDAD_ARTICULOS=5;
    /// LOTE DE CARGA ///
    int numeroArticulo[CANTIDAD_ARTICULOS];
    float precioArticulo[CANTIDAD_ARTICULOS];

    for(int x=0; x<CANTIDAD_ARTICULOS; x++)
    {
        cout<<"Ingrese el numero del articulo: ";
        cin>>numeroArticulo[x];
        cout<<"Ingrese el precio del articulo: $";
        cin>>precioArticulo[x];
    }

    /// LOTE DE PROCESO ///
    cout<<" --------- Finalizo el lote de carga ---------"<<endl;

    int numArticulo,numeroSucursal,cantVendida, cantVendidaArticulo[25]= {};

    cout<<"Ingrese numero de articulo: ";
    cin>>numArticulo;
    while(numArticulo!=0)
    {
        cout<<"Ingrese numero de sucursal: ";
        cin>>numeroSucursal;
        cout<<"Ingrese la cantidad vendida: ";
        cin>>cantVendida;

        //PUNTO A
        for(int x=0; x<CANTIDAD_ARTICULOS; x++)
        {
            if(numArticulo==numeroArticulo[x])
            {
                cantVendidaArticulo[x]+=cantVendida;
            }
        }

        cout<<"Ingrese numero de articulo: ";
        cin>>numArticulo;
    }

    cout<<" --------- Finalizo el lote de proceso ---------"<<endl;

    //PUNTO A
    for(int x=0; x<CANTIDAD_ARTICULOS; x++)
    {
        cout<<"El numero de articulo: "<<numeroArticulo[x]<< " vendio: "<<cantVendidaArticulo[x]<<endl;
    }


    return 0;
}
