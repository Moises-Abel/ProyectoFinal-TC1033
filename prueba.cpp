/*
*Autor: Moisés Abel Díaz Nava
*/

#include <iostream>
#include "automovil.h"
#include "gasolina.h"
#include "luces.h"
using namespace std;

int main(int argc, char const *argv[])
{
    system("clear");
    automovil a(int (0), false);
    gasolina b(21);
    luces luz;
    int entrada = 0;
    while (entrada != 7)
    {
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
                b.setGasolina(litros);
            }
        }
        else
        {
            cout << "ingrese un valor apropiado de entre las opciones" << endl;
        }
    }   
}
