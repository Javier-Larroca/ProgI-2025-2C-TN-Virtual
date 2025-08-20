#include <iostream>
using namespace std;

/*
Hacer un programa para ingresar por teclado la cantidad de horas
trabajadas por un operario y el valor que se le paga por hora
trabajada y listar por pantalla el sueldo que le corresponda.
*/

int main()
{
    int horas;
    float valorHora, sueldo;
    //float sueldo;

    cout<<"Ingrese las horas trabajadas: ";
    cin>>horas;
    cout<<"Ingrese el valor de la hora: $";
    cin>>valorHora;

    sueldo = horas * valorHora;

    cout<<"El sueldo de la persona es: $"<<sueldo <<endl;

    return 0;
}

