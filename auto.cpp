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
    if(velocidad + 15 > 230)
    {
        velocidad = 230;
    }
}

void automovil::frenar()
{
    if (velocidad > 0 )
    {
        velocidad = velocidad - 25;
    }
    if (velocidad -25 < 0)
    {
        velocidad = 0;
    }
}

void automovil::cambiarEstado()
{
    if (estado == true)
    {
        estado = false;
    }
    else if (estado == false)
    {
        estado = true;
    }
}

int automovil::getSpeed()
{
    return velocidad;
}

int automovil::getState()
{
    return estado;
}

void automovil::imprimirV()
{
    if (velocidad < 160)
    {
        cout << "velocidad: "<< velocidad << " Km/h" << endl;
    }
    else if (velocidad > 160)
    {
        cout <<"velocidad: "<< velocidad <<" Km/h <ADVERTENCIA DE VELOCIDAD>" << endl;
    }
    else if (velocidad = 230)
    {
        cout <<"velocidad: "<< velocidad <<" Km/h VELOCIDAD MAXIMA" << endl;
    }
}

void automovil::imprimirE()
{
    if (estado == false)
    {
        cout << "Estado: apagado. " << endl;
    }
    else if (estado == true)
    {
        cout << "Estado: prendido. " << endl;
    }
} 


    
    


