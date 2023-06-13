#include <iostream>
#include "gasolina.h"
#include "automovil.h"
using namespace std;

gasolina::gasolina()
{
    nivelGasolina = 42;
}

gasolina::gasolina(double n)
{
    nivelGasolina = n;
}

void gasolina::setGasolina(double n)
{
    if (n < 42 && nivelGasolina != 42)
    {
        nivelGasolina = nivelGasolina + n;
        if (nivelGasolina > 42)
        {
            nivelGasolina = 42;
        }
        
    }
}

double gasolina::getGasolina()
{
    return nivelGasolina;
}

void gasolina::imprimir()
{
    int porcentajeGasolina;
    porcentajeGasolina = (nivelGasolina*100)/42;
    cout << "Tanque: " << porcentajeGasolina << "%" << endl;
}