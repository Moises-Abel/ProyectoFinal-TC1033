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
    int getState();
    
    void cambiarEstado();
    void imprimirV();
    void imprimirE();
    
};

