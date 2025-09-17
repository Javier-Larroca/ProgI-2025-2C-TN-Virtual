#include <iostream>
using namespace std;

/*Hacer un programa para ingresar por teclado los saldos de los clientes de un banco.
Cada registro contiene los siguientes datos:
    - Número del cliente
    - Número de sucursal (1, 2, 3 o 4)
    - Saldo del cliente
El lote finaliza cuando se ingresa un registro con número de sucursal igual a 10. Se
pide determinar e informar.
a) El número de sucursal con mayor porcentaje de clientes con saldo superior a $
20000.
b) El número de cliente con mayor saldo, indicando también de qué número de
sucursal es ese cliente. Se listan 2 resultados.
c) Para cada una de las sucursales la suma de los saldos de todos sus clientes. Se
listan 4 resultados.
*/

int main()
{
    int nroCliente, nroSucursal, contUno=0, contDos=0, contTres=0, contCuatro=0, total;
    float saldoCliente, porcjUno, porcjDos, porcjTres, porcjCuatro;

    cout << "Ingrese numero de cliente: ";
    cin>>nroCliente;
    cout<<"Ingrese numero de sucursal (1, 2, 3 o 4): ";
    cin>>nroSucursal;
    cout<<"Ingrese saldo del cliente: $";
    cin>>saldoCliente;

    while(nroSucursal != 10)
    {
        if(saldoCliente>20000)
        {
            switch(nroSucursal)
            {
            case 1:
                contUno++;
                break;
            case 2:
                contDos++;
                break;
            case 3:
                contTres++;
                break;
            case 4:
                contCuatro++;
                break;
            default:
                cout<<"Se ingreso una sucursal incorrecta"<<endl;
                break;
            }

        }

        cout << "Ingrese numero de cliente: ";
        cin>>nroCliente;
        cout<<"Ingrese numero de sucursal (1, 2, 3 o 4): ";
        cin>>nroSucursal;
        cout<<"Ingrese saldo del cliente: $";
        cin>>saldoCliente;
    }

    total=contUno+contDos+contTres+contCuatro;
    porcjUno = contUno/total*100;
    porcjDos = contDos/total*100;
    porcjTres = contTres/total*100;
    porcjCuatro = contCuatro/total*100;

    if(porcjUno> porcjDos && porcjUno>porcjTres && porcjUno>porcjCuatro)
    {
        cout<<"El mayor porcentaje de cliente con saldo mayor a $20.000 fue la sucursal 1. "<<endl;
    }
    else
    {
        if(porcjDos>porcjTres && porcjDos> porcjCuatro)
        {
            cout<<"El mayor porcentaje de cliente con saldo mayor a $20.000 fue la sucursal 2. "<<endl;
        }
        else
        {
            if(porcjTres>porcjCuatro)
            {
                cout<<"El mayor porcentaje de cliente con saldo mayor a $20.000 fue la sucursal 3. "<<endl;
            }
            else
            {
                cout<<"El mayor porcentaje de cliente con saldo mayor a $20.000 fue la sucursal 4. "<<endl;
            }
        }
    }

    return 0;
}
