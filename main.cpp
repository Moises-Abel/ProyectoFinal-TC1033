/*
*Autor: Moisés Abel Díaz Nava
*Archivo con la función main
*/

#include <iostream>
#include "automovil.h"
#include "gasolina.h"
#include "luces.h"
using namespace std;

int main(int argc, char const *argv[])
{
    automovil a(int (0), false);
    gasolina b(42);
    luces luz;
    int entrada = 0;
    while (entrada != 7)
    {
        system("CLS");
        b.gasto(a.getSpeed());
        cout << "- - - - - - - - - -" << endl;
        a.imprimirV();
        a.imprimirE();
        b.imprimir();
        luz.imprimir();
        cout << "- - - - - - - - - -" << endl;

        cout << "Tablero: inserte el numero de la accion que desea realizar" <<endl;
        cout << "(1) Prender/apagar el auto" << endl;
        cout << "(2) Subir la intesnidad de las luces" << endl;
        cout << "(3) Bajar la intensidad de las luces" << endl;
        cout << "(4) Acelerar" << endl;
        cout << "(5) Frenar" << endl;
        cout << "(6) Cargar gasolina al tanque" << endl;
        cout << "(7) Salir del auto" << endl;
        cin >> entrada;
        if (entrada > 0 && entrada <= 7)
        {
            if (entrada == 1)
            {
                a.cambiarEstado();
            }
            if (entrada == 2)
            {
                luz.changeState1();
            }
            if (entrada == 3)
            {
                luz.changeState2();
            }
            if (entrada == 4)
            {
                a.acelerar();
            }
            if (entrada == 5)
            {
                a.frenar();
            }
            if (entrada == 6)
            {
                double litros;
                cout << "Litros a depositar: ";
                cin >> litros;
                if (litros > 0)
                {
                    b.setGasolina(litros);
                }
                else
                {
                    cout << "Ingrese un valor apropiado. "<<endl;
                }
            }
        }
        if(a.getState() == false )
        {
            luz.setState(0);
            a.setSpeed(0);
        }
        if(b.getGasolina() <= 0)
        {
            luz.setState(0);
            a.setSpeed(0);
            a.setState(false);
        }
    }
    system("CLS");   
}
