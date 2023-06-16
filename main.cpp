/*
*Autor: Moisés Abel Díaz Nava
*Archivo con la función main
*/

#include <iostream>
#include "automovil.h"
#include "gasolina.h"
#include "luces.h"
#include "llanta.h"
using namespace std;

int main(int argc, char const *argv[])
{
    automovil a(int (0), true);
    gasolina b(42);
    luces luz;
    llanta llantas[4];
    int entrada = 0;
    while (entrada != 8)
    {
        system("CLS");
        cout <<"Autor: Moises Abel Diaz Nava, A01799628. Ingenieria en robotica." << endl;
        b.gasto(a.getSpeed());
        cout << "- - - - - - - - - -" << endl;
        a.imprimirV();
        a.imprimirE();
        b.imprimir();
        luz.imprimir();
        cout << "presion recomendada: 40 psi" << endl;
        for (int i = 0; i < 4; i++)
        {
            llantas[i].imprimir();
        }
        cout << "- - - - - - - - - -" << endl;
        cout << "Tablero: inserte el numero de la accion que desea realizar" <<endl; 
        cout << "(1) Prender/apagar el auto" << endl; //El auto no enciende si no hay gasolina en el tanque
        cout << "(2) Subir la intesnidad de las luces" << endl; // 3 niveles, maximo niebla, minimo apagadas
        cout << "(3) Bajar la intensidad de las luces" << endl;
        cout << "(4) Acelerar" << endl;
        cout << "(5) Frenar" << endl;
        cout << "(6) Cargar gasolina al tanque" << endl; // no se puede cargar gasolina si el tanque esta lleno
        cout << "(7) Cambiar presion de las llantas" << endl; //Se pueden seleccionar cualquiera de las cuatro llantas
        cout << "(8) Salir del auto" << endl; // Fin del programa, se ejecuta el resto siempre y cuando no se seleccione esta opcion
        cin >> entrada;
        if (entrada > 0 && entrada < 8)
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
                system("ClS");
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
            if (entrada == 7)
            {
                int llantaSeleccionada;
                system("CLS");
                cout << "Que llanta desearias inflar: " <<endl;
                cout << endl;
                for (int i = 0; i < 4; i++)
                {
                    int j = i +1;
                    cout << "(" << j << ")";
                    llantas[i].imprimir();
                    cout << endl;
                }
                cin >> llantaSeleccionada;
                if (llantaSeleccionada > 0 && llantaSeleccionada <= 4 )
                {
                    int presionExtra;
                    cout << "Que tanta presion quieres en la llanta: ";
                    cin >> presionExtra;
                    llantas[llantaSeleccionada-1].setPresion(presionExtra);
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
