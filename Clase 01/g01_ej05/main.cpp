#include <iostream>
using namespace std;

/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un
 programa para ingresar por teclado la cantidad de alfajores vendidos de cada
 una de las tres marcas y luego se informe el porcentaje de ventas para cada
 una de ellas.
 Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el
 programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.
*/

int main()
{
    //Declarar las variables
    int cantAlfajoresA, cantAlfajoresB, cantAlfajoresC, totalAlfajores;
    float porcjA, porcjB, porcjC;

    //Ingreso de datos
    cout<<"Ingrese la cantidad de alfajores vendidos marca A: ";
    cin>>cantAlfajoresA;
    cout<<"Ingrese la cantidad de alfajores vendidos marca B: ";
    cin>>cantAlfajoresB;
    cout<<"Ingrese la cantidad de alfajores vendidos marca C: ";
    cin>>cantAlfajoresC;

    //Proceso
    totalAlfajores = cantAlfajoresA+cantAlfajoresB+cantAlfajoresC;
    //Casteo de un numero entero a un numero float
    porcjA = cantAlfajoresA * 100.0 / totalAlfajores;
    porcjB = cantAlfajoresB * 100 / (float)totalAlfajores;
    porcjC = (float)cantAlfajoresC * 100 / totalAlfajores;

    //Mostrar la información procesada
    cout<<"Porcentaje de alfajores marca A: "<<porcjA<<"%"<<endl;
    cout<<"Porcentaje de alfajores marca B: "<<porcjB<<"%"<<endl;
    cout<<"Porcentaje de alfajores marca C: "<<porcjC<<"%"<<endl;

    return 0;
}
