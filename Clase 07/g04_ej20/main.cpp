#include <iostream>
using namespace std;

/*
Una casa de ventas de libros con varias sucursales registró las ventas durante
el mes anterior en un lote de registros. Para cada venta se registraron los
siguientes datos:
- Sucursal de la venta (1 a 20)
- Número del vendedor que efectuó la venta (1 a 150)
- Día de la venta (1 a 31)
- Importe de la venta
- Tipo de Cliente ("U"= Universitario, "N"= No Universitario )
El lote finaliza con un registro con importe igual a cero. Los datos se ingresan
agrupados por sucursal.
A partir de esta información se pide determinar e informar:
a) La comisión total pagada a todos los vendedores en el mes para cada
sucursal.
Considerar que la comisión es un 10% cuando el tipo de cliente es universitario y un 20% cuando no lo es.
b) La cantidad total vendida de libros por cada sucursal.
c) El número de vendedor que haya efectuado la venta individual de mayor
importe, informando en qué sucursal trabaja y el día en que se realizó esa
venta. Se esperan los datos de un único vendedor.
d) El promedio de recaudación por sucursal para la segunda quincena para los clientes No Universitarios.
e) El porcentaje de ventas total discriminado por clientes Universitarios y No
Universitarios.*/

int main()
{
    float acuUni = 0, acuNoUni = 0, maxImp = 0, imp, comision, acuQuincena, promQuincena, porUni, porNoUni;
    int nroSuc, nroVend, dia, nroSucActual, conLibros, conQuincena, nroVendMax, nroSucMax, diaMax;
    char tipoCliente;

    cout<<"Ingrese nro sucursal: ";
    cin>>nroSuc;
    cout<<"Ingrese nro vendedor: ";
    cin>>nroVend;
    cout<<"Ingrese dia: ";
    cin>>dia;
    cout<<"Ingrese importe: $";
    cin>>imp;
    cout<<"Ingrese tipo de cliente ('U' Universitario / 'N' No universitario): ";
    cin>>tipoCliente;

    while(imp!=0)
    {
        nroSucActual = nroSuc;
        comision=0;
        conLibros = 0;
        conQuincena = 0;
        acuQuincena = 0;

        while(nroSuc==nroSucActual)
        {
            if(toupper(tipoCliente)=='U')
            {
                //Punto A
                comision += imp*0.1;
                //Punto E
                acuUni+=imp;
            }
            else
            {
                //Punto A
                comision += imp*0.2;
                //Punto E
                acuNoUni+=imp;
                //Punto D
                if(dia>=15)
                {
                    acuQuincena+= imp;
                    conQuincena++;
                }
            }

            //Punto B
            conLibros++;

            //Punto C
            if(imp>maxImp)
            {
                maxImp=imp;
                nroVendMax = nroVend;
                nroSucMax = nroSuc;
                diaMax = dia;
            }

            /*
            //Punto D
            if(dia>=15 && tipoCliente=='N')
            {
                acuQuincena+= imp;
                conQuincena++;
            }
            */

            /*
            //Punto E
            if(tipoCliente=='U')
            {
                acuUni+=imp;
            }
            else
            {
                acuNoUni+=imp;
            }
            */

            cout<<"----------------------------------------------------------------------"<<endl;
            cout<<"Ingrese nro sucursal: ";
            cin>>nroSuc;
            cout<<"Ingrese nro vendedor: ";
            cin>>nroVend;
            cout<<"Ingrese dia: ";
            cin>>dia;
            cout<<"Ingrese importe: $";
            cin>>imp;
            cout<<"Ingrese tipo de cliente ('U' Universitario / 'N' No universitario): ";
            cin>>tipoCliente;
        }

        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
        //Punto A
        cout<<"Comision paga: $"<<comision<<endl;

        //Punto B
        cout<<"Cantidad total vendida de libros: "<<conLibros<<endl;

        //Punto D
        /*cout<<"Promedio de recaudación por sucursal para la segunda quincena para los clientes No Universitarios: $"<<acuQuincena/conQuincena<<endl;*/
        if(conQuincena!=0)
        {
            promQuincena=acuQuincena/conQuincena;
            cout<<"Promedio de recaudación por sucursal para la segunda quincena para los clientes No Universitarios: $"<<promQuincena<<endl;
        }
        cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    }

    //Punto C
    cout<<"El vendedor que realizo la venta de mayor importe fue: "<<nroVendMax<<" que trabaja en la sucursal: "<<nroSucMax<<" y la realizo el dia: "<<diaMax<<endl;

    //Punto E
    porUni = acuUni * 100 / (acuUni+acuNoUni);
    porNoUni = acuNoUni * 100 / (acuUni+acuNoUni);
    cout<<"Porcentaje de ventas total: "<<endl;
    cout<<"                -Universitarios: "<<porUni<<endl;
    cout<<"                -No Universitarios: "<<porNoUni<<endl<<endl;

    return 0;
}
