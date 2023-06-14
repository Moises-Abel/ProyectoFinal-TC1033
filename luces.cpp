#include "luces.h"
#include "automovil.h"
#include <iostream>
using namespace std;

luces::luces()
{
    estado = 0;
}

int luces::changeState1()
{
    if (estado < 3)
    {
        estado = estado+1;
    }
    
}

int luces::changeState2()
{
    if (estado > 0)
    {
        estado = estado - 1;
    }
    
}

void luces::setState(int n)
{
    if (n >= 0 && n <= 3)
    {
        estado = n;
    }
}

int luces::getState()
{
    return estado;
}


void luces::imprimir()
{   
    if (estado == 0)
    {
        cout << "Luces: apagadas" << endl;
    }
    else if (estado == 1)
    {
        cout << "Luces: Prendidas" << endl;
    }
    else if (estado == 2)
    {
        cout << "Luces: altas" << endl;
    }
    else if (estado == 3)
    {
        cout << "Luces: Niebla <MAXIMO>" << endl;
    }

    
}