#include <iostream>
using namespace std;
/* Ejemplo: Hacer un programa para ingresar por teclado el c�digo de una marca de alfajores y nos muestre por pantalla la descripci�n. A: Aguila, B: Block, C: Cachafaz, D: Dantelli */

int main()
{
    setlocale(LC_ALL, "spanish");

    char opc;//, opcMay;
    cout<<"Ingrese el codigo del alfajor: ";
    cin>>opc;

    //cout<<"Contenido de opc: "<<opc<<endl;
    //opcMay = toupper(opc);
    //cout<<"Contenido de opcMay: "<<opcMay<<endl;

    switch (toupper(opc))
    {
    case 'A':
        cout<<"Aguila";
        break;
    case 'B':
        cout<<"Block";
        break;
    case 'C':
        cout<<"Cachafaz";
        break;
    case 'D':
        cout<<"Dantelli";
        break;
    default:
        cout<<"Se ingres� un c�digo incorrecto";
        break;
    }
    //cout<<endl<<"Contenido de opc: "<<opc<<endl;
}
