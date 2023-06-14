/**
*Autor: Moisés Abel Díaz Nava
*clase "automoviles" 
*/
class automovil
{

private:
    int velocidad;
    int estado;
public:
    automovil();
    automovil(int a, bool e);

    void acelerar();
    void frenar();

    int getSpeed();
    bool getState();
    void setSpeed(int n);
    void setState(bool e);
    
    void cambiarEstado();
    void imprimirV();
    void imprimirE();
    
};

