#include "llanta.h"
#include <iostream>
using namespace std;

llanta::llanta()
{
   presion = 33; 
}

int llanta::getPresion()
{
    return presion;
}

void llanta::setPresion(int n)
{
    presion = n;
}

void llanta::imprimir()
{
    if (presion > 32 &&  presion < 48 )
    {
       cout << "Presion de la llanta: " << presion << " PSI" << endl;
    }
    if (presion <= 32)
    {
       cout << "Presion de la llanta: " << presion << " PSI" << " <ALERTA>  presion baja" << endl;
    }
    if (presion >= 48)
    {
       cout << "Presion de la llanta: " << presion << " PSI" << " <ALERTA>  presion alta" << endl;
    }
     
}