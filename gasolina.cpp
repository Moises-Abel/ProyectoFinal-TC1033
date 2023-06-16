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

void gasolina::gasto(double n)
{
    double consumo = n*0.005;
    nivelGasolina = nivelGasolina - consumo;
}

void gasolina::setGasolina(double n)
{
    if (nivelGasolina != 42)
    {
        nivelGasolina = nivelGasolina + n;
        if (nivelGasolina > 42)
        {
            nivelGasolina = 42;
        }
        if (n >= 42)
        {
            nivelGasolina = 42;
        }
    }
}


double gasolina::getGasolina()
{
    int porcentajeGasolina;
    porcentajeGasolina = (nivelGasolina*100)/42;
    return porcentajeGasolina;
}

void gasolina::imprimir()
{
    int porcentajeGasolina;
    porcentajeGasolina = (nivelGasolina*100)/42;
    if(porcentajeGasolina > 15)
    {
        cout << "Tanque: " << porcentajeGasolina << "%" << endl;
    }
    else if(porcentajeGasolina < 15 && porcentajeGasolina > 0)
    {
        cout << "Tanque: " << porcentajeGasolina << "%" << " Combustible bajo" << endl;
    }
    else if (porcentajeGasolina <= 0)
    {
        cout << "Tanque: Tanque vacio" << endl;        
    }
    
}