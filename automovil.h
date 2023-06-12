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

    void getSpeed();
    void imprimir();
    bool cambiarEstado();
};

