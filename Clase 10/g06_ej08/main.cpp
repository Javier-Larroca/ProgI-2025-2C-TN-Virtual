#include "funciones.h"

/**
 Dada una lista de n�meros compuesta por 10 subgrupos y cada grupo
 separado del siguiente por un cero, se pide generar un vector de 10 elementos
 con el m�ximo de cada uno de los subgrupos. Luego mostrar los elementos del
 vector por pantalla.*/

int main()
{
    const int CANT_GRUPOS = 3;
    int vecNumero[CANT_GRUPOS];

    for(int x=0; x<CANT_GRUPOS; x++)
    {
        vecNumero[x] = maximoSubGrupo();
        cout<<"---------------------"<<endl;
    }

    mostrarMayores(vecNumero, CANT_GRUPOS);

    return 0;
}
