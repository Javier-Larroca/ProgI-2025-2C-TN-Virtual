#include <iostream>
using namespace std;

// TIPOS DE PASAJES:
// VALOR
// REFERENCIA
//------------

// PROTOTIPOS (FIRMA, CABECERA, DECLARACI�N)
void funcionConParametroPorValor(int valor);
void funcionConParametroPorReferencia(int &referencia);

int main()
{
    int variable = 100;

    //cout << "Direcci�n de Variable: " << &variable << endl; // Mostramos la direcci�n

    cout << "Main: Variable " << variable << endl;
    // funcionConParametroPorValor(100); // Pasamos el valor directamente
    funcionConParametroPorValor(variable);
    funcionConParametroPorReferencia(variable);
    cout << "Main: Variable " << variable << endl;

    return 0;
}

// DEFINCIONES
void funcionConParametroPorValor(int valor)
{
    cout << "=======================" << endl;
//    cout << "Direcci�n de Valor: " << &valor << endl; // Mostramos la direcci�n
    cout << "Funcion Valor " << valor << endl;
    valor = 500;
    cout << "Funcion Valor " << valor << endl;
    cout << "=======================" << endl;
}

void funcionConParametroPorReferencia(int &referencia)
{
    cout << "=======================" << endl;
//    cout << "Direcci�n de Referencia: " << &referencia << endl; // Mostramos la direcci�n

    cout << "Funcion Referencia " << referencia << endl;
    referencia = 500;
    cout << "Funcion Referencia " << referencia << endl;
    cout << "=======================" << endl;

}


