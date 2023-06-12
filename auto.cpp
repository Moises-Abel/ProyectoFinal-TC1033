/*
* AutoR: Moisés Abel Díaz Nava
*Clase auto
*/

#include "automovil.h"
#include <iostream>
using namespace std;

automovil::automovil()
{
    velocidad = 0;
    estado = false;
}

automovil::automovil(int a, bool e)
{
    velocidad = a;
    estado = e;
}

void automovil::acelerar()
{
    if (velocidad < 230)
    {
        velocidad = velocidad + 15;
    }
    else
    {
        cout << "Velocidad Maxima, no se puede acelerar mas";
    }
}

void automovil::frenar()
{
    if (velocidad > 0 )
    {
        velocidad = velocidad - 25;
    }
    else if (velocidad <= 24)
    {
        velocidad = 0;
    }
    else
    {
        cout << "El auto se encuentra detenido";
    }
}

void automovil::getSpeed()
{
    if (velocidad < 160)
    {
        cout << velocidad << " Km/h";
    }
    if (velocidad > 160)
    {
        cout << velocidad <<" Km/h <ADVERTENCIA DE VELOCIDAD>";
    }
}

void automovil::imprimir()
{
    cout << "velocidad: " << velocidad << " Km/H" << endl;
    if (estado == false)
    {
        cout << "Estado: apagado. " << endl;
    }
    else if (estado == true)
    {
        cout << "Estado: prendido. " << endl;
    }
}
    
    


