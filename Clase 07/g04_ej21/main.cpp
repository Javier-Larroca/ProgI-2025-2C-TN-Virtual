#include <iostream>
using namespace std;

/*
Una compañía de turismo aventura registró los paquetes vendidos durante la última temporada vacacional. Para cada venta se ingresó:
- Número de paquete (4 dígitos no correlativos).
- Cantidad de personas incluidas.
- Precio por persona.
- Horas totales de actividades.
- Tipo de aventura (“M”, Montaña. “T”, Trekking. “R”, Rafting. “B”, Bicicleta. “C”, Canopy. “E”, Escalar. “K”, Sky. “S”, Snowboard. “J”, Jumping. “P”, Parapente).
El lote se encuentra no ordenado y agrupado por tipo de aventura y corta con número de paquete cero. En el lote no se ingresan registros cuyo tipo de aventura no se haya vendido.

A partir de dichos datos, se solicita informar:
a) La cantidad de paquetes vendidos de cada tipo de aventura.
b) La cantidad total de personas que disfrutaron de las aventuras durante la
temporada.
c) El total recaudado por cada venta.
d) La venta con mayor importe de cada tipo de aventura.
*/

int main()
{
    int nroPaquete, cantPersonas, cantPaquetesVendidos, cantPersonasTotal = 0, nroPaqueteVentaMayorImporte;
    float precioPersona, horasActividades, recaudacion, ventaMayorImporte;
    char tipoAventura, tipoAventuraActual;

    cout<<"Ingrese numero de paque: ";
    cin>> nroPaquete;
    cout<<"Ingrese cantidad de personas incluidas: ";
    cin>>cantPersonas;
    cout<<"Ingrese precio por persona: $";
    cin>>precioPersona;
    cout<<"Ingrese horas totales de actividades: ";
    cin>>horasActividades;
    cout<<"Ingrese tipo de Aventura: ";
    cin>>tipoAventura;

    while(nroPaquete!=0)
    {
        tipoAventuraActual=tipoAventura;

        cantPaquetesVendidos=0;
        ventaMayorImporte=0;

        while(tipoAventura==tipoAventuraActual)
        {

            //Punto A
            cantPaquetesVendidos++;

            //Punto B
            cantPersonasTotal += cantPersonas;

            //Punto C
            recaudacion = cantPersonas * precioPersona;
            cout<<"La recaudacion del paquete fue: $"<<recaudacion<<endl;

            //Punto D
            if(recaudacion>ventaMayorImporte)
            {
                ventaMayorImporte=recaudacion;
                nroPaqueteVentaMayorImporte = nroPaquete;
            }

            cout<<"--------------------------------------------"<<endl;
            cout<<"Ingrese numero de paque: ";
            cin>> nroPaquete;
            cout<<"Ingrese cantidad de personas incluidas: ";
            cin>>cantPersonas;
            cout<<"Ingrese precio por persona: $";
            cin>>precioPersona;
            cout<<"Ingrese horas totales de actividades: ";
            cin>>horasActividades;
            cout<<"Ingrese tipo de Aventura: ";
            cin>>tipoAventura;
        }

        cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
        //Punto A
        cout<<"La cantidad de paquetes vendidos de la aventura "<< tipoAventuraActual <<" fue: "<<cantPaquetesVendidos<<endl;

        //Punto D
        cout<<"La venta con mayor importe fue: "<<nroPaqueteVentaMayorImporte<<endl;
    }

    //Punto B
    cout<<"La cantidad de personas de toda la temporada fue: "<<cantPersonasTotal<<endl;


    return 0;
}
